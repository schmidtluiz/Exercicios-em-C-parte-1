#define ex6
#include <stdio.h>

#ifdef ex1
char v[13]={'b','d','f','h','j','k','m','o','q','s','u','w','y'};

int procura(int variavel){
    int aux=0,i;
    for(i=0;i<13;i++)
        {
        if(v[i]==variavel)
        {
            aux=1;
        }
        }
    return aux;
}
main()
{
    int achou;
    char x;
    printf("Escreva uma letra qlqr: ");
    scanf("%s",&x);
    achou = procura(x);
    if(achou == 1){
        printf("achou!");
    } else{
        printf("nao achou...");
    }
}
#endif // ex1

#ifdef ex2
float soma,mult,div,subt;
float contas (float a,float b)
{
  soma=a+b;
  subt=a-b;
  mult=a*b;
  div=(a/b);

  return (printf("soma: %g  subtracao: %g  multiplicacao: %g  divisao: %.2f",soma,subt,mult,div));
}
main()
{
    float x;
    float y;
    printf("Insira dois numeros inteiros: \n");
    scanf("%g %g",&x,&y);
    contas(x,y);
}
#endif // ex2

#ifdef ex3
int n;
int i=0;
int a;
float soma=0;
float mult=1;
float div=1;
float subt=0;
float contas ()
{
     soma=soma+a;
     subt=subt-a;
     mult=mult*a;
     div=div/a;
    }

main()
{
    printf("Quantos numeros inteiros voce deseja: \n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%d",&a);
        contas();
    }
    printf("soma: %g  subtracao: %g  multiplicacao: %g  divisao: %g",soma,subt,mult,div);
}
#endif // ex3

#ifdef ex4

float contas (float a, float b, char n){
    float result = 0;
    switch(n){
        case '+':{
        result = a+b;
        return result;
        break;
        }
        case '-':{
        result = a-b;
        return result;
        break;
        }
        case '*':{
        result = a*b;
        return result;
        break;
        }
        case '/':{
        result = a/b;
        return result;
        break;
        }
        default:{
        printf("burrao hein...");
        }
    }
}

main()
{
    float a, b;
    char n;
    float resultado=0;
    printf("Qual o primeiro numero: \n");
    scanf("%f",&a);

    printf("Qual a operacao desejada: \n");
    scanf("%s",&n);

    printf("Qual o segundo numero: \n");
    scanf("%f",&b);
    resultado = contas(a,b,n);
    printf("O resultado eh %g", resultado);

}
#endif // ex4

#ifdef ex5
char a[2][10];

int string(){
    int i, aux=1;
    int counta=0; int countb=0;
    for(i=0;i<10;i++)
    {
        if(a[0][i] != '\0'){
            counta++;
        }
        if(a[1][i] != '\0'){
            countb++;
        }

        if(a[0][i] == a[1][i])
        {
        }
        else
        {
            aux=0;
        }
        }

        if(aux != 1 && counta>countb){
            aux=2;
        }else if(aux != 1 && counta<countb){
            aux=3;
        }
    return aux;
}

main()
{
    int variavel;
    printf("insira um string com 10 letras");
    scanf("%s",&a[0]);
    printf("insira um string com 10 letras");
    scanf("%s",&a[1]);

    variavel=string();

    if(variavel==0){
    printf("SAO DIFERENTES");
  } else if (variavel ==1){
    printf("SAO IGUAIS");
  }
  else if (variavel ==2){
    printf("Primeira string maior que a segunda");
}
else if (variavel ==3){
    printf("segunda string maior que a primeira");
}
}

#endif // ex5

#ifdef ex6
int fat(int n)
{
    int i, aux = 1, j=10, k=0, l=0, m=0, soma=0, g;
    g=n;
    for(i=0;i<g;i++){
        aux=aux*n;
        n--;
    }
    printf("%d\n",aux);

    for(i=0;i<20;i++){
       if(aux>j){
           j=j*10;
           k++;
       }
    }
    printf("%d\n",k);

    for(i=0;i<k;i++){
        m=aux;
        l= int(m/(10^k));
                printf("%d\n",l);

        soma=soma+l;
        m= int(m%(10^k));
                printf("%d\n",m);
        k--;
    }
        printf("%d\n",soma);
    return soma;
}
main()
{
    int a;
    int result;
 printf("insira um numero qlqr: ");
 scanf("%d",&a);
 result = fat(a);
 printf("%d",result);
}
#endif // ex6

#ifdef ex7

int exp(int x, int y)
{
    int i, aux;
    aux=x;
    for(i=1;i<y;i++)
    {
        x*=aux;
    }
    return x;
}

int a,b;
main()
{
    int resultado;
    printf("Escreva um numero qlqr: ");
    scanf("%d",&a);
    printf("Escreva um numero qlqr: ");
    scanf("%d",&b);
    resultado = exp(a,b);

    printf("o resultado da exponenciacao eh %d", resultado);
}
#endif // ex7

#ifdef ex8
int ver1(int x, int y)
{
    if(x<0 && y<0)
    {
        return 1;
    }
    else if(x>0 && y>0)
    {
        return 0;
    }
    else{
        return -1;
    }

}
int ver2(int x, int y)
{
    int aux, z,i, soma=0;
    if(x>0 && y>0)
    {
        aux=x-y;
        if(aux>0)
        {
            for(i=y+1;i<x;i++)
            {
                soma=soma+i;
            }
        }
        if(aux<0)
        {
            for(i=x+1;i<y;i++)
            {
                soma=soma+i;
            }
        }


    }
    return soma;
}
int ver3(int x, int y)
{
    int aux, z,i, soma=1;
    if(x>0 && y>0)
    {
        aux=x-y;
        if(aux>0)
        {
            for(i=y+1;i<x;i++)
            {
                soma=soma*i;
            }
        }
        if(aux<0)
        {
            for(i=x+1;i<y;i++)
            {
                soma=soma*i;
            }
        }


    }
    return soma;
}
int a,b, resultado;
main()
{
 printf("Insira um numero qlqr: ");
 scanf("%d",&a);
 printf("Insira um numero qlqr: ");
 scanf("%d",&b);
 resultado = ver3(a,b);
 printf("soma dos numeros entre x e y: %d", resultado);

}
#endif // ex8

