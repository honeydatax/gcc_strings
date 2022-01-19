#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//append part of a string
	char *s;
	char *s2;
	print(d);
	s2=strString('*',20);
	s=newString("hello world...");	
	s=catNString(s,s2,5);
	print(s);
	frees(s);
	frees(s2);
	return 0;
}
