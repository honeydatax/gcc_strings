#include "cstring.h"

int main(){
	//add text into a string
	char *d="\ec\e[44;36m";
	char *s;
	print(d);
	s=newString("hello world...");
	s=catString(s,"hi...");
	print(s);
	frees(s);
	return 0;
}
