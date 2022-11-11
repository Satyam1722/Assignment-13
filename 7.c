#include<stdio.h>

int hcf(int a,int b){
 if(a>b)
    return hcf(a-b,b);
 else if(b>a)
    return hcf(a,b-a);
 else
    return a;
}

int main(){
 int a,b;
 printf("enter two number : ");
 scanf("%d%d",&a,&b);
 printf("hcf is %d",hcf(a,b));
 return 0;
}

