#include<stdio.h>

int main(){
    int nentrada[10],i;
  
    for(i = 0;i < 10;i++){
        scanf("%d",&nentrada[i]);
        
        if(i < 9){
        printf("%d ",nentrada[i]);
        }else{
            printf("%d",nentrada[i]);
        }
    }
    printf("\n"); 

    for (i = 10; i > 1; i--){
        for (int j = 0; j < i - 1; j++) {
            nentrada[j] = nentrada[j] + nentrada[j + 1];

            if(j < i - 2){
                  printf("%d ", nentrada[j]);
            }else{
                printf("%d", nentrada[j]);
            }
          
        }
        printf("\n");
    }
   
    return 0;
}