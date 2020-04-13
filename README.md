# Problema 03 de Sistemas Digitais
A ideia do projeto é criar um programa para plotagem de gráfico em tempo real, pegando dados simulados que seriam adquiridos do ADS1115,
no entanto devido a algumas adversidades, tais dados passaram a ser gerado por um arquivo, simulando os sinais que seriam adquiridos no ADS1115.

## Objetivos 
- Realizar comunicação interprocessos;
- Plotar gráfico em tempo real;
- Aprender utilizar recursos do SO, por exemplo, o pipe.

## Ambiente de Desenvolvimento
- Foi utilizado a máquina virtual [Vitual Box 6.1](https://www.virtualbox.org/) da Oracle para poder simular Raspberry Pi, instalando a imagem do [Raspbian x86](https://downloads.raspberrypi.org/rpd_x86/images/rpd_x86-2020-02-14/) que é um sistema operacional gratuito baseado no Debian otimizado para o hardware Raspberry Pi.
![image](https://user-images.githubusercontent.com/43974566/79157620-4a70af80-7dab-11ea-8846-01b8e982bc96.png)

## Atividades desenvolvidas 
- Criação do script do produtor em C para gerar dados utilizando a biblioteca math.h;
- Criação do script do consumidor em C com o pipe;
- Script para plotagem no GNUPlot para personalização do gráfico e plotar em tempo real.

## Gerador de dados (Produtor)
- O [GeradorDeDados](https://github.com/gsmalves/PBL3-SD/blob/master/geradorDeDados.c)(produtor) é utilizado para fornecer os dados que seriam advindos do ADS1115,  para assim o [GNUPlot](http://www.gnuplot.info/) (consumidor)  plotar a onda. Ele pode ser considerado como um produtor que gera dados a cada segundo. Esses dados gerados são enviados para o arquivo criado, nomeado como "BaseDeDados.txt", que será utilizado no script do GNU plot para que haja o ajuste de curva relativo aos dados produzidos.

## GNU plot persistente (Consumidor)
- O processo [PBL3](https://github.com/gsmalves/PBL3-SD/blob/master/PBL3.c) é responsável por abrir o GNU plot, carregar o script nele e se manter de forma persistente consumindo os dados gerados no arquivo de texto, para então gerar as ondas no programa.

## Como executar 
- Mantenha todos os arquivos na mesma pasta;
- Compile e execute o arquivo gerador de dados com os seguintes comandos:
``` 
bash
$ gcc geradorDeDados.c -o geradorDeDados -lm
$ ./geradorDeDados
```

- Compile e execute o arquivo de chamada para o GNUPlot com os seguintes comandos:
```
bash
$ gcc PBL3.c -o pbl
$ ./pbl
```

## Resultado
- gráfico gerado após aproximadamente 50 segundos:
![pbl3](https://user-images.githubusercontent.com/43974566/79156193-d208ef00-7da8-11ea-96ed-a3811a5ff2d0.jpg)
