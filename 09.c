#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//ltrim string remove spaces and null chaters from left of the string
	char *s;
	char *ss;
	print(d);
	s=newString("                  hello world...");
	print(s);
	ss=ltrim(s);
	print(ss);
	frees(s);
	return 0;
}
