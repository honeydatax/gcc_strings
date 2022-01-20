#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//list a number of itens
	char *lst;
	char *lst2;
	char *s;
	char *s1;
	int n=0;
	int pos=0;
	char ss[2080];
	print(d);
	s=ss;
	for(n=0;n<64;n++){
		sprintf(s,"item %d",n);
		if(n==0){
			lst=newList(s);
		}else{
			lst=addList(lst,s);
		}
	}
	printnList(lst,16,16);
	freeList(lst);
	return 0;
}
