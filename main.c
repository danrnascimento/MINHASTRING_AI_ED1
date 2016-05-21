#include "MinhaString.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	char cod[6];
	char nome[100];
	char endereco[100];
	char dataNascimento[10];
}CADASTRO;

int main(){
	setlocale(LC_ALL, "Portuguese");

	String funcao = NEW;
	
	int n, index, i;
	char *pNome, *pEndereco, *dia, *mes, *ano, *pCod;
	pEndereco = (char *)malloc(100);
	CADASTRO cadastro;
	printf("Quantos usuários devem ser alocados:");
	scanf("%d", &n);
	
	fflush(stdin);
	///////////////////////////FALTA ALOCAR O NUMERO DE PRODUTOS/////////////////////////////////////////////////

	//CADASTRO USUÁRIO
	printf("\n Digite o seu nome: ");
	gets(cadastro.nome);

	fflush(stdin);
	int validar = 0;
	do{
		
		printf("\n Digite o seu endereço: ");
		gets(cadastro.endereco);
	
		//VALIDAÇÃO ENDEREÇO
		index = funcao.lastIndexOf(cadastro.endereco,',');
		
		if(index==0){
	        printf("Endereço invalido 1\n");
	        continue;
		}
		
		int tam = funcao.length(cadastro.endereco);
		pEndereco = funcao.substring(cadastro.endereco,index+1,tam);
		
	
		tam = funcao.length(pEndereco);
		for(i=0;i<tam;i++){
			if(pEndereco[i]<48 || pEndereco[i]>57){
				printf("Endereço Invalido 2 \n");
				break;
			}else{
				validar = 1;
			}
		}
	}while(validar==0);
	
	
	//DATA
	 do{
	 	int rodar = 0;
	 	printf("Digite a da de nascimento: ");
		 gets(cadastro.dataNascimento);
		 
		 if(funcao.length(cadastro.dataNascimento)==0 || funcao.length(cadastro.dataNascimento)>10){
		 	printf("Data invalida");
		 }
		 dia= funcao.substring(cadastro.dataNascimento,0,1);
		 mes= funcao.substring(cadastro.dataNascimento,3,4);
		 ano= funcao.substring(cadastro.dataNascimento,6,9);
		 
		 for(i=0;i<2;i++){
		 	if(dia[i]<48 || dia[i]>57){
		 		printf("Erro na data");
		 		continue;
			 }
		 }
		 
		 for(i=0;i<2;i++){
		 	if(mes[i]<48 || mes[i]>57){
		 		printf("Erro na data");
		 		break;
			 }else{
			 	rodar = 1;
			 }
		 }
		 
		 for(i=0;i<4;i++){
		 	if(ano[i]<48 || ano[i]>57){
		 		printf("Erro na data");
			 }
		 }
		 
		 if(cadastro.dataNascimento[2]!=47 || cadastro.dataNascimento[5]!=47){
		 	printf("Erro data");
		 }
	 }while(rodar==0);
	 
	 
	 
	 
	 

	

    /*

	printf("Digite a data de nascimento: ");
	gets(cadastro.dataNascimento);
	pNascimento = cadastro.dataNascimento;

	pCod = cadastro.cod;
	pCod =*pNome;


	printf("Seu nome é: %s ", nome);
	printf("Seu nome é: %s ", endereco);

    */
    return 0;
}
