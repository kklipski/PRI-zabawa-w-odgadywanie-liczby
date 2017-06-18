#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    puts("Program sluzy do zabawy w odgadywanie liczby (bez znaku).");
    char a;
    int zgad, liczba, flaga=1, it=0;
    time_t t;
    srand(time(&t));
    liczba=rand()%1001;
    puts("Podaj liczbe od 0 do 1000:");
    while(flaga=1)
    {
        if(scanf("%d", &zgad)==1)
        {
            if(zgad<0)
            {
                puts("Liczba mniejsza od 0! Jeszcze raz!");
                while(getchar()!='\n');
            }
            else
            {
                it++;
                if(zgad==liczba)
                {
                    printf("Zgadles za %d. razem!\n", it);
                    puts("Nacisnij dowolny przycisk, aby wyjsc");
                    a=getchar();
                    while(scanf("%c", &a)==1)
                    {
                        return 0;
                    }
                }
                else
                {
                    if(zgad>liczba)
                    {
                        puts("Za duzo - probuj dalej");
                        while(getchar()!='\n');
                    }
                    else
                    {
                        puts("Za malo - probuj dalej");
                        while(getchar()!='\n');
                    }
                }
            }
        }
        else
        {
            puts("Zle dane! Jeszcze raz!");
            while(getchar()!='\n');
        }
    }
    return 0;
}
