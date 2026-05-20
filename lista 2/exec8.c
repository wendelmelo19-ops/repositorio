#include <stdio.h>

int main() {
    float temp;
    printf ("Qual a temperatura: ");
    scanf ("%f", &temp);
    
    if (temp > 30){
        printf ("Esta calor, vá de camiseta!");
    }
    else {
        printf ("Esta frio, utilize outra roupa!");
    }
    return 0;
}