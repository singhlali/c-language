#include<stdio.h>
struct test{
	int i;
	char ch;
};
int main(){
	struct test t={15,'A'};
	printf("%d\n",t.i);
	printf("%c\n",t.ch);
	t.i=t.i+10;
	t.ch=t.ch+1;
	printf("%d\n",t.i);
	printf("%c",t.ch);
}