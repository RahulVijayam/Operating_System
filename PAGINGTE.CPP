#include<stdio.h>
#include<conio.h>
void main()
{
int j,ms,ps,n, i,pagetable[20],pages[20],x,y,offset,fno[10][10],padd,remainingpages;
float totalpages;
clrscr();

printf("Enter the memory size:");
scanf("%d",&ms);
printf("\nEnter the page size:");
scanf("%d",&ps);
totalpages=ms/ps;
printf("The No.of Pages available in memory are%f",totalpages);
printf("\nEnter the no.of Process:");
scanf("%d",&n);

remainingpages=totalpages;
for(i=1;i<=n;i++)
{

printf("Enter no.of pages required for p[%d]",i);
scanf("%d",&pages[i]);
if(pages[i]>remainingpages)
{
printf("\nMemory is FUl");
break;
}
remainingpages=remainingpages-pages[i];
printf("\nEnter page table for p[%d]",i);
for(j=1;j<=pages[i];j++  )
scanf("%d",&pagetable[i]);
}
printf("Now we will ding physical address for an logical address");

printf("\nPlease Enter the process , pagenumber and offset");
scanf("%d%d%d",&x,&y,&offset);
padd=fno[x][y]*ps  + offset;

printf("\nPhysical address is%d",padd);
 getch();
 }
