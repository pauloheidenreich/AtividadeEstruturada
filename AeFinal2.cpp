#include <iostream>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	int escolha1, op01=0, op02=0, op03=0, op04=0, op05=0;
	char op06;
	float valor1;
	cout<< "\nCALCULADORA AUTOMOTIVA V0.01\n"; //EXERCÍCIO REALIZADO DURANTE O APRENDIZADO DA DISCIPLINA DE ALGORÍTIMOS
	cout<< "\nPrograma desenvolvido por Paulo H. Junior\n\n";
	cout<< "\nDigite a opcao desejada:\n\n";
	cout<< "\n(Qualque Numero) - Usar a calculadora.\n";
	cout<< "\n(0) - Encerrar o programa.\n\n";
	cin>> escolha1;
	system("cls");
		while (escolha1!=0)
		{
			cout<< "\nEntre com o valor do automovel (R$ xxxx.x): "<<"\n\n"; //RECEBE O VALOR DO AUTOMÓVEL PARA POSTERIORMENTE RECEBER O VALOR PARA OPCIONAIS
			cin>> valor1;
			cout<< "\nO valor do automovel e de R$ "<< valor1 <<"\n\n";
			cout<< "\nQuais opcionais voce gostaria de incluir no seu carro ?"<<"\n\n";
			cout<< "\nEscolha a opcao desejada:"<<"\n\n";
			cout<< "\n0 - Sem opcionais"<< "\n\n";
			cout<< "\n1 - Trio Eletrico (alarme, vidro eletrico e trava eletrica)"<<"\n\n";
			cout<< "\n2 - Ar Condicionado"<<"\n\n";
			cout<< "\n3 - Direcao Hidraulica"<<"\n\n";
    		cout<< "\n4 - Completo (Trio eletrico, Ar condicionado e Direcao Hidraulica)"<<"\n\n";
    		cout<< "\nEscolha uma das opcoes: "<<"\t\n";
			int opcao;
			float porc1 = 2.0/100.0, porc2 = 3.5/100.0, porc3 = 8.5/100.0; //AQUI É REALIZADO O CÁLCULO DO CUSTO DO VEÍCULO COM OU SEM OPCIONAIS
			float vt1 = valor1 + (porc3 * valor1), vt2 = valor1 + (porc1 * valor1), vt3 = valor1 + (porc2 * valor1);
			float vf1 = vt1, vf2 = vt2 + (porc3 * vt2), vf3 = vt3 + (porc3 * vt3);
			cout<<"\n";
			cin>> opcao;
				switch (opcao) //RETORNA O VALOR DO VEÍCULO DE ACORDO COM O OPCIONAL ESCOLHIDO
					{
						case 0 : system("cls"); cout<< "\nVoce escolheu: Sem opcionais.\n"<< "\nO Valor do Veiculo e de: "<< vf1 << " Reais." << "\n" << "\nO Valor total leva em conta o valor de fabrica + Opcionais + IPI" << "\n";
						op01++;
						break;
						case 1 : system("cls"); cout<< "\nVoce escolheu: Trio eletrico (alarme, vidro eletrico e trava eletrica)\n" << "\nO Valor do Veiculo e de: "<< vf2 << " Reais." << "\n" << "\nO Valor total leva em consideracao o valor de fabrica + Opcionais + IPI" << "\n";
						op02++;
						break;
						case 2 : system("cls"); cout<< "\nVoce escolheu: Ar condicionado\n" << "\nO Valor do Veiculo e de: "<< vf2 << " Reais." << "\n" << "\nO Valor total leva em conta o valor de fabrica + Opcionais + IPI" << "\n";
						op03++;
						break;
						case 3 : system("cls"); cout<< "\nVoce escolheu Direcao Hidraulica\n" << "\nO Valor do Veiculo e de: "<< vf2 << " Reais." << "\n" << "\nO Valor total leva em conta o valor de fabrica + Opcionais + IPI" << "\n";
						op04++;
						break;
						case 4 : system("cls"); cout<< "\nVoce escolheu: Completo (Trio eletrico, Ar condicionado e Direcao Hidraulica\n" << "\nO Valor do Veiculo e de: " << vf3 << " Reais.\n" << "\nO Valor total leva em conta o valor de fabrica + Opcionais + IPI." <<"\n";
						op05++;
						break;
						defaut: cout<< "\nTente Novamente\n";
					}
		cout<< "\n\n\n";
		cout<< "\nDeseja realizar o calculo novamente ?"<<"\n"; //CONSULTA SE O USUÁRIO DESEJA REPETIR O PROCESSO
		cout<< "\n1- Sim."<<"\n";
		cout<< "\n0 - Nao."<<"\n\n";
		cin>> escolha1;
		system("cls");
	}
	cout<< "\nNumero de vezes que cada opcional foi escolhido:\n\n"; //CALCULA O NÚMERO DE VEZES EM QUE OS OPCIONAIS FORAM ESCOLHIDOS.
	cout<< "Sem opcionais: "<< op01 <<" vezes\n";
	cout<< "Trio Eletrico: "<< op02 <<" vezes\n";
	cout<< "Ar-Condicionado: "<< op03 <<" vezes\n";
	cout<< "Direcao Heidraulica: "<< op04 <<" vezes\n";
	cout<< "Completo - Todos os opcionais: "<< op05 <<" vezes\n";
	cout<< "\n\n";
	system ("pause");
}
