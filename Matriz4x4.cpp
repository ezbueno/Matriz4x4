#include<iostream>
#include<stdio.h>
#include<string.>
#include<locale.h>
using namespace std;

int Menu (){
	
   cout << "=========================================" << endl;
   cout << "        M E N U  D E  O P Ç Õ E S        " << endl;
   cout << "=========================================" << endl;
   cout << "[1] Mostrar a Matriz" << endl;
   cout << "[2] Diagonal Principal" << endl;
   cout << "[3] Diagonal Secundária" << endl;
   cout << "[4] Triângulo Superior" << endl;
   cout << "[5] Triângulo Inferior" << endl;
   cout << "[6] Mostrar o maior valor" << endl;
   cout << "[7] Mostrar o menor valor" << endl;
   cout << "[8] Sair" << endl;
   cout << "=========================================" << endl;	
	
}

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	int l, c, s, mat[4][4], opcao, maior, menor;
	char esc, col;

	for (l = 0; l < 4; l++){
		for (c = 0; c < 4; c++){
		cout << "Digite o valor da posição " << "[" << l << "," << c << "]: ";
		cin >> mat[l][c];
		}
	}
	system ("cls");	
do{
	Menu();
	cout << "Digite a opção desejada: ";
	cin >> opcao;
	system ("cls");
	if (opcao == 1){
		for (l = 0; l < 4; l++){
			for (c = 0; c < 4; c++){
				printf ("%8d", mat[l][c]);
			}
			cout << "\n";
		}
	}
	if (opcao == 2){
        for (l = 0; l < 4; l++){
          	//Imprimindo espaçamento
          	for (s = 0; s < l; s++)	printf("  "); //Neste caso coloquei 2 espaços, mas você pode ajustar para ficar compatível com o espaçamento entre linhas
          	//Imprimindo número
            printf ("%d\n", mat[l][l]);
        }
	}
	if (opcao == 3){
       for (l = 0; l < 4; l++){
			for (c = 0; c < 4; c++){
				if (l + c == 3){
				//imprimindo recuo
				for (s = 0; s < c; s++) printf("   ");	//desta vez coloquei 3 espaços
				//imprimindo número;
				printf("%d\n",mat[l][c]);
				}
			}
		}
	}
	if (opcao == 4){
		for (l = 0; l < 4; l++){
			for (c = 0; c < 4; c++){
				if (l > c || l == c){
					printf ("     ");
				}else if (l < c || l == c){
					printf ("%5d", mat[l][c]);
				}
			}
			cout << "\n";
		}
	}
	if (opcao == 5){
		for (l = 0; l < 4; l++){
			for (c = 0; c < 4; c++){
				if (l < c || l == c){
					printf ("     ");
				}else if (l > c || l == c){
					printf ("%5d", mat[l][c]);
				}
			}
			cout << "\n";
		}
	}
	if (opcao == 6){
		for (l = 0; l < 4; l++){
			for (c = 0; c < 4; c++){
				if (l == 0 && c == 0){
					maior = mat[0][0];
				}
				if (mat[l][c] > maior){
					maior = mat[l][c];
				}
			}
		}
		printf ("Maior valor contido na matriz: %d ", maior);
		printf ("\n");
	}
		if (opcao == 7){
		for (l = 0; l < 4; l++){
			for (c = 0; c < 4; c++){
				if (l == 0 && c == 0){
					menor = mat[0][0];
				}
				if (mat[l][c] < menor){
					menor = mat[l][c];
				}
			}
		}
		printf ("Menor valor contido na matriz: %d ", menor);
		printf ("\n");
	}	
	if (opcao < 1 || opcao > 8){
		printf ("\nATENÇÃO! OPÇÃO INVÁLIDA");
		printf ("\n");
	}	
	if (opcao == 8){
		printf ("Deseja realmente sair? [s/n] ");
		scanf (" %c", &esc);
		if (esc == 's'){
			printf ("ENCERRANDO...");
		}else if (esc != 's' && esc != 'n'){
			printf ("\nATENÇÃO! OPÇÃO INVÁLIDA\n");
		}
	}
}while (esc != 's');
}

