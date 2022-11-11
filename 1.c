#include<stdio.h>
int n_sum(int n){
    if(n==1)
    return n;
  return n+n_sum(n-1);

}

int main(){
  int n;
  printf("enter the number : ");
  scanf("%d",&n);
  printf("sum is %d ",n_sum(n));
  return 0;
}
