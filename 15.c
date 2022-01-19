#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//split a string
	char *lst;
	char *s;
	print(d);
	s=newString("arg0,arg1,arg2,arg3,arg4,arg5");
	lst=splitString(s,',');
	printList(lst);
	frees(lst);
	frees(s);
	return 0;
}
