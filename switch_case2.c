#include <stdio.h>
 
int main()
{
    int a,b;
    float c;
    char ch;    //to store operator choice
     
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
     
    printf("Choose operation to perform (+,-,*,/,%): ");
    scanf(" %c",&ch);
     
    c=0;
    switch(ch)    
    {
        case '+':
            c=a+b;
            break;
             
        case '-':
            c=a-b;
            break;
         
        case '*':
            c=a*b;
            break;
             
        case '/':
            c=(float)a/(float)b;
            break;
             
        case '%':
            c=a%b;
            break;
        default:
            printf("Invalid operation.\n");
    }
 
    printf("Result: %d %c %d = %f\n",a,ch,b,c);
    return 0;
}
