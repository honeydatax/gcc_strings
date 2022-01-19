#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//rtrim string remove spaces and null chaters from rigth of the string
	char *s;
	char *ss;
	print(d);
	s=newString("hello world...                ");
	ss=rtrim(s);
	print(s);
	print(ss);
	frees(s);
	frees(ss);
	return 0;
}
