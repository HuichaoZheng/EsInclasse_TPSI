#include <stdio.h>
int main(int Argc, char *Argv[])
{
    int n;
    do{
        printf("Inserisci un numero positivo: \n");
        scanf("%d", &n);
    }while(n <= 0);
    for(int i = -n; i <= n; i++){
        printf("%d\n", i);
    }
    return 0;
}