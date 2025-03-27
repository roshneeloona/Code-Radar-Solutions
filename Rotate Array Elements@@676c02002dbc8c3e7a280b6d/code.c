#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n];
for(int x = 0; x < n; x++)
{
    scanf("%d",&a[x]);
}
int s;
scanf("%d",&s);
for(int x = s+1; x < n; x++)
{
    printf("%d\n",a[x]);
}
for(int x = 0; x <= n-s; x++)
{
    printf("%d\n",a[x]);
}
return 0;
}
