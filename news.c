#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	char *a="hello world.";
	char *b="hi.";
	char *s1;
	char *s2;
	print (d);
	s1=newString(a);
	print(s1);
	s1=catString(s1,b);
	print(s1);
	s1=appendString(s1,'*',20);
	print(s1);
	s1=frontString(s1,'*',20);
	print(s1);
	replaceCharString(s1,'*','!');
	print(s1);
	free(s1);
	return 0;
}
