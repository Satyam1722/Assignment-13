#include<stdio.h>
int digit_c(int n,int count){
 if(n==0)
    return count+0;
 else
    count+=1;
 digit_c(n/10,count);

}


int main(){
 int n;
 printf("enter a number\n");
 scanf("%d",&n);
 printf("number of digit is %d",digit_c(n,0));
 return 0;

}

