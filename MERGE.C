#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],m,b[50],n,c[100],i,j,k=0;
clrscr();
printf("enter size of 1st array\n");
scanf("%d",&n);
printf("enter 1st array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}      printf("enter size of 2nd array\n");
scanf("%d",&m);
printf("enter 2nd array elements\n");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
i=0;j=0;
while(i<n && j<m)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
if(i>=n)
{
while(j<m)
{
c[k]=b[j];
j++;
k++;
}}
if(j>=m)
{
while(i<n)
{
c[k]=a[i];
i++;
k++;
}}
printf("after merging\n");
for(i=0;i<m+n;i++)
{
printf("%d\t",c[i]);
}
getch();
}

