/*
   Autor: GUSTAVO MENESES, MATHEUS NASCIMENTO e WILLIAM OLIVEIRA SOARES 
   Componente Curricular: TEC499 MI Sistemas Digitais
   Concluido em: 2020
*/
#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

#define GNUPLOT "gnuplot -persist"

int main (){
   FILE *gp;
   gp = popen(GNUPLOT, "w");
	
   if(gp == NULL){
      printf("GNUplot não encontrado");
      exit(0);
   }
   fprintf(gp, "load 'script.gnu'\n");
   fclose(gp);
   return 0;
}
