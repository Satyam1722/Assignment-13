#include<stdio.h>
int odd_s(int n){
    if(n==1)
        return n;
    if(n%2!=0)
  return n+odd_s(n-1);
  return odd_s(n-1);

}

int main(){
  int n;
  printf("enter the number : ");
  scanf("%d",&n);
  printf("sum is %d ",odd_s(n*2));
  return 0;
}
