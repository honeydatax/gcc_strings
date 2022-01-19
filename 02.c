#include "cstring.h"

int main(){
	//add a sub string to start of the string
	char *d="\ec\e[44;36m";
	char *s;
	print(d);
	s=newString("hello world...");
	s=frontString(s,'*',20);
	print(s);
	frees(s);
	return 0;
}
