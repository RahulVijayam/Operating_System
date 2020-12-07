#include<stdio.h>
#include<conio.h>
void main()
{
 int totalmemory,i,a[40],remainingmemory,n=1,tma=0;
 char choice='y';
	  clrscr();
printf("\nEnter the Total Memory Available: ");
scanf("%d",&totalmemory);
remainingmemory=totalmemory ;
for(i=1;choice=='y';i++)
{
printf("\nEnter memory required for Process %d:",i);
scanf("%d",&a[i]);
if(a[i]<=remainingmemory)
{
printf("\nMemory is allocated for process %d",i);
remainingmemory=remainingmemory-a[i] ;
n=n+1;

}
else if(a[i]>remainingmemory)
{
printf("\n Memory is Not Allocated for process %d because available memory will be %d",i,remainingmemory);
i=i-1;
if(remainingmemory==0){
printf("\nMemory is full");
break;
}
else
{
	break;
}
}




}
printf("\nTotal Memory Available : %d",totalmemory);
printf("\nPROCESS \tMEMORY ALLOCATED");
for(i=1;i<=n;i++)
{
if(a[i]<=remainingmemory)
{
 printf("\n%d\t\t%d",i,a[i]);
 tma=tma + a[i];
 }
}
printf("\nTotal Memory Allocated :%d",tma);
printf("\nTotal External Fragmentation :%d", totalmemory-tma);


 getch();
}