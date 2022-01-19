#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//rigth string create n char of the rigth of the string 
	char *s;
	char *ss;
	print(d);
	s=newString("012345678901234567890");
	print(s);
	ss=rigths(s,10);
	print(ss);
	frees(s);
	return 0;
}
