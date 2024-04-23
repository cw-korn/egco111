#include <stdio.h>
#include <stdlib.h>

int main(){
    int max = 10;
    for (int i = 0; i <10; i++){
        int random = rand()%(max+1);
        printf("%d\n",random);
    }
    return 0;
}