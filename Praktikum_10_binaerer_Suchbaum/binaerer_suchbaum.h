#pragma once

namespace suchbaum {

	struct BaumKnoten
	{
		int data;
		BaumKnoten *parent;
		BaumKnoten *higher;
		BaumKnoten *lower;
	};
	void ausgeben(BaumKnoten* &anker);
	void einfuegen(BaumKnoten* &anker, int wert);
	void knoten_ausgeben(BaumKnoten* knoten, int tiefe);
}
