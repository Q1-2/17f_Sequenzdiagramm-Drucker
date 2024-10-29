#pragma once
#include "stdafx.h"


class Drucker
{
private:
	bool schalter; // Simuliert das Einschalten des Druckers.

public:
	Drucker();
	~Drucker();
	bool drucken();
	void ausschalten();
	void standBy();
};

Drucker::Drucker()
{
	schalter = true; // Drucker ist eingeschaltet.
}

Drucker::~Drucker() {}

bool Drucker::drucken()
{
	int wahrscheinlichkeit = 0;
	cout << "\n Drucken ...." <<endl;
	Sleep(2000); // 2 Sekunde warten.
	wahrscheinlichkeit = rand()%1000 + 1; //Die Methode simuliert eine 80%-Wahrscheinlichkeit, dass der Druck gut geworden ist.
	
	if (wahrscheinlichkeit > 200)
	{
		this->standBy();
		return true; //Die Methode antwortet mit der Nachricht true oder false. Synchrone Nachricht!
	}
	return false;
}

//asynchrone Nachricht, da ein return fehlt --> keine Rückantwort
void Drucker::ausschalten() 
{
	schalter = false; //Drucker ist ausgeschaltet.
}

void Drucker::standBy()
{
	cout << "stand by - warte auf einen Druckauftrag ...." << endl;
}





