#include <stdio.h>

int vagas;
int notas[];
int participantes;

int main (){
    scanf("%i", &participantes);
    scanf("%i", &vagas);
    for (int n = 0; n <= participantes; n++)
    {
        scanf("%i", notas[n]);
        printf("%i\n", notas[n]);
    }
}