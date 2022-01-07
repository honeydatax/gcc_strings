#include "cstring.h"

int main(){
	char *a="hello world.";
	char *b="hi.";
	char *s1;
	s1=newString(a);
	print(s1);
	s1=catString(s1,b);
	print(s1);
	free(s1);
	return 0;
}