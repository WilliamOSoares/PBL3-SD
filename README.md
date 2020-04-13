# Problema 03 de Sistemas Digitais
A ideia do projeto é criar um programa para plotagem de gráfico em tempo real, pegando dados simulados que seriam adquiridos do ADS1115,
no entanto devido a algumas adversidades, tais dados passaram a ser gerado por um arquivo, simulando os sinais que seriam adquiridos no ADS1115.

## Objetivos 
- Realizar comunicação interprocessos;
- Plotar gráfico em tempo real;
- Aprender utilizar recursos do SO, por exemplo, o pipe.

## Ambiente de Desenvolvimento
- Fora utilizado a máquina virtual ( Vitual Box 6.1 da Oracle ) para poder simular Raspberry Pi, instalando a imagem do Raspbian (x86) que é um sistema operacional gratuito baseado no Debian otimizado para o hardware Raspberry Pi.
![image](https://user-images.githubusercontent.com/43974566/79157620-4a70af80-7dab-11ea-8846-01b8e982bc96.png)

## Atividades desenvolvidas 
- Criação de script em C para gerar dados aleatórios;
- Script para plotagem no GNUPlot;

## Gerador de dados
- É um processo que gera sinais de onda para o programa GNU plot como pode consumir e então plotar a onda, podendo ser considerado como um produtor que gera dados a todo instante em um loop infinito. Esses dados gerados são enviados para o arquivo criado e denominado "BaseDeDados.txt", que será utilizado no script do GNUplot.

  ![image](https://user-images.githubusercontent.com/43974566/79157811-9facc100-7dab-11ea-9730-9a6f232fde88.png)

## GNU plot persistente
- Este processo é responsável por abrir o GNU plot, carregar o script nele e se manter de forma persistente consumindo os dados gerados no arquivo de texto, para então gerar as ondas no programa.
![image](https://user-images.githubusercontent.com/43974566/79157875-bd7a2600-7dab-11ea-9f00-fd300c6b0674.png)

## Como executar 
- Compila e executa o arquivo gerador de dados
![gerador](https://user-images.githubusercontent.com/43974566/79157156-75a6cf00-7daa-11ea-87f6-fc8a1d10a572.jpg)
-Manter o arquivo "script.gnu" na mesma pasta dos demais
- Compila e executa o arquivo de chamada para o GNUPlot
bash
![image](https://user-images.githubusercontent.com/43974566/79157228-9bcc6f00-7daa-11ea-9543-38dfec610cd4.png)

## Resultado
- gráfico gerado após aproximadamente 50 segundos:
![pbl3](https://user-images.githubusercontent.com/43974566/79156193-d208ef00-7da8-11ea-96ed-a3811a5ff2d0.jpg)
