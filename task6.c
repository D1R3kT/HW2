// Задача 6 
// Преобразовать секунды в чч:мм:сс. Количество секунд на входе выбрать самостоятельно.


#include <stdio.h>

int main() {

int a = 27589;
int h = a / 3600;
int m = (a - (h * 3600)) / 60;
int s = a - (h * 3600) - (m * 60);

printf("%d", h);
printf(":");
printf("%d", m);
printf(":");
printf("%d", s);

return 0;
}
