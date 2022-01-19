#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//mid string creates a new string using part of a sub string
	char *s;
	char *ss;
	print(d);
	s=newString("012345678901234567890");
	print(s);
	ss=mid(s,5,10);
	print(ss);
	frees(s);
	frees(ss);
	return 0;
}
