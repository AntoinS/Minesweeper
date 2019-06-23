#include "funk.h"
void feldausgabe(int iaF[][DIMS], int iZ, int iS){
    for(int i=0; i<iZ; i++) {    // Schleife fuer Spalten, X-Achse
	for(int j=0; j<iS; j++) {
		printf("%d ", iaF[i][j]);
	}
	printf("\n");
}
}
