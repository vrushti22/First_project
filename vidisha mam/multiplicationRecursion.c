#include <stdio.h>
 
int multiply(int firstnum, int secondnum){     
 
    if(secondnum == 0){
        return 0;
    } else {
 
       return (firstnum + multiply(firstnum, secondnum-1));
    }
 
}
 
main()
{
 
   int firstnum, secondnum, prod;
 
   printf("Enter two numbers \n");
   scanf("%d %d",&firstnum,&secondnum);
 
   prod = multiply(firstnum,secondnum);
 
   printf("Multiplication of two numbers is %d",prod);
}
