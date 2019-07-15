#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include "Boolean.h"
#include <stdio.h>

const int MAXSTRING = 80;
typedef char * String;

/* crea un string vac�o */
void strcrear (String &s);

/* libera la memoria usada por el string */
void strdestruir (String &s);

/* devuelve el largo del string s */
int strlar (String s);

/* copia el contenido del string s2 en s1 */
void strcop (String &s1, String s2);

/* lee el string s desde teclado */
void scan (String &s);

/* concatena el contenido de s2 al final de s1 */
void strcon (String &s1, String s2);

/* intercambia los contenidos de s1 y s2 */
void strswp (String &s1, String &s2);

/* imprime el string s por pantalla */
void print (String s);

Boolean EsMayor(String s1, String s2);

/* Compara dos strings */
Boolean streq(String s1, String s2);

int SumarASCII(String s);

#endif // STRING_H_INCLUDED
