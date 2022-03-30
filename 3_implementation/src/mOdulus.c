int mOdulus(int r)
{
    int num1,num2;
        printf("Enter the First Number\n");
        scanf("%d" , &num1);
        printf("Enter the Second Number\n");
        scanf("%d" , &num2);
        r=num1%num2;
        printf("%d %% %d =\t%d\n",num1,num2,r);
}