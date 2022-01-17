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
	char *aa;
	char *c;
	char *cc="";
	int i=5;
	if (a!=NULL){
		i=i+strlen(a);
		aa=a;
	}else{
		i=5;
		aa=cc;
	}
	c=malloc(i);
	if(c!=NULL)strcpy(c,aa);
	return c;
}
//append same text into it string
char *catString(char *a,char *b){
	char *aa;
	char *bb;
	char *c;
	int i=5;
	char *nulls="";
	if (a==NULL){
		aa=newString(nulls);
	}else{
		i=i+strlen(a);
		aa=a;
	}
	if (b==NULL){
		bb=nulls;
	}else{
		i=i+strlen(b)+5;
		bb=b;
	}
	c=realloc(aa,i);
	if(c!=NULL)strcat(c,bb);
	return c;
}
//fill new string
char *strString(char a,int i){
	char *c;
	int n;
	int ii=i+5;
	c=malloc(ii);
	if(c!=NULL){
		memset(c,a,i);
		c[i]=0;
	}
	return c;
}
//add a string to end of a string
char *appendString(char *cc,char a,int i){
	char *aa;
	char *c;
	char *ccc;
	int n=i+5;
	char *nulls="";
	if (cc==NULL){
		aa=newString(nulls);
	}else{
		n=n+strlen(cc);
		aa=cc;
	}
	c=NULL;
	ccc=strString(a,i);
	if (aa!=NULL && ccc!=NULL){
		c=catString(aa,ccc);
		free(ccc);
	}		
	return c;
}
//add a string to front of a string
char *frontString(char *cc,char a,int i){
	char *aa;
	char *c;
	char *ccc;
	char *nulls="";
	int n=i+5;
	if (cc==NULL){
		aa=newString(nulls);
	}else{
		n=n+strlen(cc);
		aa=cc;
	}
	c=NULL;
	ccc=strString(a,i);
	if (aa!=NULL && ccc!=NULL){
		c=catString(ccc,aa);
		free(aa);
	}		
	return c;
}
//replace chars
void *replaceCharString(char *c,char cc,char c1){
	char *ccc;
	char *cccc;
	int r=0;
	ccc=c;
	if(c!=NULL){
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
}
//append same text into it string
char *catNString(char *a,char *b,int n){
	char *c;
	char *cc;
	char *aa;
	char *bb;
	char *nulls="";
	int i=n+6;
	if (a==NULL){
		aa=newString(nulls);
	}else{
		i=i+strlen(a);
		aa=a;
	}
	if (b==NULL){
		bb=nulls;
	}else{
		bb=b;
	}
		
	c=realloc(aa,i);
	if(c!=NULL){
		cc=c+strlen(aa);
		strncpy(cc,bb,n);
		cc[n]=0;
	}
	return c;
}
//replace string
char *replaceString(char *c,char *cc,char *c1){
	char *cl;
	char *cll;
	char *c2;
	char *ccc;
	char *cccc;
	char *nulls="";
	int l=0;
	int n=0;
	int r=0;
	ccc=c;
	c2=newString("");
	
	if (c==NULL){
		ccc=nulls;
		l=0;
	}else{
		ccc=c;
}

	if (cc==NULL){
		cl=nulls;
	}else{
		cl=cc;
	}
	
	if (c1==NULL){
		cll=nulls;
		l=0;
	}else{
		l=strlen(c1);
		cll=c1;
	}
	
	
	
	r=0;
	while (r!=1){
		cccc=strstr(ccc,cl);
		if(cccc!=NULL){
			n=cccc-ccc;
			catNString(c2,ccc,n);
			catString(c2,cll);
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
char *splitString(char *c,char cc){
	char *c1;
	char *ccc;
	char *cccc;
	int count=0;
	int r=0;
	char *arr;
	ccc=c;
	while (r!=1){
		cccc=strchr(ccc,cc);
		if(cccc!=NULL){
			if(count==0){
				arr=newPointer(ccc);
			}else{
				arr=addPointer(arr,ccc);
			}
			ccc=cccc+1;
			cccc[0]=0;
			count++;
		}else{
			if(count==0){
				arr=newPointer(ccc);
			}else{
				arr=addPointer(arr,ccc);
			}
			r=1;
		}
	}
	return arr;
}
