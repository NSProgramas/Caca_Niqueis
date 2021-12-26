#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
int fichas = 0, vitorias = 0, derrotas = 0;
void MostraLinha(string str) {
	cout << "=====================\n";
	cout << str << "\n";
	cout << "=====================\n";
}

int main() {
	system("chcp 65001");
	MostraLinha("CAÇA-NÍQUEIS NS");
	fichas = 3;
	int resp;
	cout << "Você tem 3 fichas. Quer jogar?\n[1]Sim\n[2]Não\n";
	cout << "Insira sua escolha aqui: ";
	cin >> resp;
    while (resp != 2 && fichas != 0) {
		int n1 = rand() % 3 + 1, n2, n3;
		n2 = rand() % 3 + 1;
		n3 = rand() % 3 + 1;
		Sleep(1000);
		cout << "[" << n1 << "] " << "[" << n2 << "] " << "[" << n3 << "]\n";
		Sleep(1000);
		if (n1 == n2 && n2 == n3){
			cout << "Ganhou!\n";
			fichas++;
			vitorias++;
		} else {
			cout << "Perdeu!\n";
			fichas--;
			derrotas++;
		}
		cout << "Você tem " << fichas << " fichas. Quer continuar?\n[1]Sim\n[2]Não\n";
		cout << "Insira sua escolha aqui: ";
		cin >> resp;
		if (resp == 2 || fichas == 0){
			break;
		}
	}
	Sleep(500);
	MostraLinha("RESULTADO");
	cout << "Vitórias: " << vitorias << "\nDerrotas: " << derrotas;
	return 0;
}
