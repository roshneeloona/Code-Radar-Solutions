#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int x = 0; x < n; x++){
        scanf("%d",&a);
    }
    for(int x = 1; x < n-1; x++){
        if(a[x-1] < a[x] && a[x] > a[x+1])
        printf("%d",a[x]);
        break ;
}
return 0;
} 