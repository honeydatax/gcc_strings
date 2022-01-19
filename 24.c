#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//count of list item
	char *lst;
	char *s;
	char *s1;
	int pos=0;
	print(d);
	s=newString("arg0,arg1,arg2,arg3,arg4,arg5");
	lst=splitString(s,',');
	printList(lst);
	pos=countList(lst);
	printf("count: %d\n",pos);
	frees(lst);
	frees(s);
	return 0;
}
