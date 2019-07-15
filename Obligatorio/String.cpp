#include "String.h"

void strcrear (String & s){
    s = new char[1];
    s[0] = '\0';
}

void strdestruir (String &s){
    delete [] s;
    s = NULL;
}

int strlar (String s){
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

void strcop (String &s1,String s2){
    int i = 0;
    int largo = strlar(s2) + 1;
    //delete [] s1;
    s1 = new char[largo];
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

void scan (String &s){
    String aux = new char[MAXSTRING];
    int i=0;
    char c;
    fflush(stdin);
    scanf ("%c", &c);
    while ((c!= '\n' && i < MAXSTRING-1)){
        aux[i] = c;
        i++;
        scanf ("%c", &c);
    }
    aux[i] = '\0';
    strcop (s,aux);
    strdestruir (aux);
}

void strcon (String &s1,String s2)
{
     String aux;
     strcrear(aux);
     strcop (aux, s1);
     int largo = strlar (s1) + strlar (s2) + 1;
     if (largo > MAXSTRING)
     largo = MAXSTRING;

     delete [] s1;
     s1 = new char[largo];
     int i = 0;
     while (aux[i] != '\0')     {
         s1[i] = aux[i];
         i++;
     }
     int j = 0;
     while (s2[j] != '\0' && i < MAXSTRING-1){
         s1[i] = s2[j];
         i++;
         j++;
     }
     s1[i] = '\0';
     strdestruir (aux);
}

void strswp (String &s1, String &s2){
    String aux;
    aux = s1;
    s1 = s2;
    s2 = aux;
}

void print (String s){
    int i = 0;
    while(s[i]!= '\0')
    {
        printf ("%c", s[i]);
        i++;
    }
}

Boolean streq(String s1, String s2)
{
	int i = 0;
	Boolean iguales = TRUE;

	while(iguales && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		if(s1[i] != s2[i])
			iguales = FALSE;
		i++;
	}

	if((s1[i] != '\0') || (s2[i] != '\0'))
		iguales = FALSE;

	return iguales;
}

int SumarASCII(String s)
{
    int total = 0, largoNom = 0;
    largoNom = strlar(s);
    for(int i=0;i<largoNom;i++)
    {
        total = total + s[i];
    }
    return total;
}

Boolean EsMayor(String s1, String s2)
{
	Boolean es = FALSE, stop = FALSE;
	int i = 0;

	while(!stop && ((s1[i] != '\0') || (s2[i] != '\0'))){
		if(s1[i] < s2[i])
		{
			es = TRUE;
			stop = TRUE;
		}
		else
		{
			if(s1[i] > s2[i])
			{
				es = FALSE;
				stop = TRUE;
			}
		}
		i++;
	}
	return es;
}
