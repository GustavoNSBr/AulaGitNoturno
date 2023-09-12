#include <stdio.h>

int main(){
    // EXEMPLO DO FOR

    // int i;
	// for(i = 1; i <= 3;i = i + 1){
    //     printf("Valor de i: %d\n", i);
        
    // }
	
    // printf("Saiu do for\n");



    //EXEMPLO DO WHILE


    // Não pode declarar dentro do while
    // A condicao fica dentro
    // incremento nas chaves
    int i = 1;
    int nota;


    do{
        printf("Insira uma nota positiva!\n");       
        scanf("%d", &nota);
    } while(nota < 0);

    //     printf("Insira uma nota positiva!\n");
    //  scanf("%d", &nota);
    // while(nota < 0){
    //     printf("Insira uma nota positiva!\n");       
    //     scanf("%d", &nota);
    // {
        
    

    scanf("Nota lida: %d\n", nota);



    // while(i <= 3){
    //     printf("Valor de i: %d\n", i);
    //     i++;
    // }

    // break aplicado abaixo  
    /*if(nota == -1){
            printf("Saindo do programa...\n");
            break;
        }
    */       


    /*
        do{
        printf("Insira uma nota positiva!\n");       
        scanf("%d", &nota);
    } while(nota < 0)
    
    */
	return 0;
}