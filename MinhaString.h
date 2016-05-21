#ifndef STRING
#define STRING
typedef struct{
	//colocar as funções Strings;

	int (*lastIndexOf)(char*,char);
	char *(*substring)(char*,int,int);
	int (*length)(char*);
    /*
    
	*equals(STRING_1, STRING_2);
	*equalsIgnoreCase(STRING_1, STRING_2);
	*toUpperCase(STRING_1);
	*toLowerCase(STRING_1);
	*replace(STRING_1, Caracteres_antigos,Caracteres_novos);
	*firstIndexOf(STRING_1,Caracter)
	
	*/
}String;
#define NEW {.lastIndexOf=lastIndexOf,.substring=substring,.length=length}

#endif

#ifndef MINHASTRING_H   // guardas de cabeçalho, impedem inclusões cíclicas
#define MINHASTRING_H

#include "MinhaString.c"

#endif
