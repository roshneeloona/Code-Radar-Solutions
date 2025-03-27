#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int x = 0; x < n; x++){
        scanf("%d",&a[x]);
    }
    int max = 0; int min = a[0];
    for(int x = 0; x < n; x++){
        if(a[x]>max)
        max = a[x];
        if(a[x<min])
        min = a[x];
    }
    printf("%d %d",min,max);
    return 0;
}