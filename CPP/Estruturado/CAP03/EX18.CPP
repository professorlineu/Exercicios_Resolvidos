#include <iostream>
#include <locale.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main ()
{
    float peso_saco, racao_gato1, racao_gato2, total_final;
	// Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do peso do saco
	cout << "\nDigite o peso do saco de ra��o (em Kg): ";
	// Recebe peso do saco de ra��o
	cin >> peso_saco;
	// Mostra mensagem antes da leitura da quantidade do gato1
	cout << "\nDigite a ra��o consumida pelo 1o gato (em gramas): ";
	// Recebe ra�ao gasta com o 1o gato
	cin >> racao_gato1;
	// Mostra mensagem antes da leitura da quantidade do gato2
	cout << "\nDigite a ra��o consumida pelo 2o gato (em gramas): ";
	// Recebe ra��o gasta com o 2o gato
	cin >> racao_gato2;
	// Converte a ra��o do gato 1 para Kg
	racao_gato1 = racao_gato1 / 1000;
	// Converte a ra��o do gato 2 para Kg
	racao_gato2 = racao_gato2 / 1000;
	// Calcula o restante ap�s 5 dias
	total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);
	// Mostra o restante
	cout << "\nTotal de ra��o restante (em Kg): " << total_final;
	// Para o programa a espera de um ENTER
	getch();
}
