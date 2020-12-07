#include<stdio.h>
#include<conio.h>
main()
{
int  a[30],i,n,ts,count=1,tt[20],wt[20];
clrscr();
printf("Enter the no.of processes:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter Brust Time for Process %d:",i);
scanf("%d",&a[i]);
}
printf("Enter the size of the time slice:");
scanf("%d",&ts);

for(i=1;i<=n;i++)
{
if(a[i]<ts && count==1)
{
	wt[i]=0;
	tt[i]=a[i];
	count=0;
}
else if (a[i]<ts && count!=1)
{
 tt[i]=tt[i-1]+a[i];
 wt[i]=wt[i-1]+a[i-1];
}
else
{
if(count==1)
{
	wt[i]=tt[n]-wt[n-1];
	tt[i]=a[i];
	count=0;
}
else{

wt[i]=wt[n]+a[n];
tt[i]=tt[n]+a[i];
}

}

}
printf("PROCESS\t Burst Time\tWaiting Time\tTurnaround Time");
for(i=1;i<=n;i++)
{
printf("\nProcess%d\t%d\t\t%d\t\t%d",i,a[i],wt[i],tt[i]);
}
getch();
}
