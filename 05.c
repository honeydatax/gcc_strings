#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//replace a string in other
	char *s;
	char *s2;
	print(d);
	s=newString("hello world...");
	s2=replaceString(s,"world","wr");
	print(s2);
	frees(s);
	frees(s2);
	return 0;
}
