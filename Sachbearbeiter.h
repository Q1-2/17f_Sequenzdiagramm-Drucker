#pragma once
#include "stdafx.h"
#include "Drucker.h"


class Sachbearbeiter
{
private:
	Drucker* d1; // 1. Drucker

public:
	Sachbearbeiter();
	~Sachbearbeiter();
	void setPDrucker(Drucker*);
	void starteDruck();
	void druckerAusschalten();


};

	Sachbearbeiter::Sachbearbeiter()
	{
		d1 = NULL; // Noch kein Drucker bekannt;
	}

	Sachbearbeiter::~Sachbearbeiter(){ }

	void Sachbearbeiter::setPDrucker(Drucker* pDrucker)
	{
	d1 = pDrucker; // Jetzt ist der Drucker bekannt.
	}

	void Sachbearbeiter::starteDruck()
	{
		bool ok = false;
		int anzahl = 1;

		while (ok == false)
		{
		cout<<"Druckvorgang: " << anzahl++ << endl;

		ok = d1->drucken();	// Hier wird die Nachricht "drucken" von Sachbearbeiter an den Drucker gesendet.
									// Die Antwort des Druckers wird in die Variable ok gespeichert.
									// Die Nachrichten laufen synchron.
		if(!ok) cout<<"Fehlerhafter Druck!"<<endl<<endl;
		}
		cout<<endl;
		cout<<"Drucken beendet!"<<endl<<endl;


	}

	void Sachbearbeiter::druckerAusschalten()
	{
		d1->ausschalten(); // Senden der asynchronen Nachricht "ausschalten".
		Sleep(1000); // 1 Sekunde warten.
		cout<<"Drucker ausgeschaltet"<<endl<<endl;
	}



