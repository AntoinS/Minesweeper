#include <stdio.h>
#include <stdlib.h>
#include "funk.c"
#define DIMZ 9
#define DIMS 9


int main()
{
    int iaF[DIMZ][DIMS];    //Zweidims.Feld
    int iZ=9, iS=9;             //Zeilen und Spalten



    for ( int count_zeilen = 0; count_zeilen < iZ; count_zeilen++ ) {
		for ( int count_spalten = 0; count_spalten < iS; count_spalten++ ) {
			iaF[count_zeilen][count_spalten] = count_zeilen + count_spalten;
		}
	}

	feldausgabe(iaF, iZ, iS);


    return 0;
}

