#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>


pthread_t thread_1;
pthread_t thread_2;
pthread_t thread_3;
pthread_t thread_4;
pthread_t thread_5;
pthread_t thread_6;

int matriz1[2][2] = {{2, 2}, {2, 2}};
int matriz2[2][2] = {{3, 3}, {3, 3}};
int matrizSoma[2][2] = {{0, 0}, {0, 0}};
int matrizMultiplicacao[2][2] = {{0, 0}, {0, 0}};

void* somaCelula_1(void *p)
{
      for (int col = 0; col < 2; col++) {
            for (int i = 0; i < 2; i++) {
                matrizSoma[0][0] = matriz1[0][0] + matriz2[0][0];
            }
            //printf("%i\t", matrizresult[col][0]);
      }
}

void* somaCelula_2(void *p)
{
      for (int col = 0; col < 2; col++) {
            for (int i = 0; i < 2; i++) {
                matrizSoma[0][1] = matriz1[0][1] + matriz2[0][1];
                
            }
            //printf("%i\t", matrizresult[col][1]);
      }
}

void* somaCelula_3(void *p)
{
      for (int col = 0; col < 2; col++) {
            for (int i = 0; i < 2; i++) {
                matrizSoma[1][0] = matriz1[1][0] + matriz2[1][0];
                
            }
            //printf("%i\t", matrizresult[col][1]);
      }
}

void* somaCelula_4(void *p)
{
      for (int col = 0; col < 2; col++) {
            for (int i = 0; i < 2; i++) {
                matrizSoma[1][1] = matriz1[1][1] + matriz2[1][1];
                
            }
            //printf("%i\t", matrizresult[col][1]);
      }
}


void* multiplicaMatriz_1(void *p)
{
      for (int col = 0; col < 2; col++) {
            for (int i = 0; i < 2; i++) {
                matrizMultiplicacao[0][col] += matriz1[0][i] * matriz2[i][col];
            }
            //printf("%i\t", matrizresult[0][col]);
            //printf("\n");
      }
}

void* multiplicaMatriz_2(void *p)
{
      for (int col = 0; col < 2; col++) {
            for (int i = 0; i < 2; i++) {
                matrizMultiplicacao[1][col] += matriz1[1][i] * matriz2[i][col];
            }
            //printf("%i\t", matrizresult[1][col]);
            //printf("\n");
      }
}


void exibirSoma()
{
    for(int i = 0;i<2; i++){
        for(int j= 0; j<2;j++){
          printf("%i\t",matrizSoma[i][j]);
        }   
    }
}

void exibirMultiplicao()
{
    for(int i = 0;i<2; i++){
        for(int j= 0; j<2;j++){
          printf("%i\t",matrizMultiplicacao[i][j]);
        }   
    }
}

int main()
{
    pthread_create(&thread_1, NULL, somaCelula_1, NULL);
    pthread_create(&thread_2, NULL, somaCelula_2, NULL);
    pthread_create(&thread_3, NULL, somaCelula_3, NULL);
    pthread_create(&thread_4, NULL, somaCelula_4, NULL);
    
    pthread_create(&thread_5, NULL, multiplicaMatriz_1, NULL);
    pthread_create(&thread_6, NULL, multiplicaMatriz_2, NULL);
    
    pthread_join(thread_1, NULL);
    pthread_join(thread_2, NULL);
    pthread_join(thread_3, NULL);
    pthread_join(thread_4, NULL);
    pthread_join(thread_5, NULL);
    pthread_join(thread_6, NULL);
  
    printf("Soma: \n");
    exibirSoma();
    
    printf("\n");
    
    printf("Multiplicacao: \n");
    exibirMultiplicao();
    
    exit(0);
}
