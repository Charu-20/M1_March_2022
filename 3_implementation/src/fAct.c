int fAct(int f)
{
    int i,num;
    f=1;
 
  printf("Enter a number: ");
  scanf("%d",&num);
 
  for(i=1;i<=num;i++)
      f=f*i;
 
  printf("Factorial of %d is: %d",num,f);
}