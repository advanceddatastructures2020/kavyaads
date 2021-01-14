#include<stdio.h>
#include<conio.h>
void main()
{
int i.j,x,n,a[30];
clrscr();
printf("Enter the total number of elemnents\n");
scanf("%d",&n);
printf("Enter the elemets\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
x=a[i];
a[i]=a[j];
a[j]=x;
}
}
}printf("The elements in asending order\n");
for(i=0;i<n;i++)
{
printf("%D\n",a[i];
}
getch();
}
