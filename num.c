#include<stdio.h>
int main(){

//declairing variables

int n,r;

printf("enter a number");
scanf("%d",&n);

while(n!=0){
   r=n%10;
   printf("\n %d",r);
   n=n/10;
}

return 0;

}