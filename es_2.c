#include <stdio.h>
int main(int argc, char *argv[])
{
    int n, i;
    do{
        printf("Inserisci numero\n");
        scanf("%d", &n);
    }while(n<=0);
    
    for(i=0;i<=n;i++){
        if(i%2==1)
            printf("%d\n",i);
    }
    return 0;
}