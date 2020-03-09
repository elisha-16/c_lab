#include<stdio.h>
void quicksort(int*,int,int);
int partition(int*,int,int);

int main()
{ int n,i,a[10];
	printf("enter no of elements:");
	scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
return 0;	   
}
 void quicksort(int a[],int l,int u)
 {
 	int index;
 	if(l<u){
	
 	index= partition(a,l,u);
 	quicksort(a,l,index-1);
 	quicksort(a,index+1,u);
 }	
 }
 int partition(int a[],int start,int end)
 {
 	int pivot,i,j,t;
 	pivot=a[end];
 	i=start;
 	for(j=start;j<=end-1;j++)
 	{ if(a[j]<pivot)
 	{ 
 	 t=a[i];
 	 a[i]=a[j];
 	 a[j]=t;
 	 i++;
	 }
	 }
	 t=a[end];
	 a[end]=a[i];
	 a[i]=t;
	 return i;
 }
