#include <iostream>
#define TAMANHO 5

typedef struct{
  int topo;
  int item[TAMANHO];
}PILHA;

void iniciarPilha(PILHA &p);

void empilhar(PILHA &p);

void desempilhar(PILHA &p);

bool vazia(PILHA p);

bool cheia(PILHA p);


void iniciarPilha(PILHA &p){
  p.topo = -1;
}

void empilhar(PILHA &p, int numero){
  if(p.topo < TAMANHO && p.topo >= -1){
    p.topo += 1;
    p.item[p.topo] = numero;
  }
}

void desempilhar(PILHA &p){
  if(p.topo > -1){
      p.topo -= 1;
    }
}

bool vazia(PILHA p){
  if(p.topo == -1) return true; else return false;
}

bool cheia(PILHA p){
  if(p.topo >= TAMANHO) return true; else return false;
}


int main() {
  PILHA s;
	
	iniciarPilha(s);
	empilhar(s, 1);
	empilhar(s, 2);
	empilhar(s, 3);
	empilhar(s, 4);
	empilhar(s, 4);
	empilhar(s, 4);
	
	if(cheia(s) == true){
		printf("Lista está cheia.");
	}
	else if(vazia(s) == true){
		printf("Lista está vázia.");
	}
	
	
	


}
