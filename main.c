#include <stdio.h>

#define MAX 100

int main() {
    int vertices, arestas;
    int matrizInc[MAX][MAX];
    int matrizAdj[MAX][MAX] = {0};

    printf("Digite o numero de vertices: ");
    scanf("%d", &vertices);
    printf("Digite o numero de arestas: ");
    scanf("%d", &arestas);
    
    printf("\nDigite a matriz de incidencia (%d x %d):\n", vertices, arestas);
    for(int i = 0; i < vertices; i++) 
    {
        for(int j = 0; j < arestas; j++) 
        {
            scanf("%d", &matrizInc[i][j]);
            // Validação: valores devem ser -1, 0, 1 ou 2
            if(matrizInc[i][j] < -1 || matrizInc[i][j] > 2)
            {
                printf("Valor invalido! Use apenas -1, 0, 1 ou 2.\n");
                return 1;
            }
        }
    }
    
    printf("\n=== GRAUS DOS VERTICES ===\n");
    for(int i = 0; i < vertices; i++) 
    {
        int grauEntrada = 0, grauSaida = 0;
        
        for(int j = 0; j < arestas; j++) 
        {
            if(matrizInc[i][j] == -1 || matrizInc[i][j] == 2) grauEntrada++;
            if(matrizInc[i][j] == 1 || matrizInc[i][j] == 2) grauSaida++;
        }
        printf("No %d: Entrada = %d, Saida = %d\n", i+1, grauEntrada, grauSaida);
    }
    
    // Converção para matriz de adjacência
    for(int j = 0; j < arestas; j++)
    {
        int origem = -1, destino = -1;
        for(int i = 0; i < vertices; i++)
        {
            if(matrizInc[i][j] == 1) origem = i;
            if(matrizInc[i][j] == -1) destino = i;
            if(matrizInc[i][j] == 2) matrizAdj[i][i] = 1;
        }
        
        if(origem != -1 && destino != -1) 
        {
            matrizAdj[origem][destino] = 1;
        }
    }
    
    // Imprimir converção
    printf("\n=== MATRIZ DE ADJACENCIA ===\n");
    for(int i = 0; i < vertices; i++)
    {
        for(int j = 0; j < vertices; j++) 
        {
            printf("%d ", matrizAdj[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
