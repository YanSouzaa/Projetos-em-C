#include <stdio.h>
#include <stdbool.h>

void main() {
int a;
float b;
char c;
bool d;

a = 5;
b = 2.3;
c = 'a';
d = true;

printf("\n o valor de a = %d", a);
printf("\n o valor de b = %.1f", b);
printf("\n o valor de c = %c\n", c);
printf("\n o valor de d = %d\n", d);

scanf("%d", &a);
scanf("%f", &b);
scanf(" %c", &c);
scanf(" %d", &d);

printf("\n O valor de a = %d", a);
printf("\n o valor de b = %.1f\n", b);
printf("\n o valor de c = %c\n", c);
printf("\n o valor de d = %d\n", d);

system ("pause");
}
