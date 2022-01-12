#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	char *a="hello world.";
	char *b="hi.";
	char *s1;
	char *s2;
	char *arr;
	print (d);
	s2=strString('*',20);
	s1=newString(a);
	s1=catString(s1,b);
	s1=appendString(s1,'*',20);
	s1=frontString(s1,'*',20);
	replaceCharString(s1,'*','!');
	s1=catNString(s1,s2,5);
	free(s2);
	s2=replaceString(s1,"world","wr");
	arr=newPointer(s1);
	arr=addPointer(arr,s2);
	printList(arr);
	free(arr);
	free(s2);
	free(s1);
	return 0;
}
