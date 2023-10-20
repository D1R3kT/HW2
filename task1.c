#include <stdio.h>

int main () {

// Задача 1


int x1 = 2 % 2 + 2 * 2 - 2 / 2;
int x2 = (3 * 9 * (3 + (9 * 3 / 3)));

printf ("%d\n", x1);
printf ("%d\n", x2);

//Задача 2

int a = 1;
int b = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int h = 7;

int res = a / (b * c) / (d * e) / (f * h);

printf ("%d\n", res);

//Задача 3

int m = 2;
int n = 222;
int res1 = -n/m%10;
printf ("%d\n", res1);




return 0;
}
