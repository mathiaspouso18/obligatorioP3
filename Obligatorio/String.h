#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include <string.h>
#include <stdio.h>
#include <iostream>

const int MAX = 80;
class String {
    private:
        char * cadena;
    public:
        // Constructor por defecto
        String ();
        // Constructor común
        String (char *);
        // Constuctor de copia
        String (const String &);
        // Sobrecarga operador =
        String operator= (const String &);
        bool operator==(String);
        bool operator<(String);
        String operator+(String);
		void scan ();
		void print ();
		/* pasa un String a su valor en ascii */
		long int stringLongInt ();
        // Destructor
        ~String ();
 };

#endif // STRING_H_INCLUDED
