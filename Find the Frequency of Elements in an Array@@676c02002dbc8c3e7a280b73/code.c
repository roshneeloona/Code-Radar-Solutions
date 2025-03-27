#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int x = 0; x < n; x++){
        scanf("%d",&a[x]);
    }
    for(int x = 0; x < n; x++){
        int c = 0;
        for(int y = 0; y < n; y++){
            if(a[x] == a[y])
            c = c+1;
        }
        printf("%d &d",a[x],c);
    }
    return 0;
}