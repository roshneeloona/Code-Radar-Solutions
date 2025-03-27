#include<stdio.h>
void main(){
    int t;
    scanf("%d",&t);
    printf(isPrime(t));
}
int isPrime(int x){
    int r,c=0,d = x;
    for(int i = 1;i <= x;i++){
      if(x % i == 0)
      c = c + 1;  
    }
    if (c == 2)
    return d;
}