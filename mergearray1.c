#include<stdio.h>
//#include<conio.h>
int main()
{
void readarray(int[],int);
void printarray(int[],int);
void sortarray(int[],int);
void merge(int[],int[],int[],int,int);
int ar1[100],ar2[100],ar3[200],m,n;
printf("enter the no of elements of an array=");
scanf("%d",&m);
printf("enter the number of elements 1st  array=");
readarray(ar1,m);
printf("no.of elements of array in 2nd array=");
scanf("%d",&n);
printf("enter the number of elements 2nd  array=");
readarray(ar2,n);
sortarray(ar1,m);
sortarray(ar2,n);
//printf("sort1");
//printf(ar1,m);
//printf("sort2");
printarray(ar1,m);
printarray(ar2,n);
merge(ar1,ar2,ar3,m,n);
printf("merge of array \n");
printarray(ar3,m+n);
}
//readarray function
void readarray(int x[],int a)
{
int i;
for(i=0;i<a;i++)
{
scanf("%d",&x[i]);
}
}
//printarray function
void printarray(int x[],int a)
{
int i;
for(i=0;i<a;i++){
printf("%d\t",x[i]);

}
printf("\n");
}
//sort array function
void sortarray(int x[],int a)
{
int j,temp,i;
for(i=0;i<a-1;i++)
for(j=i+1;j<a;j++)
if(x[i]>x[j]){
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}
//function to merge two array
void merge(int ar1[100],int ar2[100],int ar3[200],int m,int n)
{
int i,j,k;
i=j=k=0;
while(i<m && j<n)
if(ar1[i]<ar2[j])
ar3[k++]=ar1[i++];
else
ar3[k++]=ar2[j++];
//copy remaining elements from ar1 array
while(i<m)
ar3[k++]=ar1[i++];
//copy remaining elements from ar2 array
while(i<n)
ar3[k++]=ar2[j++];
return;
}


