#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int x = 0; x < n; x++){
        scanf("%d",&a[x]);
    }
    int odd = 0, even = 0; 
    for(int x = 0; x < n; x++){
        if(a[x]%2 == 0)
        even+=1;
        else
        odd+=1;
    }
    printf("%d %d",even,odd);
    return 0;
}