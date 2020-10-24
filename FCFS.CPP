#include<stdio.h>
#include<conio.h>
main()
{
int i,n,a[10],w[10],t[10];
float avgwt=0,avgtt=0;
clrscr();

printf("Enter the no of processes:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{

printf("Enter Burst Time For Process %d:",i);
scanf("%d",&a[i]);
}
w[1]=0;
t[1]=a[1];
for(i=1;i<=n;i++)
{
w[i+1]=w[i]+a[i];
t[i+1]=t[i]+a[i+1];
avgwt=(w[i]+avgwt);
avgtt=(t[i]+avgtt);
}
printf("\nPROCESS\t BURST TIME\tWAITING TIME\tTURNAROUND TIME");
for(i=1;i<=n;i++)
{
printf("\nProcess%d %d \t\t%d\t\t %d",i,a[i],w[i],t[i]);
}
printf("\nAverage Waiting time Will be %f",avgwt/n);
printf("\nAverage Turnaround time will be %f",avgtt/n);

getch() ;
return 0;
}
