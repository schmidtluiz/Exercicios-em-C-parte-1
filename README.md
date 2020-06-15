# Exercicios-em-C-parte-1

## Cap.01 - Tipos de variaveis simples

* 1 - Escreva um programa e inicialize as variaveis do tipo char, int, short,
    long, unsigned(char, int, short, long), float e double com seus valores
    limites e imprima-os no video. Utilize variaveis globais para os valores
    positivos e locais para os negativos.

* 2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:
    
              10        20        30        40        50        60
      12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char 

* 3 - Acrescente ao exercicio anterior mais uma linha. Receba via teclado os valores
    sem sinal char, int e long int e escrevendo nas coluna 10, 30 e 50.

* 4 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.

* 5 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este 
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via 
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.
   

* 6 - Escreva um programa que receba via teclado um tempo em segundos e converta um
    para horas, minutos e segundos. 
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.

* 7 - Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar
    outro número formado pelos dígitos invertidos do número lido.
    Ex:   NúmeroLido = 123
        NúmeroGerado = 321

* 8 - Escreva um program que lê um valor em reais e calcula qual o menor número 
    possível de notas de $100, $50, $10 e $1 em que o valor lido pode ser 
    decomposto. Imprimir o valor lido e a relação de notas necessárias.
---


## Cap.02 - Comandos

* 1 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores digitados.

* 2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =,> ou < a cada pergunta. Utilize o
    comando if-else.

* 3 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.

* 4 - De um modo geral, as ligações telefônicas são cobradas pelas suas durações.
    O sistema registra os instantes em que a ligação foi iniciada e concluída.
    Escreva um programa que recebe os dois instantes dados em horas, minutos e
    segundo e determina o intervalo de tempo (em horas, minutos e segundos) 
    decorrido entre eles.

* 5 - Escreva um programa que realize arredondamentos de números utilizando a
    seguinte regra:
    - se a parte fracionaria for menor ou igual a 0,24 o n. e' arredonda para 0
    - se a parte fracionaria for maior ou igual a 0,25 e menor ou igual a 0,74 
      o numero e' arredondado para 0,5
    - se a parte fracionaria for maior ou igual a 0,75 o numero e' arredondado
      para o inteiro imediatamente superior

* 6 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
     1. Álcool.
         - até 20 litros, desconto de 3% por litro
         - acima de 20 litros, desconto de 5% por litro
     2. Gasolina.
          - até 20 litros, desconto de 4% por litro
          - acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o número de litros vendidos e o tipo de
     combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da 
     gasolina é R$ 3,88 e o preço do litro do álcool é R$ 3,18.

* 7 - Leia a distancia em Km e a quantidade de litros de gasolina consumidos
    por um carro em um percurso, calcule o consumo em Km/l e escreva uma
    mensagem de acordo com a tabela abaixo:
    * **CONSUMO (Km/l) MENSAGEM.**
    * menor que 8    Venda o carro!
    * entre 8 e 14   Economico!
    * maior que 14   Super economico!

* 8 - Escreva um programa que calcule o IMC de uma pessoa e mostre sua classificacao
    conforme tabela abaixo:
    
       IMC             Classificacao.
       18,5            Abaixo do Peso
       18,6 - 24,9     Saudavel
       25,0 - 29,9     Peso em excesso
       30,0 - 34,9     Obesidade Grau 1
       35,0 - 39,9     Obesidade Grau 2
       40,0            Obesidade Grau 3
       
---


## Cap.03 - Operadores

**OBS.: Faça um loop infinito e defina uma saida em todos os exercícios.**

* 1 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.
   
* 2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta.

* 3 - Reescreva o exercicio anterior utilizando numeros float. 

* 4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.

* 5 - Escreva um programa que receba um numero inteiro via teclado, divida-o
    por 8 e multiplique-o por 8 utilizando os operadores de deslocamento.
    Imprima no video o numero recebido e os resultados obtidos.

* 6 - Receba 2 numeros inteiros via teclado. Compare utilizando as expressoes
    abaixo. Imprima no video o resultado (se verdadeiro = 1 se falso = 0)
    a e b e' recebido via teclado para cada expressao:
    
         a >= 120 && b < 240    
         a != 60  || b == 120
        (a*25) == 100 && (b+10) >= 100
        ((a + 300)/5) >= 100 || (b - 200) <= 200

* 7 - Escreva um programa que tenha o menu abaixo. F

       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit e Celsius e Kelvin
       3 - transforma graus Kelvin e Celsius e Fahrenheit

* 8 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mês e ano) do seu nascimento e a 
    data (dia, mês e ano) atual.Verifique se a data atual e' anterior a data de
    nascimento.

* 9 - Escreva um programa para determinar o dia da semana de uma determinada 
    data (dia, mes e ano).

