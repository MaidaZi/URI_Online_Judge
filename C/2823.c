#include <stdio.h>

int main(){

    int intera, num1, num2;
    float soma = 0;
    scanf("%d", &intera);

    int i;
    for(i = 0 ; i < intera ; i++){
        scanf("%d %d", &num1, &num2);
        soma += (double)num1/(double)num2;
    }
    if (soma <= 1){
        printf("OK\n");
    }
    else{
        printf("FAIL\n");
    }

    return 0;
}
