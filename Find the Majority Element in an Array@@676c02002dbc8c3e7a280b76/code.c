#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int x = 0; x < n; x++){
        scanf("%d",&ar[x]);
    }
    int max = 0;
    for(int x = 0; x < n; x++){
        int c = 0;
        for(int y = 0;y < n; y++){
            if (ar[x]==ar[y])
            c = c+1;
        }
        if(c>max)
        max = ar[x];
        else
        max = -1;
    }
    printf("%d", max);
    }