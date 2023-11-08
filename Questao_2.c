#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char nome[35], team1[30], team2[2][30];
    float forcas[11];
    char *jogador, *posicao, *forca;
    float forcaTime[2];
    int g = 0,l1 = 1, l2 = 2,z1 = 3, z2 = 4,v1 = 5, v2 = 6,m1 = 7, m2 = 8,a1 = 9, a2 = 10;
    

    
    for (int i = 0; i < 2; i++)
    {
        
        for (int i = 0; i < 11; i++)
        {
            forcas[i] = 0;
        }

        fgets(team2[i], 30, stdin);
        
        team2[i][strcspn(team2[i], "\n")] = 0;

        for (int j = 0; j < 11; j++)
        {
            fgets(nome, 35, stdin);

            jogador = strtok(nome, ";");
            posicao = strtok(NULL, ";");
            forca = strtok(NULL, ";");

            if (*posicao == 'G')
            {
                forcas[g] = atoi(forca); 
            }
            else if (*posicao == 'L')
            {
                if (forcas[l1] == 0)
                {
                    forcas[l1] = atoi(forca);
                }
                else
                {
                    forcas[l2] = atoi(forca);
                }
            }
            else if (*posicao == 'Z')
            {
                if (forcas[z1] == 0)
                {
                    forcas[z1] = atoi(forca);
                }
                else
                {
                    forcas[z2] = atoi(forca);
                }
            }
            else if (*posicao == 'V')
            {
                if (forcas[v1] == 0)
                {
                    forcas[v1] = atoi(forca);
                }
                else
                {
                    forcas[v2] = atoi(forca);
                }
            }
            else if (*posicao == 'M')
            {
                if (forcas[m1] == 0)
                {
                    forcas[m1] = atoi(forca);
                }
                else
                {
                    forcas[m2] = atoi(forca);
                }
            }
            else if (*posicao == 'A')
            {
                if (forcas[a1] == 0)
                {
                    forcas[a1] = atoi(forca);
                }
                else
                {
                    forcas[a2] = atoi(forca);
                }
            }
        }

        forcaTime[i] = ( (12 * (forcas[a1] + forcas[a2]))+
                        (5 * (forcas[z1] + forcas[z2])) +
                        (10 * (forcas[l1] + forcas[l2])) +
                        (8 * (forcas[v1] + forcas[v2])) +
                        (11 * (forcas[m1] + forcas[m2])) +
                        (8 * forcas[g])) /
                       100;
    }

    printf("%s: %.2f de forca\n", team2[0], forcaTime[0]);
    printf("%s: %.2f de forca\n", team2[1], forcaTime[1]);

    if (forcaTime[0] > forcaTime[1])
    {
        printf("%s eh mais forte\n", team2[0]);
    }
    else if (forcaTime[0] < forcaTime[1])
    {
        printf("%s eh mais forte\n", team2[1]);
    }
    return 0;
}