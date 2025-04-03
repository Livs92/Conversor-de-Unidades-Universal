#include <iostream>
#include <cstdlib> // para system("cls") no Windows
using namespace std;

// Funções de conversão de temperatura
double celsiusToFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}

double fahrenheitToCelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

double celsiusToKelvin(double c) {
    return c + 273.15;
}

double kelvinToCelsius(double k) {
    return k - 273.15;
}

// Função de menu de temperatura
void menuTemperatura() {
    int opcao;
    double valor, resultado;

    do {
        system("cls");
        cout << "--- CONVERSOR DE TEMPERATURA ---\n";
        cout << "1. Celsius para Fahrenheit\n";
        cout << "2. Fahrenheit para Celsius\n";
        cout << "3. Celsius para Kelvin\n";
        cout << "4. Kelvin para Celsius\n";
        cout << "0. Voltar ao menu principal\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "Digite a temperatura em Celsius: ";
                cin >> valor;
                resultado = celsiusToFahrenheit(valor);
                cout << valor << " °C = " << resultado << " °F\n";
                break;
            case 2:
                cout << "Digite a temperatura em Fahrenheit: ";
                cin >> valor;
                resultado = fahrenheitToCelsius(valor);
                cout << valor << " °F = " << resultado << " °C\n";
                break;
            case 3:
                cout << "Digite a temperatura em Celsius: ";
                cin >> valor;
                resultado = celsiusToKelvin(valor);
                cout << valor << " °C = " << resultado << " K\n";
                break;
            case 4:
                cout << "Digite a temperatura em Kelvin: ";
                cin >> valor;
                resultado = kelvinToCelsius(valor);
                cout << valor << " K = " << resultado << " °C\n";
                break;
            case 0:
                cout << "Voltando ao menu principal...\n";
                break;
            default:
                cout << "Opcao invalida!\n";
        }

        if (opcao != 0) {
            cout << "\nPressione Enter para continuar...";
            cin.ignore();
            cin.get();
        }

    } while(opcao != 0);
}

// Menu principal
int main() {
    int escolha;

    do {
        system("cls");
        cout << "====== CONVERSOR UNIVERSAL ======\n";
        cout << "1. Temperatura\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                menuTemperatura();
                break;
            case 0:
                cout << "Encerrando o programa...\n";
                break;
            default:
                cout << "Opcao invalida!\n";
        }

    } while (escolha != 0);

    return 0;
}
