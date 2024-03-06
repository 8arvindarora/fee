#include <stdio.h> 
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1: printf("input is %d", n);
    break; 

    case 2: printf("input is %d", n);
    break;

    case 3: printf("input is %d", n);
    break;

    default: printf("invalid input");
    break;
    }
    printf("\nOut of switch case");
    return 0;
}

