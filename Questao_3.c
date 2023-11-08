#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int conjunto[4][4],conjunto2[4][4],resposta[4][4];
    char casos[4];


   for(int linha = 0;linha < 4;linha++){
        
        for(int coluna = 0;coluna < 4;coluna++){
        scanf("%d",&conjunto[linha][coluna]);
        }
        
    } 

    for(int linha = 0;linha < 4;linha++){
        
        for(int coluna = 0;coluna < 4;coluna++){
        scanf("%d",&conjunto2[linha][coluna]);
        }
        
    } 

    scanf("%s", casos);

    if(strcmp(casos,"soma") == 0){

       for(int linha = 0;linha < 4;linha++){
        
        for(int coluna = 0;coluna < 4;coluna++){
        resposta[linha][coluna] = conjunto[linha][coluna] + conjunto2[linha][coluna];
        }
        
    } 
    }

    else if(strcmp(casos,"sub") == 0){

        for(int linha = 0;linha < 4;linha++){
        
        for(int coluna = 0;coluna < 4;coluna++){
            
            resposta[linha][coluna] = conjunto[linha][coluna] - conjunto2[linha][coluna];



        }
        
    } 
    }

    else if(strcmp(casos,"mult") == 0){

        for(int linha = 0;linha < 4;linha++){
        
        for(int coluna = 0;coluna < 4;coluna++){
            resposta[linha][coluna] = 0;
            for(int k = 0;k < 4;k++){

                resposta[linha][coluna] += conjunto[linha][k] * conjunto2[k][coluna];
            }

        }
                    
    }
    }
 
        for(int linha = 0;linha < 4;linha++){
        
        for(int coluna = 0;coluna < 4;coluna++){
        printf("%4d",resposta[linha][coluna]);
        }
        printf("\n");
        
    } 
    
    
    
return  0;
}