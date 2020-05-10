#include <iostream>
#include <string>
using namespace std;
/*
struct TListenKnoten
{
	int data;
	TListenKnoten *next;
	TListenKnoten *prev;
};

void hinten_anfuegen(TListenKnoten *&anker, const int wert)
{
	TListenKnoten *neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = wert;
	neuer_eintrag->next = nullptr;
	neuer_eintrag->prev = nullptr;
	if (anker == nullptr)
		anker = neuer_eintrag;
	else
	{
		TListenKnoten *ptr = anker;
		while (ptr->next != nullptr)
		{
			ptr = ptr->next;
		}
		ptr->next = neuer_eintrag;
		neuer_eintrag->prev = ptr;
	}
}

void vorne_anfuegen(TListenKnoten *&anker, const int wert)
{
	TListenKnoten *neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = wert;
	neuer_eintrag->next = nullptr;
	neuer_eintrag->prev = nullptr;
	if (anker == nullptr)
	{
		anker = neuer_eintrag;
	}
	else
	{
		TListenKnoten *ptr = anker;
		while (ptr->prev != nullptr)
		{
			 ptr = ptr->prev;
		}
		ptr->prev = neuer_eintrag;
		neuer_eintrag->next = ptr;
		anker = neuer_eintrag;
	}
}

string liste_als_string(TListenKnoten * anker)
{
	string resultat = "";
	if (anker == nullptr)
		return resultat;
	else
	{
		resultat += "[ ";
		TListenKnoten *ptr = anker;
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

string liste_als_string_rueckwaerts(TListenKnoten * anker) // erarbeitet
{
	string resultat = "";
	if (anker == nullptr)
		return resultat;
	else
	{
		resultat += "[ ";
		TListenKnoten *ptr = anker;
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

void liste_ausgeben(TListenKnoten * anker)
{
	if (anker == nullptr)
		cout << "Leere Liste." << endl;
	else
		cout << liste_als_string(anker) << endl;
}

void liste_ausgeben_rueckwaerts(TListenKnoten* anker) // erarbeietet
{
	if (anker == nullptr)
		cout << "Leere Liste." << endl;
	else
		cout << liste_als_string_rueckwaerts(anker) << endl;
}

// erarbeitet
void in_liste_einfuegen(TListenKnoten* &anker, int wert_neu, int vor_wert)
{
	TListenKnoten *neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = wert_neu;
	neuer_eintrag->next = nullptr;
	neuer_eintrag->prev = nullptr;

	if (anker == nullptr)
		anker = neuer_eintrag;
	else
	{
		TListenKnoten *ptr = anker;
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

void liste_loeschen(TListenKnoten * &anker) // erarbeitet
{
	TListenKnoten *ptr = anker;
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

int main()
{
	const int laenge = 5;
	TListenKnoten *anker = nullptr;
	liste_ausgeben(anker);
	liste_loeschen(anker);
	for (int i = 0; i < laenge; i++)
		hinten_anfuegen(anker, i*i);
	liste_ausgeben(anker);
	for (int i = 0; i < laenge; i++)
		vorne_anfuegen(anker, i*i);
	liste_ausgeben(anker);
	for (int i = 0; i < laenge; i++)
		vorne_anfuegen(anker, i*i);
	liste_ausgeben(anker);
	system("PAUSE");
	return 0;
}*/