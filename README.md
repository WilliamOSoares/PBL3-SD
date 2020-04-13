# Problema 03 de Sistemas Digitais
A ideia do projeto é criar um programa para plotagem de gráfico em tempo real, pegando dados simulados que seriam adquiridos do ADS1115,
no entanto devido a algumas adversidades, tais dados passaram a ser gerado por um arquivo, simulando os sinais que seriam adquiridos no ADS1115.

## Objetivos 
- Realizar comunicação interprocessos;
- Plotar gráfico em tempo real;
- Aprender utilizar recursos do SO, por exemplo, o pipe.

## Atividades desenvolvidas 
- Criação de script em C para gerar dados aleatórios;
- Script para plotagem no GNUPlot;


## Como executar 
- Compila e executa o arquivo gerador de dados
bash
$ gcc geradorDeDados.c -o geradorDeDados -lm
$ ./geradorDeDados
-Manter o arquivo "script.gnu" na mesma pasta dos demais
- Compila e executa o arquivo de chamada para o GNUPlot
bash
$ gcc PBL3.c -o pbl
$ ./pbl
