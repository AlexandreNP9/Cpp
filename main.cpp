#include "lista.h"

int main(){

    // No x(5);
    // No y(10);

    // y.imprimir();

    // No* z = new No(15);

    // z->imprimir();

    // return 0;

    Lista* l = new Lista();
    l->inserir(4);
    l->inserir(20);
    l->inserir(100);

    l->imprimir();

    return 0;

}
