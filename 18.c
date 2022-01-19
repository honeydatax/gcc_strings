#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//insert item at position index
	char *lst;
	char *s;
	int pos=3;
	s=newString("arg0,arg1,arg2,arg3,arg4,arg5");
	lst=splitString(s,',');
	lst=insertItem(lst,pos,"new item");
	printList(lst);
	frees(lst);
	frees(s);
	return 0;
}
