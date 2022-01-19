#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//edit string create add same chars to the midlle of a string 
	char *s;
	char *ss;
	print(d);
	s=newString("012345678901234567890");
	print(s);
	ss=edit(s,10,10,'>');
	print(ss);
	frees(ss);
	return 0;
}
