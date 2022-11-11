#include<stdio.h>
int square_s(int n){
    if(n==1)
        return n*n;
  return n*n+square_s(n-1);

}

int main(){
  int n;
  printf("enter the number : ");
  scanf("%d",&n);
  printf("sum is %d",square_s(n));
  return 0;
}

