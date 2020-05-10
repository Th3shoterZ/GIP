#pragma once

#include <iostream>
#include <string>
using namespace std;

template <typename T> struct TListenKnoten
{
	T data;
	TListenKnoten<T> *next;
	TListenKnoten<T> *prev;
};

template <typename T> void hinten_anfuegen(TListenKnoten<T> *&anker, const int wert)
{
	TListenKnoten<T> *neuer_eintrag = new TListenKnoten<T>;
	neuer_eintrag->data = wert;
	neuer_eintrag->next = nullptr;
	neuer_eintrag->prev = nullptr;
	if (anker == nullptr)
		anker = neuer_eintrag;
	else
	{
		TListenKnoten<T> *ptr = anker;
		while (ptr->next != nullptr)
		{
			ptr = ptr->next;
		}
		ptr->next = neuer_eintrag;
		neuer_eintrag->prev = ptr;
	}
}

template <typename T> void vorne_anfuegen(TListenKnoten<T> *&anker, const int wert)
{
	TListenKnoten<T> *neuer_eintrag = new TListenKnoten<T>;
	neuer_eintrag->data = wert;
	neuer_eintrag->next = nullptr;
	neuer_eintrag->prev = nullptr;
	if (anker == nullptr)
	{
		anker = neuer_eintrag;
	}
	else
	{
		TListenKnoten<T> *ptr = anker;
		while (ptr->prev != nullptr)
		{
			ptr = ptr->prev;
		}
		ptr->prev = neuer_eintrag;
		neuer_eintrag->next = ptr;
		anker = neuer_eintrag;
	}
}

template <typename T> string liste_als_string(TListenKnoten<T> * anker)
{
	string resultat = "";
	if (anker == nullptr)
		return resultat;
	else
	{
		resultat += "[ ";
		TListenKnoten<T> *ptr = anker;
		do
		{
			resultat += std::to_string(ptr->data);
			if (ptr->next != nullptr) resultat += " , ";
			else resultat += " ";
			ptr = ptr->next;
		} while (ptr != nullptr);
		resultat += "]";
	}
	return resultat;
}

template <typename T> string liste_als_string_rueckwaerts(TListenKnoten<T> * anker) // erarbeitet
{
	string resultat = "";
	if (anker == nullptr)
		return resultat;
	else
	{
		resultat += "[ ";
		TListenKnoten<T> *ptr = anker;
		while (ptr->next != nullptr)
		{
			ptr = ptr->next;
		}
		do
		{
			resultat += std::to_string(ptr->data);
			if (ptr->prev != nullptr) resultat += " , ";
			else resultat += " ";
			ptr = ptr->prev;
		} while (ptr != nullptr);
		resultat += "]";
	}
	return resultat;
}

template <typename T> void liste_ausgeben(TListenKnoten<T> * anker)
{
	if (anker == nullptr)
		cout << "Leere Liste." << endl;
	else
		cout << liste_als_string(anker) << endl;
}

template <typename T> void liste_ausgeben_rueckwaerts(TListenKnoten<T>* anker) // erarbeietet
{
	if (anker == nullptr)
		cout << "Leere Liste." << endl;
	else
		cout << liste_als_string_rueckwaerts(anker) << endl;
}

// erarbeitet
template <typename T> void in_liste_einfuegen(TListenKnoten<T>* &anker, int wert_neu, int vor_wert)
{
	TListenKnoten<T> *neuer_eintrag = new TListenKnoten<T>;
	neuer_eintrag->data = wert_neu;
	neuer_eintrag->next = nullptr;
	neuer_eintrag->prev = nullptr;

	if (anker == nullptr)
		anker = neuer_eintrag;
	else
	{
		TListenKnoten<T> *ptr = anker;
		while (ptr->next != nullptr)
		{
			if (ptr->data == vor_wert)
			{
				break;
			}
			else
			{
				ptr = ptr->next;
			}
		}
		if (ptr->next == nullptr && ptr->data != vor_wert)
		{
			ptr->next = neuer_eintrag;
			neuer_eintrag->prev = ptr;
		}
		else
		{
			neuer_eintrag->next = ptr;
			neuer_eintrag->prev = ptr->prev;
			ptr->prev = neuer_eintrag;
			if (neuer_eintrag->prev != nullptr)
			{
				neuer_eintrag->prev->next = neuer_eintrag;
			}
			else
			{
				anker = neuer_eintrag;
			}
		}
	}
}

template <typename T> void liste_loeschen(TListenKnoten<T> * &anker) // erarbeitet
{
	TListenKnoten<T> *ptr = anker;
	if (ptr != nullptr)
	{
		while (ptr->next != nullptr)
			ptr = ptr->next;
		while (ptr->prev != nullptr)
		{
			ptr = ptr->prev;
			delete ptr->next;
			ptr->next = nullptr;
		}
		anker = nullptr;
	}
}

template <typename T> void liste_aufaddieren(TListenKnoten<T>* &anker)
{
	double summe = 0;
	if(anker == nullptr)
	{
		cout << "Listensumme: " << 0 << endl;
	}
	else
	{
		TListenKnoten<T>* ptr = anker;
		while (ptr->next != nullptr)
		{
			summe = summe + ptr->data;
			ptr = ptr->next;
		}
		cout << "Listensumme: " << summe << endl;;
	}
}

