// Поменять местами значения переменных a и b без использования временной переменной с

#include <stdio.h>

int main() {

int a = 1;
int b = 2;

a = a + b;
b = a - b;
a = a - b;

printf("%d\n", a);
printf("%d\n", b);

return 0;
}
