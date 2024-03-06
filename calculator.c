// calculator using switch case

#include <stdio.h>

int main() {

  char x;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &x);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (x) {
    case '+':
      printf("%.2lf + %.2lf = %.2lf", first, second, first + second);
      break;
    case '-':
      printf("%.2lf - %.2lf = %.2lf", first, second, first - second);
      break;
    case '*':
      printf("%.2lf * %.2lf = %.2lf", first, second, first * second);
      break;
    case '/':
      printf("%.2lf / %.2lf = %.2lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
