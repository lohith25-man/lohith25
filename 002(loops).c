#include <stdio.h>

int main() {
    int i;



    for (i = 2; i <= 100; i += 2) {
        printf("%d ", i);
    }

printf("\n");
printf("\n");


    i = 2;
    while (i <= 100) {
        printf("%d ", i);
        i += 2;
    }


    printf("\n");
    printf("\n");


    i = 2;
    do {
        printf("%d ", i);
        i += 2;
    } while (i <= 100);


}
