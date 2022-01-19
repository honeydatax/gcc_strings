#include "cstring.h"

int main(){
	//create a new string from a constant string
	char *d="\ec\e[44;36m";
	char *s;
	print(d);
	s=newString("hello world...");
	print(s);
	free(s);
	return 0;
}
