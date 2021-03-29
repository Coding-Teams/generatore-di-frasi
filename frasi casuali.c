/*
spicoli piersilvio
generazioni di frasi
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

//costanti
#define dim 20 //numero massimo di frasi
#define dim_array 5 //numero massimo delle stringhe negli array
#define dim_caratteri 50 //dimensione massima dei caratteri

//dichiarazione prototipi di funzione
void gen();

//variabili globali
char a[dim_array][dim_caratteri] = {"the ","a","one","some","any"};
char s[dim_array][dim_caratteri] = {" boy "," girl "," dog "," town "," car "};
char v[dim_array][dim_caratteri] = {" drove "," jumped "," ran "," walked "," skipped "};
char p[dim_array][dim_caratteri] = {" to"," from"," over"," under"," on"};

int main(){

	gen(); //generiamo le frasi casuali

	return 0;
}

void gen(){

    //generalizzazione del seme in tempo reale
    srand(time(NULL));

    //var. locali
	int i, c;
    char frasi[dim_caratteri];

	//stampa delle venti frasi generate
    puts("\ngenerazione frasi\n");

        for(i = 0; i < dim; i++){

            sprintf(frasi, a[rand()% dim_array]);
            strcat(frasi, " ");
            strcat(frasi, s[rand()% dim_array]);
            strcat(frasi, " ");
            strcat(frasi, v[rand()% dim_array]);
            strcat(frasi, " ");
            strcat(frasi, p[rand()% dim_array]);

            frasi[0] = toupper(frasi[0]);
            printf("\t%d _>  %s.\n", i + 1, frasi);
        }
}
