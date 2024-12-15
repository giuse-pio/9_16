#include <stdio.h>
#include <math.h>

int punti(int x1, int x2, int y1, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(void) {
    int x1, x2, x3, y1, y2, y3, perimetro, lato1, lato2, lato3;
    printf("Insert the value of X1 e Y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Insert the value of X2 e Y2: ");
    scanf("%d %d", &x2, &y2);
    printf("Insert the value of X3 e Y3: ");
    scanf("%d %d", &x3, &y3);
    lato1 = punti(x1, y1, x2, y2);
    lato2 = punti(x2, y2, x3, y3);
    lato3 = punti(x3, y3, x1, y1);

    perimetro = lato1 + lato2 + lato3;
    printf("il perimetro e' %d:", perimetro);
}