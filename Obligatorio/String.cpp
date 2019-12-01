//#include "stdafx.h"
#include "String.h"

using namespace std;

String :: String (){
    cadena = new char [1];
    cadena[0] = '\0';
}

String :: String (char *cad){
    int largo = strlen(cad);
    if(largo <= MAX){
        cadena = new char [largo + 1];
        strcpy (cadena, cad);
    }
}

String :: String (const String &otro) {
    int largo = strlen(otro.cadena);
    cadena = new char [largo + 1];
    strcpy (cadena, otro.cadena);
}

String String :: operator= (const String &otro) {
    if (this != &otro) {
        delete [] cadena;
        int largo = strlen(otro.cadena);
        cadena = new char [largo + 1];
        strcpy (cadena, otro.cadena);
    }
    return (*this);
}

bool String :: operator== (String otro){
	return (bool) (strcmp(cadena,otro.cadena) == 0);
 }

bool String :: operator< (String otro){
	return (bool) (strcmp(cadena,otro.cadena) < 0);
 }

String String :: operator+ (String otro){
	String aux;
	int largo1 = strlen(cadena);
	int largo2 = strlen(otro.cadena);
	aux.cadena = new char [largo1 + largo2 + 1];
	strcpy(aux.cadena,cadena);
	strcat(aux.cadena,otro.cadena);
	return aux;
 }

void String :: scan(){
	char aux[MAX];
	char c = cin.get();
	int i=0;
	while (c!='\n' && i<MAX-1){
		 aux[i] = c;
		 i++;
		 c = cin.get();
	}
	aux[i]='\0';
	cadena = new char[i+1];
	strcpy(cadena,aux);
 }

void String :: print (){
	cout << cadena;
}

long int String :: stringLongInt (){
	long int n=0;
	int i=0;
    while(cadena[i]!= '\0'){
        n=n+cadena[i];
        i++;
    }
	return n;
}

String :: ~String (){
    delete [] cadena;
}




