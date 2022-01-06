#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void print(char *a){
	puts(a);
}

//create a new string from a constante
char *newString(char *a){
	char *c;
	int i=strlen(a)+5;
	c=malloc(i);
	strcpy(c,a);
	return c;
}
//append same text into it string
char *catString(char *a,char *b){
	char *c;
	int i=strlen(a)+strlen(b)+5;
	c=realloc(a,i);
	strcat(c,b);
	return c;
}
