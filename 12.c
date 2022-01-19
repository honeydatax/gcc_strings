#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//lefts string return n char from a string
	char *s;
	char *ss;
	print(d);
	s=newString("012345678901234567890");
	print(s);
	ss=lefths(s,10);
	print(ss);
	frees(s);
	return 0;
}
