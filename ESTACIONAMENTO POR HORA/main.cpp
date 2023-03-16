#include <iostream>
#include <cstdlib>

using namespace std;

class Estacionamento{

	public:
		
		int diaEntrada, diaSaida, horaEntrada, horaSaida;
		
		void registros(){
			
			cout << "Informe o dia de entrada no estacionamento: ";
			cin >> diaEntrada;
			
			cout << "\n";
				
			cout << "Informe o dia de saida no estacionamento: ";
			cin >> diaSaida;
			
			cout << "\n";
				
			cout << "Informe a hora da entrada no estacionamento: ";
			cin >> horaEntrada;
			
			cout << "\n";
			
			cout << "Informe a hora da saida do estacionamento: ";
			cin >> horaSaida;
			
			cout << "\n";
		}
		
		int calcValor(){
			
			if(diaSaida > diaEntrada + 1){
				return 0;
			} else if(diaSaida > diaEntrada){
				return ((24-horaEntrada) + horaSaida)*7;
			} else {
				return (horaSaida - horaEntrada) * 7;
		}
	}
};

int main(int argc, char** argv) {
	
	Estacionamento est;
	
	cout << "-----> Estacionamento 24hrs- R$7,00 por hora <----- \n";
	cout << "-------> OBS: Permanencia maxima de 24hrs <-------\n\n";
	
	est.registros();

	cout << "-------------------------------------------- \n\n";
	
	if(est.calcValor() == 0){
		cout << "Limite do tempo de estacionamento ultrapassado. \n Comparecer no estacionamento para maiores informacoes...";
	} else {
		cout << "Valor a ser pago: R$" << est.calcValor() << ",00" << endl;
	}
	return 0;
}