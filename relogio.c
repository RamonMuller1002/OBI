#include <stdio.h>
#include <math.h>

int hora;
int min;
int tex;
int exmin = 0;
int sec;

int main (){
    scanf("%i", &hora);
    if (hora > 23 || hora < 0){
        return 1;
    }
    scanf("%i", &min);
    if (min > 60 || min < 0){
        return 1;
    }
    scanf("%i", &sec);
    if (min > 60 || sec < 0){
        return 1;
    }
    scanf("%i", &tex);
    if (tex >= 1000000000 || tex < 0){
        return 1;
    }
    sec = sec + tex;
    if (sec >= 60){
        while(sec >= 60){
            sec = sec - 60;
            exmin++;
        }
    }
    min = min + exmin;
    exmin = 0;
    if (min >= 60){
        while(min >= 60){
            min = min - 60;
            exmin++;
        }
    }
    hora = hora + exmin;
    exmin = 0;
    if (hora >= 24){
        while(hora >= 24){
            hora = hora - 24;
            exmin++;
        }
    }
    printf("%i\n%i\n%i\n", hora, min, sec);
}