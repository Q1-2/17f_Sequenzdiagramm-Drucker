// 17f_Sequenzdiagramm Drucker.cpp 
//
#include "stdafx.h"
#include "Drucker.h"
#include "Sachbearbeiter.h"

int main()
{
	// Drucker- und SachbearbeiterObjekte anlegen.
	Drucker d1; 
	Sachbearbeiter mueller;

	// Umsetzung der Assoziation
	mueller.setPDrucker(&d1); 

	//Herr Mueller startet einen Druckauftrag
	mueller.starteDruck();

	mueller.druckerAusschalten();

	return 0;
}

