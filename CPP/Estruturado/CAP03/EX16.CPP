#include <iostream>
#include <locale.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main ()
{
    float horas_t, vlr_sal_min, vlr_hora_t, vlr_sal_bru, imp, vlr_sal_liq;
	// Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do total de horas trabalhadas
	cout << "\nDigite o total de horas trabalhadas: ";
	// Recebe total de horas trabalhadas
	cin >> horas_t;
	// Mostra mensagem antes da leitura do sal�rio m�nimo
	cout << "\nDigite o valor do sal�rio m�nimo: ";
	// Recebe valor do sal�rio m�nimo
	cin >> vlr_sal_min;
	// Calcula o valor de cada hora trabalhada
	vlr_hora_t =  vlr_sal_min / 2;
	// Calcula o sal�rio bruto
	vlr_sal_bru = vlr_hora_t * horas_t;
	// Calcula o imposto de 3% do sal�rio bruto
	imp = vlr_sal_bru * 3 / 100;
	// Calcula o sal�rio a receber
	vlr_sal_liq = vlr_sal_bru - imp;
	// Mostra o sal�rio a receber
	cout << "\nO sal�rio a receber: " << vlr_sal_liq;
	// Para o programa a espera de um ENTER
	getch();
}
