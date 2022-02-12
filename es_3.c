#include <stdio.h>
int main(int argc, char *argv[])
{
    int n1, n2, i;
    do{
        printf("Inserisci numero 1\n");
        scanf("%d", &n1);
        printf("Inserisci numero 2\n");
        scanf("%d", &n2);
    }while(n1>=n2);
    
    for(i=n1+1;i<n2;i++){
        printf("%d\n",i);
    }
    return 0;
}