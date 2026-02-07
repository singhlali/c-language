#include<stdio.h>
#include<conio.h>
int h;
int HeapSort(int a[],int n); 
int BuildMax_Heap(int a[],int h);
int Maxheapify(int a[],int i);
int main()
{
int a[50],i,length;
clrscr();
printf("\nProgram for HEAP SORT\n");
printf("Enter no. of elements:");  //  Input  section
scanf("%d",&h);
length=h;
for(i=1;i<=h;i++)
{
printf("\nEnterelement%d: ",i);
scanf("%d",&a[i]);
}
HeapSort(a,h); //  Calling function
printf("\nSorted array:\n");//Output section
for(i=1;i<=length;i++)
{
printf("%6d",a[i]);
}
getch();
}

int HeapSort(int a[],int n)//  Function definition
{
int t,i,j,length;
length=n;
BuildMax_Heap(a,n);// Function calling another function
for(i=length;i>1;i--)
{
t=a[1];//  Swapping values
a[1]=a[i];
a[i]=t;
h--;
Maxheapify(a,1);//Function calling another function
printf("\nAfteriteration%d: ",i);  //Demonstration of sorting
for(j=1;j<=length;j++)
{
printf("%6d",a[j]);
}
}
}

int BuildMax_Heap(int a[],int h)    //Function definition
{
int i;
int length=h;
for(i=(length/2);i>0;i--)
{
Maxheapify(a,i);  //  Function calling another function
}
printf("\nMaxHeap:          ");
for(i=1;i<=length;i++)
printf("%6d",a[i]); // Maxheap
}

int Maxheapify(int a[],int i)      //  Function definition
{
int l,r,largest,t;
l=(2*i);
r=(2*i)+1;
if((l<=h)&&(a[l]>a[i]))                     //Checking for largest element
{
largest=l;
}
else
{
largest=i;
}
if((r<=h)&&(a[r]>a[largest]))
{
largest=r;
}
if(largest!=i)
{
t=a[i]; //  Swapping values
a[i]=a[largest];
a[largest]=t;
Maxheapify(a,largest);//  Function calling itself
}
}


