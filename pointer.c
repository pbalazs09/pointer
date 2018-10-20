#include <stdio.h>

int main(void){
double szamok1[5] = { 4.5, 9.2, 7.1, -6.9, 8 };
double szamok2[5] = { 9.3, 78, -7, 0.01, 4.6 };

double* p;  /* pointer t�pus� v�ltoz� */

p = &szamok1[1];
printf("%f\n", *p);  /* 9.2 */

p = &szamok2[3];
*p = 5.7;            /* a szamok2[3]-at */

scanf("%lf", &szamok1[2]);

return 0;
}
