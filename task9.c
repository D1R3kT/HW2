// Осуществить 2-й сдвиг влево и вправо для двузначного числа. Объяснить результат

#include <stdio.h>

int main() {

int a = 49;    // 110001

int b = a >> 2;
int c = a << 2;

printf ("%d\n", b);
printf ("%d\n", c);
return 0;
}
