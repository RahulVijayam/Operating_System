#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[30],j,temp,n,w[30],t[30];
float avgwt,avgtt;
clrscr();
printf("Enter the no of processse:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter the burst for process %d:", i);
scanf("%d",&a[i]);
}

for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{

if(a[j]>a[j+1])
{
  temp=a[j];
  a[j]=a[j+1];
  a[j+1]=temp;

}
}
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

getch();
}