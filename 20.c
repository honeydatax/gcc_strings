#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//clone list
	char *lst;
	char *newlst;
	char *s;
	int pos=3;
	print(d);
	s=newString("arg0,arg1,arg2,arg3,arg4,arg5");
	lst=splitString(s,',');
	newlst=cloneList(lst);
	printList(newlst);
	frees(lst);
	frees(newlst);
	frees(s);
	return 0;
}
