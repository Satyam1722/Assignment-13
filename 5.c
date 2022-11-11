#include<stdio.h>

int digit_s(int n){
  if(n/10==0)
    return n;
  return n%10+digit_s(n/10);

}

int main(){
 int n;
 printf("enter the number : ");
 scanf("%d",&n);
 printf("sum is %d ",digit_s(n));
 return 0;
}

