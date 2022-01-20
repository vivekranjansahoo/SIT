#include <stdio.h>
int main() {
  char i;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &i);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (i) {
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
  default:
    printf("Error operator is not correct !!!!");
  }

  return 0;
}
