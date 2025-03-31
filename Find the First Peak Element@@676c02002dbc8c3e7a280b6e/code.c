#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int x = 0; x < n; x++){
        scanf("%d",&a[x]);
    }
if(n > 1 && a[0] > a[1])
        printf("%d\n",a[0]);
else if (n > 1 && a[n - 1] > a[n - 2])
printf("%d\n", a[n-1]);
else {
for(int x = 1; x < n-1; x++){
        if(a[x - 1] < a[x] && a[x] > a[x + 1])
        printf("%d\n",a[x]); }
return 0;
}
} 