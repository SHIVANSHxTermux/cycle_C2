#include <stdio.h>
int main(){

int mark,choice;

printf("enter your marks : ");
scanf("%d",&mark);

if(mark<0||mark>100){
    printf("enter a valid marks ");
}
else{
    if(mark>=90){
  
   choice=1;
}
else if(mark>=75){
   
   choice=2;
}
else if(mark>=60){
   
   choice=3;
}
else if(mark>=40){

   choice=4;
}
else{
    choice:5;
}
}

switch(choice){
    
    case 1:printf("GRADE A");
    break;
    
    case 2:printf("GRADE B");
    break;
    
    case 3:printf("GRADE C");
    break;
    
    case 4:printf("GRADE E");
    break;
    
    default:printf("FAIL");    }
    
    

return 0;
}