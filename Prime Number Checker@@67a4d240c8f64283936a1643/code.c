#include<stdio.h>
int isPrime(int x){
    int r,c=0,d = x;
    for(int i = 1;i <= x;i++){
      if(x % i == 0)
      c = c + 1;  
    }
    if (c == 2)
    return 1;
    else 
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    printf("%d", isPrime(t));
    return 0;
}