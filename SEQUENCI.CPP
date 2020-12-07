#include<stdio.h>
#include<conio.h>
#include<string.h>
struct filetable
{
 int sb,nb;
  char name[10];
} ft[40];
main()
{
int i,j,n;
char f[30];
clrscr();
printf("Enter the no of files:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter the name of the file %d:",i);
scanf("%s",&ft[i].name);
printf("Enter the starting address of a block for file %d:",i);
scanf("%d",&ft[i].sb);
printf("Enter the no.of blocks for file %d:",i);
scanf("%d",&ft[i].nb);
}
printf("Enter filename to search:");
for(i=1;i<=n;i++)
scanf("%s",&f);
for(i=1;i<=n;i++)
{
if(strcmp(f,ft[i].name))
{
break;
}
}
if(i==n)
{
printf("File Not Found");
}
else
{
printf("FileName Starting Block   Nofblocks  blocksallocated");
printf("\n%s \t%d\t\t %d\t\t",ft[i].name,ft[i].sb,ft[i].nb);
for(j=ft[i].sb;j<=ft[i].nb;j++)
{
printf("%d",j);
 }
}
getch();
return 0;
}





