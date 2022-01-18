#include <string.h>
#include <stdlib.h>
#include <stdio.h>

const char *Nnulls="";
//print string
void print(const char *a){
	puts(a);
}
void printList(const char *cc){
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
void deleteItem(const char *cc,int position){
	int *i;
	char *c;
	int n;
	int count=0;
	if(cc!=NULL && position>-1){
		i=(int *) cc;
		count=*(i+0);
		if(position<count-1){
			for(n=position;n<count;n++){
				c=(char *) *(i+(n+2));
				*(i+n+1)=(int)(c);
			}
			*(i+0)=count-1;
		}
	}
}
char *getItem(const char *cc,const int nn){
	int *i;
	char *c;
	int n;
	int count=0;
	c=NULL;
	if(cc!=NULL){
		i=(int *) cc;
		count=*(i+0);
		n=nn;
		if (n<count){
			c=(char *) *(i+(n+1));
		}
		return c;

	}
	return c;
}
void setItem(char *cc,const int nn,char *s1){
	int *i;
	char *c;
	int n;
	int count=0;
	c=NULL;
	if(cc!=NULL && s1!=NULL){
		i=(int *) cc;
		count=*(i+0);
		n=nn;
		if (n<count){
			*(i+n+1)=(int)(s1);
			
		}
	}

}
//create a new string from a constante
char *newString(const char *a){
	const char *aa;
	char *c;
	char *cc="";
	size_t i=5;
	if (a!=NULL){
		i=i+strlen(a);
		aa=a;
	}else{
		i=5;
		aa=cc;
	}
	c=malloc(i);
	if(c!=NULL && aa!=NULL)strcpy(c,aa);
	return c;
}
//append same text into it string
char *catString(char *a,const char *b){
	char *aa;
	const char *bb;
	char *c;
	size_t i=5;
	char *nulls="";
	int b0=0;
	if (a==NULL){
		aa=newString(nulls);
		b0=-1;
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
	if(c!=NULL && aa!=NULL && bb!=NULL)strcat(c,bb);
	return c;
}
//fill new string
char *strString(const char a,const size_t i){
	char *c;
	int n;
	size_t ii=i+5;
	c=malloc(ii);
	if(c!=NULL){
		memset(c,a,i);
		c[i]=0;
	}
	return c;
}
//add a string to end of a string
char *appendString(char *cc,char a,const size_t i){
	char *aa;
	char *c;
	char *ccc;
	size_t n=i+5;
	char *nulls="";
	int b0=0;
	if (cc==NULL){
		aa=newString(nulls);
		b0=-1;
		n=0;
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
char *frontString(char *cc,const char a,const size_t i){
	char *aa;
	char *c;
	char *ccc;
	char *nulls="";
	int b0=0;
	size_t n=i+5;
	if (cc==NULL){
		aa=newString(nulls);
		b0=-1;
	}else{
		n=n+strlen(cc);
		aa=cc;
	}
	c=NULL;
	ccc=strString(a,i);
	if (aa!=NULL && ccc!=NULL){
		c=catString(ccc,aa);
		free(aa);
		b0=0;
	}
	if(aa!=NULL && b0)free(aa);
	return c;
}
//replace chars
void *replaceCharString(char *c,const char cc,const char c1){
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
char *catNString(char *a,const char *b,const size_t n){
	char *c;
	char *cc;
	char *aa;
	const char *bb;
	char *nulls="";
	int b0=0;
	int b1=0;
	size_t i=n+6;
	if (a==NULL){
		aa=newString(nulls);
		b0=-1;
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
char *replaceString(char *c,const char *cc,const char *c1){
	const char *cl;
	const char *cll;
	char *c2;
	char *ccc;
	char *cccc;
	char *nulls="";
	int l=0;
	size_t n=0;
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
		l=0;
	}else{
		cl=cc;
		l=strlen(cl);
	}
	
	if (c1==NULL){
		cll=nulls;
	}else{
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
	char *nulls="";
	char *ccc;
	if (c==NULL){
		ccc=nulls;
	}else{
		ccc=c;
	}
	cc=malloc(20);
	if(cc!=NULL){
		i=(int *)cc;
		*(i+0)=1;
		*(i+1)=(int)(ccc);
	}
	return cc;
}
char *addPointer(char *c1,const char *c){
	char *cc;
	const char *ccc;
	int *i;
	int *it;
	int ii;
	char *nulls="";
	int count;
	int mes=0;
	if(c==NULL){
		ccc=nulls;
	}else{
		ccc=c;
	}
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
			*(it+mes)=(int)(ccc);
		}
	}
	return cc;
}
char *splitString(char *c,const char cc){
	char *c2;
	char *c1;
	char *ccc;
	char *cccc;
	int count=0;
	int r=0;
	int b=0;
	char *arr;
	ccc=c;
	if(c==NULL){
		ccc=newString("");
		b=-1;
	}else{
		ccc=c;
	}
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
	if(b && ccc!=NULL)free(ccc);
	return arr;
}
void frees(char *c){
	if(c!=NULL)free(c);
}
char *ltrim(char *c){
	char *cc=NULL;
	size_t t=0;
	size_t n=0;
	if(c!=NULL){
		t=strlen(c);
		for(n=0;n<t+1;n++){
			if(c[n]!=0 && c[n]>32){
				cc=c+n;
				n=t+2;
			}else{
				if(c[n]==0){
					cc=c+n;
					n=t+2;
				}
			}
		}
	}
	return cc;
}
char *rtrim(char *c){
	char *cc;
	char *ccc;
	size_t t=0;
	size_t n=0;
	if (c==NULL){
		cc=newString("");
	}else{
		cc=newString(c);
	}
	if(cc!=NULL){
		ccc=cc;
		t=strlen(cc);
		for(n=0;n<t;n++){
			if(cc[n]!=0 && cc[n]>32){
				ccc=cc+n;
			}
		}
		ccc[0]=0;
	}
	return cc;
}



char *returnNull(char *c){
	char *cc;
	if(c==NULL){
		cc=newString("");
	}else{
		cc=c;
	}
	return cc;
}

char *trim(char *c){
	char *cc=NULL;
	if(c!=NULL){
		cc=ltrim(c);
		cc=rtrim(cc);
	}
	return cc;
}
char *mid(const char *c,const int start,const int sizes){
	char const *cc;
	int n=0;
	char *ccc;
	if(c!=NULL){
		ccc=NULL;
		if (start<=(int) strlen(c)){
			n=sizes;
			cc=c+start;
			n=(int) sizes;
			if (sizes>(int) strlen(cc))n=(int)strlen(cc);
			ccc=catNString(ccc,cc,(size_t) sizes);
		}
	}
	return ccc;
}
char *rigths(char *c,const int sizes){
	char *cc;
	int n=0;
	cc=c;
	if (c!=NULL){
		n=(strlen(c)-sizes);
		if (n<1)n=0;
		cc=c+n;
	}
	return cc;
}
char *lefths(char *c,const int sizes){
	char *cc;
	char *ccc;
	int n=0;
	cc=c;
	ccc=NULL;
	if (c!=NULL){
		n=(int)sizes;
		if (n>(int)strlen(c))n=(int)strlen(c);
		ccc=catNString(ccc,c,n);
	}
	return ccc;
}
char *edit(char *c,const int position,const int add,const char ch ){
	char *cc;
	char *ccc;
	char *cp;
	cc=NULL;
	ccc=NULL;
	cp=NULL;
	if (c!=NULL && position>0 && add>0){
		if(position<(int)strlen(c)){
			ccc=strString(ch,add);
			cc=c+position;
			cp=newString(cc);
			cc[0]=0;
			cc=c;
			cc=catString(cc,ccc);
			frees(ccc);
			cc=catString(cc,cp);
			frees(cp);
		}
	}
	return cc;
}
void deledit(char *c,const int position,const int sub){
	char *cc;
	char *ccc;
	char *cp;
	int n=0;
	cc=NULL;
	ccc=NULL;
	cp=NULL;
	if (c!=NULL && position>0 && sub>0){
		if(position<(int)strlen(c)){
			ccc=c+position;
			n=position-sub;
			if (n<1)n=0;
			cp=c+n;
			strcpy(cp,ccc);
		}
	}
}
