#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int x = 0; x<n; x++){
        scanf("%d", &a[x]);
    }
    int f = 0;
    for(int x = 0; x< n-1; x++){
        if(a[x]>a[x+1])
        f = 1;
        else 
        f = 0;
    }
    if(f == 1)
    printf("Sorted");
    else 
    printf("Not Sorted");
    return 0;
}