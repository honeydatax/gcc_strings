#include "cstring.h"

int main(){
	char *d="\ec\e[44;36m";
	char *a="hello world.";
	char *b="hi.";
	char *s1;
	char *s3;
	char *s2;
	char *s4;
	char *arr;
	print (d);
	s2=strString('*',20);
	s1=newString(a);
	s1=catString(s1,b);
	s1=appendString(s1,'*',20);
	s1=frontString(s1,'*',20);
	replaceCharString(s1,'*',' ');
	replaceCharString(s2,'*',' ');
	s1=catNString(s1,s2,5);
	frees(s2);
	s1=catNString(s1,"",0);
	s2=replaceString(s1,"world","wr");
	s4=lefths(trim(s1),4);
	s3=mid(trim(s2),2,4);
	arr=newPointer(s4);
	arr=addPointer(arr,s3);
	printList(arr);
	frees(arr);
	frees(s3);
	frees(s2);
	frees(s1);
	frees(s4);
	s1=newString("arg0,arg1,arg2,arg3,arg4,arg5");
	arr=splitString(s1,',');
	printList(arr);
	frees(arr);
	frees(s1);
	return 0;
}
