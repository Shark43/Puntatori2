#include <stdio.h>

int main( )
{

    int vet[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, i = 0;

    for(i = 0; i < 10; i++) {
        printf("%d\n", vet[10]);
    }


    printf("vet=%%d=%d\n", vet);
    printf("vet[0]=d=%d\n", vet[0]);
    printf("&vet=d=%d\n", &vet);
    printf("*vet=d=%d\n", *vet);

    for(i = 0; i < 10; i++) {
        printf("vet[i]=%%d = %d - *(vet+i)=%%d = %d - &(vet+i)=%%d = %d\n", vet[10], *(vet+i), (vet+i));
    }

    int *p = NULL;

    printf("&p = %d   &vet = %d\n", p, vet);
    p = vet;
    printf("&p = %d   &vet = %d\n", p, vet);

    p = NULL;
    printf("&p = %d   &vet = %d\n", p, vet);
    p = &vet[0];
    printf("&p = %d   &vet = %d\n", p, vet);


    printf("P -> *p=%d  &p=%d", *p, p);

    for(i = 0; i < 10; i++) {
        printf("*(p+i)=%d  *(vet+i)=%d \n", *(p+i), *(vet+i));
    }

    printf("PRIMA &p=%d\n", p);
    for(i = 0; i < 10; i++, p++) {
        printf("*(p+i)=%d\n", *p);
    }
    printf("DOPO &p=%d\n", p);
    return 0;
}
