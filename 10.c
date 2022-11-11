#include<stdio.h>
int power(int n,int r){
 if(r==0)
    return 1;
 if(r==1)
    return n;

  return power(n,1)*power(n,r-1);


}


int main(){
 int n,r;
 printf("enter the number and its power: \n");
 scanf("%d%d",&n,&r);
 printf("number of digit is %d",power(n,r));
 return 0;

}

