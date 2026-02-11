#include<stdio.h>
union test{
int i;
char ch;
};
int main(){
	union test t;
	t.i=15;
	printf("%d\n",t.i);
	t.ch='a';
	printf("%c",t.ch);
}