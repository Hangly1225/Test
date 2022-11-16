#include <stdio.h>   
#include <string.h>

int main ()
{
    // объявление переменной
    float x;
    char c;

    // ввод с консоли вещественного числа и символа 
    printf ("Please enter a float from your keyboard: \n");
    scanf ("%f",&x); 
    printf ("Please enter a char from your keyboard: \n");
    scanf ("\n%c", &c); 

    // вывод на консоль вещественного числа и символа 
    printf ("\nThe real number you entered: %0.1f", x);
    printf ("\nThe sympol you entered: %c", c);

    return 0;
}