* 10 - Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
     possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; 
     MS 8%). Escreva um programa em que o usuario entre com o valor do produto e o
     estado destino do produto. O programa deve mostrar o preco final do produto 
     acrescido do imposto do estado em que ele sera vendido. Se o estado digitado
     nao for valido, mostrar uma mensagem de erro. 
---

## Cap.04 - Vetores Numericos

**OBS.: Todos os programa devem ser finalizados pelo usuario.**

 * 1 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

               10        20        30        40        50
       12345678901234567890123456789012345678901234567890 
       int                 long                unsigned
                float               double
       int                 long                unsigned
                float               double
       int                 long                unsigned
                float               double

* 2 - Um vetor é palíndromo se ele não se altera quando as posições dos componentes
    são invertidos. Por exemplo, o vetor v = {1, 3, 5, 2, 2, 5, 3, 1} é palíndromo.
    Escreva um programa que verifique se um vetor é palíndromo. Receba o vetor 
    via teclado (tamanho 10)

* 3 - Escreva um programa declarando um vetor multidimensional de 2x3x3 de n.
    inteiros e inicialize-o com "0". Receba via teclado novos valores para
    todos os elementos do vetor e imprima no video estes novos conteudos.

* 4 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    multiplicacao "*", multiplique os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores.

* 5 - Escreva um programa que receba um vetor e o decomponha em dois outros vetores, 
    um contendo as componentes de ordem ímpar e o outro contendo as componentes 
    de ordem par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7},
    o programa deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}. 

* 6 - Escreva um programa que decomponha um vetor de inteiros em dois outros vetores,
    um contendo as componentes de valor ímpar e o outro contendo as componentes de
    valor par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2}. 

* 7 - Receba via teclado dez valores numericos e ordene por ordem crescente estes
    valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. 
    Mostre ao final os valores em ordem.

* 8 - Leia uma matriz 5 x 5. Leia tambem um valor X. O programa dever fazer a busca
    desse valor na matriz e, ao final escrever a localizacao (linha e coluna) ou 
    uma mensagem de ”nao encontrado”.
---

## Cap.05 - Matrizes

**OBS.: Todos os programa devem ser finalizados pelo usuario.**

 * 1 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:

               10        20        30        40        50
       12345678901234567890123456789012345678901234567890
       nome1                                   nome5
                nome2               nome4
                          nome3

 * 2 - Escreva um programa para receber 3 strings de ate 10 caracteres cada via
    teclado e imprima-as no video no seguinte formato:
    (utilize vetores multidimensionais)

               10        20        30        40        50        60
       123456789012345678901234567890123456789012345678901234567890
        string1             string2             string3

* 3 - Receba 2 string de ate 10 caracteres via teclado, compare-as mostrando como
    resultado se são IGUAIS ou DIFERENTES.

* 4 - Leia uma string (3 caracteres) via teclado que pode assumir os valores seg, 
    ter, qua, qui, sex, sab, dom, e imprima as seguintes mensagens, respectivamente:
    segunda-feira, terca-feira, quarta-feira, quinta-feira, sexta-feira, sabado e
    domingo. Utilize o comando switch - case.

* 5 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres 
    para letras maiusculas. 

* 6 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres 
    para letras minusculas.

* 7 - Faca um programa que leia uma palavra (maximo de 50 letras) e some 1 no valor 
    ASCII de cada caractere da palavra. Na sua funcao main(), imprima a string 
    resultante.

* 8 - Escreva um programa que calcula o comprimento de uma string recebida via 
    teclado.
---

## Cap.06 - Funções

**OBS.: Todos os programa devem ser finalizados pelo usuario.**

* 1 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra 
    digitada.(utilize o comando return)

    * vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y

* 2 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main().

* 3 - Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.

* 4 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch).

* 5 - Escreva um programa que receba na funcao main() 2 strings de ate' 10 caracteres.
    Escreva uma funcao que compare estas 2 strings e retorne se sao IGUAIS 1 ou 
    DIFERENTES 0. Se forem DIFERENTES, retorne 2 se a 1. string for maior que a 2.
    e 3 se a 2. string for maior que a 1.. Declare as strings como variavel global.  

* 6 - Escreva um programa que receba um numero N. Escreva uma função que 
    retorne a soma dos algarismos de N!.     
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos ´e 2 + 4 = 6.

* 7 - Escreva um programa que recebe 2 valores X e Z na função main(). Escreva uma 
    função que receba por parametro os 2 valores X e Z, calcule e retorne o 
    resultado de X exponencial Z para o programa principal. 
    ATENCAO: nao utilize nenhuma funcao pronta de exponenciacao.

* 8 - Faça um programa receba dois números inteiros e execute as seguintes funções:
    - Verificar se o número digitado é positivo ou negativo. Sendo que o valor de 
      retorno será 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 números são positivos, retorne a soma dos N números existentes entre 
      eles.
    - Se os 2 números são negativos, retorne a multiplicação dos N números existente
      entre eles.

---
