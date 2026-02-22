#include <iostream>
#include <string>
using namespace std;

int main() {

    string senha;
    bool tamValido = false;
    bool temEspecial = false;

    cout << "Digite a senha: ";
    cin >> senha;

    // Verifica tamanho mínimo
    if (senha.length() >= 8) {
        tamanhoValido = true;
    }

    // Verifica se possui caractere especial
    for (int i = 0; i < senha.length(); i++) {
        if (senha[i] == '@' || senha[i] == '#' || senha[i] == '$' ||
            senha[i] == '%' || senha[i] == '&' || senha[i] == '*') {
            temEspecial = true;
        }
    }

    // Verificação final
    if (tamValido && temEspecial) {
        cout << "Senha Valida" << endl;
    } else {
        cout << "Senha Invalida" << endl;

        if (!tamValido) {
            cout << "- Deve possuir pelo menos 8 caracteres." << endl;
        }

        if (!temEspecial) {
            cout << "- Deve possuir pelo menos um caractere especial (@, #, $, %, &, *)." << endl;
        }
    }

    return 0;
}