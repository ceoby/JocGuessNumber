/// Lab. 4, Joc cu interfata text 1 aka "Ghiceste Numarul!" intre 0-10000
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int r = rand() % 10001;
    int k, x;
    //printf("%d\n", r); //numai pt trisat
    printf("--- Bun venit la ghiceste numarul (0-10000)! ---\n");
    while (1){
        printf(" Introduce numarul (nr neg. daca te dai batut): ");
        scanf("%d", &x);
        if (x >= 0 && x <= 10000)
        {
            if (x == r)
            {
                k = 1;
                break;
            }
            else if (x < r)
            {
                printf("--- Prea mic! ---\n");
            }
            else
            {
                printf("--- Prea mare! ---\n");
            }
        }
        else if (x <= -1)
        {
            break;
        }
        else
        {
            printf ("--- Numai intervalul 0-10000! ---\n");
        }
    }
    if (k == 1)
    {
        system("cls");
        printf("--- Felicitari, Ai castigat! Numarul este %d. ---", r);
    }
    else{
        system("cls");
        printf("--- Numarul este %d. Poate data viitoare! ---", r);
    }
    return 0;
}
