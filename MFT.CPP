#include<stdio.h>
#include<conio.h>
main()
{
int i,n,a[10],totalmemory,blocksize,noofblocks,tif=0,tef,totalmemoryallocated=0;
clrscr();
printf("Enter The Total Memory Available in Bytes:");
scanf("%d", &totalmemory);
printf("Enter the Block Size in Bytes:");
scanf("%d", &blocksize);
noofblocks=totalmemory/blocksize;
printf("Enter the No of Processes:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter Memory Required for Process %d in bytes",i);
scanf("%d",&a[i]);
}
printf("PROCESS\tMemory Required\tAllocated\tInternal Fragmentation");
for(i=1;i<=n;i++)
{
if(a[i]<=blocksize)
{
	tif=(blocksize-a[i]) + tif;
	totalmemoryallocated=a[i]+totalmemoryallocated;
	printf("\n%d\t\t%d\t YES\t\t\t %d",i,a[i],blocksize-a[i]);
}
else
{       printf("\n%d\t\t%d\t NO\t\t\t ---",i,a[i]);

}
}
tef=totalmemory-(totalmemoryallocated+tif);
printf("\nTotal Internal Fragmentation: %d",tif);
printf("\nTotal External Fragmentation:%d",tef);
}
