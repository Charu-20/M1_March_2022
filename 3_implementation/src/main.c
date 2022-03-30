#include<stdio.h>
#include"fAct.c"
#include"mOdulus.c"

  float addition(float n1, float n2);
  float subtraction(float n1, float n2);
  float multiplication(float n1, float n2);
  float division(float n1, float n2);
 

  int main()
  {
     int choice;
     int f,r;
     float n1, n2;
     float result;
     
     printf("WECLCOME TO THE SIMPLECALCULATOR\n***\n");
     
     printf("Select the operation \n1]Addition\n2]Subtraction\n3]Multiplication\n4]Division\n5]Modulus\n6]factorial\n");
     scanf("%d" , &choice);
 
    
    
    if(choice==5)
    {
        r=mOdulus(r);
    }
else if(choice==6)
{
    f=fAct(f);
}
else
{
    printf("Enter the First Number\n");
    scanf("%f" , &n1);

    printf("Enter the Second Number\n");
    scanf("%f" , &n2);

    switch(choice)
     {
       case 1 :
           result = addition(n1 , n2);
           
           printf("\n The result of %.2f + %.2f  = %.2f", n1,  n2, result);
           break;

       case 2 :
           result = subtraction(n1 , n2);
           printf("\n The result of %.2f - %.2f  = %.2f", n1,  n2, result);
           break;

      case 3 :
           result = multiplication(n1 , n2);
           printf("\n The result of %.2f * %.2f  = %.2f", n1, n2, result);
           break;

      case 4 :
           result = division(n1 , n2);
           printf("\n The result of %.2f / %.2f  = %.2f", n1,  n2, result);
           break;
      
       default:
           printf("\n You have enetered an Invalid Operator ");
      
    }

    return 0;
  }
  }
   float addition(float n1, float n2)
    {
      return n1 + n2;
    }
  
  float subtraction(float n1, float n2)
    {
      return n1 - n2;
    }

  float multiplication(float n1, float n2)
    {
      return n1 * n2;
    }

  float division(float n1, float n2)
    {
      return n1 / n2;
    }