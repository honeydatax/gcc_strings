#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//create a list 
	char *lst;
	print(d);
	lst=newPointer("item 1");
	lst=addPointer(lst,"item 2");
	printList(lst);
	frees(lst);
	return 0;
}
