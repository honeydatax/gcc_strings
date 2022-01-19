#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//deledit string delete same char in midlle of a string 
	char *s;
	char *ss;
	print(d);
	s=newString("012345678901234567890");
	print(s);
	deledit(s,10,7);
	print(s);
	frees(s);
	return 0;
}
