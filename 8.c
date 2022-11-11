#include<stdio.h>
void print_fibonacci(int n){
 static a=0,b=1,c;
  if(n==0)
    return;
    printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
    print_fibonacci(n-1);
}


int main(){
 int n;
 printf("enter a number\n");
 scanf("%d",&n);
 print_fibonacci(n);
 return 0;

}
