#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//new list add item
	char *lst;
	print (d);
	lst=newPointer("1st item");
	lst=addPointer(lst,"2st item");
	printList(lst);
	frees(lst);
	return 0;
}
