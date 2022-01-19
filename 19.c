#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//insert item at end of the list
	char *lst;
	char *s;
	int pos=3;
	print(d);
	s=newString("arg0,arg1,arg2,arg3,arg4,arg5");
	lst=splitString(s,',');
	lst=addPointer(lst,"new item");
	printList(lst);
	frees(lst);
	frees(s);
	return 0;
}
