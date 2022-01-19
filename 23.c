#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	//get list item
	char *lst;
	char *s;
	char *s1;
	int pos=3;
	print(d);
	s=newString("arg0,arg1,arg2,arg3,arg4,arg5");
	lst=splitString(s,',');
	s1=getItem(lst,pos);
	print(s1);
	frees(lst);
	frees(s);
	return 0;
}
