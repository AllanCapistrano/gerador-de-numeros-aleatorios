# Gerador-de-numeros-aleatorios
* Dois geradores de números aleatórios feitos na linguagem de programação C, um que permite a repetição dos números e outro que não permite a repetição dos números. 

* É possível alterar o valor máximo que o gerador irar gerar alterando a constante "LIMIT".

* Os números são mostrados em ordem crescente, caso não queira dessa forma, basta apagar ou comentar o laço que possui um comentário indicando ser o laço de ordenação (código abaixo). 
```
        /*Laço para ordenação dos números*/
	for(j=1; j<qtd; j++){
		aux = V[j];
		for(k=j; (k>0) && (aux < V[k-1]); k--){
			V[k] = V[k-1];
		}
		V[k] = aux;
	}
  ```
