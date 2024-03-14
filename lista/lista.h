#include <iostream>

class No {
    friend class Lista;

public:
    No(int dado){
        this->dado = dado;
        this->proximo = nullptr;
    }

    void imprimir(){
        std::cout << this->dado;
    }

private:
    int dado;
    No* proximo;
};

class Lista{
public:
    Lista(){
        //Inicializar a lista vazia
        this->primeiro = nullptr;
        this->ultimo = nullptr;
        this->tamanho = 0;
    }

/* quando a lista terminar de ser chamada lá no main.cpp ele vai invocar um destrutor que vai destruir só o l do main() do main.cpp
aqui eu estou alterando o destrutor padrão para percorrer todos os nós livrando a memória e então depois deletar o l do main.cpp
*/
    ~Lista(){
        std::cout << "destruindo a lista\n";
        No* p = this->primeiro;
        while (p != nullptr){
            No* t = p;
            p = p->proximo;
            delete t;
        }
    }

    bool vazia(){
        return this->tamanho == 0;
    }

    //int LST_Inserir(ILISTA* L, int dado);
    void inserir(int dado){
        No* novo = new No(dado);

        //Caso 1: a lista é vazia.
        if(this->vazia()){
            this->primeiro = novo;
        }
        else{
            //Caso 2: a lista tem pelo menos um elemento.
            //Ligar o último elemento da lista ao novo elemento e
            //atualizar o ponteiro para o último elemento.
            this->ultimo->proximo = novo;
        }

        this->ultimo = novo;
        //Atualizar o tamanho da lista
        this->tamanho++;
    }

    void imprimir(){
        for(No* p = this->primeiro;
            p != nullptr;
            p = p->proximo){

            p->imprimir();
            std::cout << ", ";
        }
        std::cout << "\n";
    }

private:
    int tamanho;
    No* primeiro;
    No* ultimo;
};
