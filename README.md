# Grafo-matriz
Tarefa 1 de grafo
matriz de incidencia de um grafo direcionado qualquer.

Esse programa faz a conversão de uma matriz de incidencia para uma martriz de adjasencia e mostra o grau de entrada e saida dos verices do grafo.
O programa começa com a inicialização da matriz de adjacencia com zeros para ser preenchida de forma incremental no momento da converção. Após faz uma solicitação do numero de vertices e arestas, e o conteudo da matriz. Depois verifica se os numeros digitados são validos:

1 - saída;

-1 - chegada;

2 - laço;

0 - sem conecxão entre os vertices.


Em seguida o código verifica o grau dos vertices, percorrendo as arestas e armazenado a contagem: 
-1 e 2 - grau de entrada;
1 e 2 - grau de saida.


E por fim é realizada a conversão das matrizes. Percorre a matriz digitada pelo usuario (incidencia), lê-se as colunas a procura de 1(origem) e -1(chegada), assim sabemos que uma aresta os liga, e escreve 1 na linha da matriz de adjacencia onde corresponde a ligação deles.
