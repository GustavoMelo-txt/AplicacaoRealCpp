#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int quantidadeHoras;
	double INSS, FGTS, IR, precoHoras, totalDescontos;
	double salarioBruto, salarioLiquido;
	
	cout << "Insira quantas horas voc� trabalha por m�s: ";
	cin >> quantidadeHoras;
	cout << "Insira quanto voc� ganha por hora: ";
	cin >> precoHoras;
	
	salarioBruto = quantidadeHoras * precoHoras;
	INSS = salarioBruto * 0.10;
	FGTS = salarioBruto * 0.11;
	
	cout << fixed << setprecision(2);
	
	if (salarioBruto > 900) {
		IR = salarioBruto * 0.05;
		totalDescontos = INSS + IR;		
		salarioLiquido = salarioBruto - (INSS + IR);

		cout << "\nSalario Bruto: (" << precoHoras << " * " << quantidadeHoras << ")        :R$ " << salarioBruto; 
		cout << "\n(-) IR (5%)           	 	   :R$ " << IR;
		cout << "\n(-) INSS (10%)        		   :R$ " << INSS;
		cout << "\nFGTS (11%)            		   :R$ " << FGTS;
		cout << "\nTotal de descontos    		   :R$ " << totalDescontos;
		cout << "\nSal�rio Liquido        		   :R$ " << salarioLiquido;
		
	} else if (salarioBruto > 1500) {
		IR = salarioBruto * 0.10;
		totalDescontos = INSS + IR;
		salarioLiquido = salarioBruto - (INSS + IR);
		
		cout << "\nSalario Bruto: (" << precoHoras << " * " << quantidadeHoras << ")        :R$ " << salarioBruto; 
		cout << "\n(-) IR (10%)         		       :R$ " << IR;
		cout << "\n(-) INSS (10%)      		       :R$ " << INSS;
		cout << "\nFGTS (11%)                      :R$ " << FGTS;
		cout << "\nTotal de descontos              :R$ " << totalDescontos;
		cout << "\nSal�rio Liquido                 :R$ " << salarioLiquido;
		
	} else if (salarioBruto > 2500){
		IR = salarioBruto * 0.20;
		totalDescontos = INSS + IR;
		salarioLiquido = salarioBruto - (INSS + IR);
		
		cout << "\nSalario Bruto: (" << precoHoras << " * " << quantidadeHoras << ")        :R$ " << salarioBruto; 
		cout << "\n(-) IR (20%)                     :R$ " << IR;
		cout << "\n(-) INSS (10%)                  :R$ " << INSS;
		cout << "\nFGTS (11%)                      :R$ " << FGTS;
		cout << "\nTotal de descontos              :R$ " << totalDescontos;
		cout << "\nSal�rio Liquido                 :R$ " << salarioLiquido;
		
	} else {
		salarioLiquido = salarioBruto - INSS;
		cout << "\nSalario Bruto: (" << precoHoras << " * " << quantidadeHoras << ")        :R$" << salarioBruto; 
		cout << "\n(-) IR                		   :Isento";
		cout << "\n(-) INSS (10%)         		   :R$ " << INSS;
		cout << "\nFGTS (11%)             		   :R$ " << FGTS;
		cout << "\nTotal de descontos     		   :R$ " << INSS;
		cout << "\nSal�rio Liquido       		   :R$ " << salarioLiquido;
	}
		
	return 0;
}
