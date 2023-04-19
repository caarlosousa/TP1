#include <iostream>
#include <string>
#include "Dominios.h"

using namespace std;

int main(){

    Senha senha;
    senha.setSenha("ash12e");
    cout << senha.getSenha();

    return 0;
}
