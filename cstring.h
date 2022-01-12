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
	if(c!=NULL)strcpy(c,a);
	return c;
}
//append same text into it string
char *catString(char *a,char *b){
	char *c;
	int i=strlen(a)+strlen(b)+5;
	c=realloc(a,i);
	if(c!=NULL)strcat(c,b);
	return c;
}
//fill new string
char *strString(char a,int i){
	char *c;
	int n;
	int ii=i+5;
	c=malloc(ii);
	memset(c,a,i);
	c[i]=0;
	return c;
}
//add a string to end of a string
char *appendString(char *cc,char a,int i){
	char *c;
	char *ccc;
	int n=strlen(cc)+i;
	c=NULL;
	ccc=strString(a,i);
	if (cc!=NULL && ccc!=NULL){
		c=catString(cc,ccc);
		free(ccc);
	}		
	return c;
}
//add a string to front of a string
char *frontString(char *cc,char a,int i){
	char *c;
	char *ccc;
	int n=strlen(cc)+i;
	c=NULL;
	ccc=strString(a,i);
	if (cc!=NULL && ccc!=NULL){
		c=catString(ccc,cc);
		free(cc);
	}		
	return c;
}
//replace chars
void *replaceCharString(char *c,char cc,char c1){
	char *ccc;
	char *cccc;
	int r=0;
	ccc=c;
	while (r!=1){
		cccc=strchr(ccc,cc);
		if(cccc!=NULL){
			ccc=cccc+1;
			cccc[0]=c1;
		}else{
			r=1;
		}
	}
}
//append same text into it string
char *catNString(char *a,char *b,int n){
	char *c;
	char *cc;
	int i=strlen(a)+n+6;
	c=realloc(a,i);
	if(c!=NULL){
		cc=c+strlen(a);
		strncpy(cc,b,n);
		cc[n]=0;
	}
	return c;
}
