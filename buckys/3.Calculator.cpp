#include <iostream>
#include <string>

using namespace std;

double soma(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double multi(double a, double b) { return a * b; }
double div(double a, double b) { 
    if(b == 0) {
        cout << "Não existe divisão por 0!" << endl;
        return 0;
    }
    return a / b; 
}

int main()
{
    cout << string(10, '-') << " CALCULADORA " << string(10, '-') << endl
         << endl;

    int op = 0;
    while (op != -1)
    {
        cout << "1. Soma" << endl;
        cout << "2. Subtração" << endl;
        cout << "3. Multiplicação" << endl;
        cout << "4. Divisão" << endl
             << endl;
        cout << "-1. Sair" << endl
             << endl;

        cout << "Digite a opção: ";

        if(!(cin >> op)) {
            cout << "Entrada inválida!" << endl;
            return 1;
        }

        if(op == -1) break;

        cout << endl;

        double a, b;
        cout << "Digite o primeiro operando: ";
        cin >> a;
        cout << "Digite o segundo operando: ";
        cin >> b;

        double (*operacao)(double, double) = nullptr;
        switch (op) {
            case 1: operacao = soma; break;
            case 2: operacao = sub; break;
            case 3: operacao = multi; break;
            case 4: operacao = div; break;
            default:
                cout << "Operação inválida!" << endl;
                continue;
        }

        cout << "Resultado: " << operacao(a, b) << endl
             << endl;
    }

    return 0;
}
