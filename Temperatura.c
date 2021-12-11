#include<stdio.h>
#include<locale.h>

int main(){
int c, f;
setlocale(LC_ALL,"Portuguese_Brazil");

printf("\n Digite a temperatura em Celsius: \t");
scanf("%id", &c);

f = c*9/5+32;

printf("\n A temperatura em Fahrenheit é: %d", f);
printf("\n");

return(0);
}
