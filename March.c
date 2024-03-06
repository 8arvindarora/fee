#include <stdio.h>

int main(){
    int a,b,c;
    char chr;
    printf("enter character to print:");
    scanf("%c", &chr);
    printf("how many times to print: ");
    scanf("%d", &a);
    for (b=0 ; a<=b; a++){
        printf("%c",chr);
    };
}