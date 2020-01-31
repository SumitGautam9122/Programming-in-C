//Program that performs Linear search and Binary search using function
#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int Linearsearch(int[],int,int);  //function declared for linear search operation
int Binarysearch(int[],int,int);  //function declared for binary search operation
void getdata(int[],int);          //functon declared for storing data
void putdata(int);               //function declared for output of result
clrscr();

int a[20],n,item,loc,x;
printf("What is the size of your Array:\n");
scanf("%d",&n);                       //size of array allocated in variable n		   //search element alocated in variable item
getdata(a,n);
printf("Enter your search element:");
scanf("%d",&item);
while(1)
{
clrscr();
printf("1.Linear Search\n");
printf("2.Binary Search\n");
printf("3.Exit\n");
printf("Enter your Choice:");
scanf("%d",&x);
switch(x)                    //switch case is used to for opting Linear and Binary search
{
case 1:
       loc=Linearsearch(a,n,item);  //function for linaer search is called
       putdata(loc);                //function to show output is called
       break;
case 2:
       loc=Binarysearch(a,n,item);
       putdata(loc);
       break;
case 3:
       exit(1);
default:
	printf("ERROR:Please enter correct option");
       exit(1);
}
getch();
}
}
void getdata(int a[],int s)     //function defined to store array elements
{
int i;
printf("Enter the %d elements of your Array:",s);
for(i=0;i<s;i++)               //for loop used for storing data
{
scanf("%d",&a[i]);
}
}
void putdata(int o)           //function defined to show output
{
if(o>=0)
{
printf("Location of your searched item is: %d",o);
}
else
{
printf("Searched item is not available.");
}
}

int Linearsearch(int a[],int s,int e)  //function defined for linear search operation
{
int i;
for(i=0;i<s;i++)
{
 if(e==a[i])
 {
 return i;
 }
 }
 return -1;

}

int Binarysearch(int a[],int s,int e) //function defined for binary search operation
{
int lb=0,ub=s-1,mid,i,ret;
for(i=0;i<s;i++)
{
mid=(lb+ub)/2;
if(e==a[mid])
{
ret=mid;
}
else if(e<a[mid])
{
ub=mid-1;
}
else if(e>a[mid])
{
lb=mid+1;
}
else
{
ret=-1;
}
}
return ret;
}
