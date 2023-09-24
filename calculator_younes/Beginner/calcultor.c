#include <stdio.h>
float equation(char op, float a, float b)
{
    int c,d;
    if (op == '-')
        return (a - b);
    if (op == '+')
        return (a + b);
    if (op == '*')
        return (a * b);
    if (op == '/')
        return (a / b);
    if (op == '%')
    {
        c = (int)a;
        d = (int)b;
        return (c % d);
    }
    return (0);
}
int main(void)
{
    
        float a,b;
        char c;
        printf("bonjour\necrire l'equation tu veux calculer: .....\nexemple: 2 * 4\ntu peux aussi calculer le reste du division eucledienne\n");
        scanf("%f %c %f",&a,&c,&b);
        printf("\nBingooo !!\n%0.2f %c %0.2f = %0.2f\n", a, c, b, equation(c,a,b));
    return (0);
}