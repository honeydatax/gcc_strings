#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//change list item
	char *lst;
	char *newlst;
	char *s;
	int pos=3;
	print(d);
	s=newString("arg0,arg1,arg2,arg3,arg4,arg5");
	lst=splitString(s,',');
	lst=holeItem(lst,pos);
	setItem(lst,pos,"new item");
	printList(lst);
	frees(lst);
	frees(s);
	return 0;
}
