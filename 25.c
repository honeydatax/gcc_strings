#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//toString of list item
	char *lst;
	char *s;
	char *s1;
	int pos=0;
	print(d);
	s=newString("arg0,arg1,arg2,arg3,arg4,arg5");
	lst=splitString(s,',');
	printList(lst);
	s1=ListToString(lst,'|');
	print(s1);
	frees(lst);
	frees(s);
	frees(s1);
	return 0;
}
