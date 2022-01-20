#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//create a dinamic list and is nodes and frees all nodes
	char *lst;
	char *lst2;
	char *s;
	char *s1;
	int n=0;
	int pos=0;
	char ss[2080];
	print(d);
	s=ss;
	for(n=0;n<16;n++){
		sprintf(s,"item %d",n);
		if(n==0){
			lst=newList(s);
		}else{
			lst=addList(lst,s);
		}
	}
	printList(lst);
	freeList(lst);
	return 0;
}
