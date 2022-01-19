#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	char *s;
	print(d);
	s=strString('*',20);
	print(s);
	replaceCharString(s,'*','!');
	print(s);
	frees(s);
	return 0;
}
