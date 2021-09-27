#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	float a=1.5, b=4, c=2,d=3,e=1.2,f=4.3, expressaoA, expressaoB, expressaoC, expressaoD;

    expressaoA = (a * (c + d))/(b * (e + f));
    expressaoB = ((pow(a, (b+c)))/(e+f))+d;
    expressaoC = (a + (pow((c+d),2)/pow(b,2))* d) * (1/c);
    expressaoD = (-b + (sqrt(pow(b,2) - 4 * a * c)))/(2 * a);

	printf("O resultado da expressão a é %.2f\nO resultado da expressão b é %.2f\nO resultado da expressão c é %.2f\nO resultado da expressão d é %.2f\n",expressaoA, expressaoB, expressaoC, expressaoD);

	return 0;
}
