# Gerador-de-numeros-aleatorios

* Dois geradores de números aleatórios feitos na linguagem de programação C, um que permite a [repetição dos números](https://github.com/AllanCapistrano/Gerador-de-numeros-aleatorios/blob/master/gerador-de-numeros-aleatorios(REPETIÇÃO).c) e outro que [não permite a repetição dos números](https://github.com/AllanCapistrano/Gerador-de-numeros-aleatorios/blob/master/gerador-de-numeros-aleatorios.c). 

* Os números são mostrados em ordem crescente, caso não deseje dessa forma, basta apagar ou comentar o laço abaixo. 
```C
        /*Laço para ordenação dos números*/
	for(j=1; j<qtd; j++){
		aux = V[j];
		for(k=j; (k>0) && (aux < V[k-1]); k--){
			V[k] = V[k-1];
		}
		V[k] = aux;
	}
  ```
