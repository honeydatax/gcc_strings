#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//print string
void print(char *a){
	puts(a);
}
void printList(char *cc){
	int *i;
	char *c;
	int n;
	int count=0;
	if(cc!=NULL){
		i=(int *) cc;
		count=*(i+0);
		for(n=0;n<count;n++){
			c=(char *) *(i+(n+1));
			print(c);
		}
	}
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
//replace string
char *replaceString(char *c,char *cc,char *c1){
	char *c2;
	char *ccc;
	char *cccc;
	int l=strlen(cc);
	int n=0;
	int r=0;
	ccc=c;
	c2=newString("");
	while (r!=1){
		cccc=strstr(ccc,cc);
		if(cccc!=NULL){
			n=cccc-ccc;
			catNString(c2,ccc,n);
			catString(c2,c1);
			ccc=cccc+l;
		}else{
			r=1;
			catString(c2,ccc);
		}
	}
	return c2;
}
//new list
char *newPointer(char *c){
	char *cc;
	int *i;
	int ii;
	cc=malloc(20);
	if(cc!=NULL){
		i=(int *)cc;
		*(i+0)=1;
		*(i+1)=(int)(c);
	}
	return cc;
}
char *addPointer(char *c1,char *c){
	char *cc;
	int *i;
	int *it;
	int ii;
	int count;
	int mes=0;
	cc=NULL;
	if(c1!=NULL){
		i=(int *) c1;
		count=*(i+0);
		count++;
		*(i+0)=count;
		cc=realloc(c1,(count*4)+8);
		if(cc!=NULL){
			it=(int *)cc;
			mes=count;
			*(it+mes)=(int)(c);
		}
	}
	return cc;
}
