#include <iostream>
#include <string>

#include "binaerer_suchbaum.h";

void suchbaum::einfuegen(BaumKnoten* &anker, int wert)
{
	BaumKnoten *neuer_eintrag = new BaumKnoten;
	neuer_eintrag->data = wert;
	neuer_eintrag->lower = nullptr;
	neuer_eintrag->higher = nullptr;
	neuer_eintrag->parent = nullptr;

	if (anker == nullptr)
	{
		anker = neuer_eintrag;
	}
	else
	{
		BaumKnoten *ptr = anker;
		while (true)
		{
			if (ptr->data > neuer_eintrag->data)
			{
				if (ptr->lower != nullptr)
				{
					ptr = ptr->lower;
				}
				else
				{
					break;
				}
			}
			else if (ptr->data < neuer_eintrag->data)
			{
				if (ptr->higher != nullptr)
				{
					ptr = ptr->higher;
				}
				else
				{
					break;
				}
			}
			else if (ptr->data == neuer_eintrag->data)
			{
				return;
			}
		}
		if (ptr->data > neuer_eintrag->data)
		{
			ptr->lower = neuer_eintrag;
			neuer_eintrag->parent = ptr;
		}
		if (ptr->data < neuer_eintrag->data)
		{
			ptr->higher = neuer_eintrag;
			neuer_eintrag->parent = ptr;
		}
	}
}

void suchbaum::ausgeben(BaumKnoten* &anker)
{
	BaumKnoten *ptr = anker;
	BaumKnoten *ptr_parent = ptr;
	int tiefe = 0;

	if (ptr != nullptr)
	{
		if (ptr->higher != nullptr)
		{
			ausgeben(ptr->higher);
		}
		while (ptr_parent->parent != nullptr)
		{
			ptr_parent = ptr_parent->parent;
			tiefe++;
		}
		suchbaum::knoten_ausgeben(ptr, tiefe);
		if (ptr->lower != nullptr)
		{
			ausgeben(ptr->lower);
		}
		
		
	}
	else
	{
		std::cout << "Leerer Baum." << std::endl;
	}
}

void suchbaum::knoten_ausgeben(BaumKnoten* knoten, int tiefe)
{
	for (int i = 0; i < tiefe; i++)
	{
		std::cout << "++";
	}
	std::cout << knoten->data << std::endl;
}
