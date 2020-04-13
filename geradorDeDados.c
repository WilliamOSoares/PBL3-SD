/*
    Autor: GUSTAVO ALVES, MATHEUS NASCIMENTO e WILLIAM OLIVEIRA SOARES 
    Componente Curricular: TEC499 MI Sistemas Digitais
    Concluido em: 2020
    Seguindo a fóruma para gerar a onda é a seguinte:
    y(x,t)=YmSen(kx - kvt)
    Assumindo que k=t=1 porque k é o número de ondas e t é o tempo de atualização da onda
    Sendo assim temos:
    y(x)=YmSen(x-v)
    Sendo Ym=v=5, tomando em base uma voltagem fictícia para gerar a onda, com base nisso temos:
    y(x)=5*Sen(x-5)
*/
 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

int main () {
    double x0 = 0;	// valor de marca
    double i = 1;	// incrementador
    int volts = 5;	// voltagem/amplitude fictícia
    int aux = 0;	// aux = (x-5)
    
    printf ("# x \t f(x) \n");	
    
    while (1) {
	aux = x0 - volts;
	FILE* escrita = fopen("BaseDeDados.txt", "a");
        fprintf (escrita,"%.3f \t %.3f \n", x0, volts*sin(aux));
	printf ("%.3f \t %.3f \n", x0, volts*sin(aux));
	fclose(escrita);
        x0 += i;
	sleep(1);
    }
	
    return 0;
}


