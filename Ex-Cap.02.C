#define ex10
#include <stdio.h>

#ifdef ex1
main()
{
    int a,div=0;
    float m=0;
    while (a>=0)
    {
        printf("Insira um valor: ");
        scanf("%d", &a);
        m=m+a;
        div++;
    }
    if (a<0)
    {
        printf("A media eh: %g ",m/div);
    }
}
#endif // ex1

#ifdef ex2
main()
{
   int a=50;
   int b=0;
   int max=100;
   int min=1;
   char x;
   printf("PENSE EM UM VALOR DE 1 A 99!\n");
   do
   {
       if(b!=1)
   {
     printf("Seu numero eh esse: %d ?",a);
     scanf("%c", &x);
     if(x=='>')
     {
        min=a;
        a=((max+a)/2);
     }
     else if(x=='<')
     {
        max=a;
        a=((min+a)/2);
     }
     else if(x=='=')
     {
        printf("acertei");
        b=1;
     }
   }
   }while (b!=1);
}
#endif // ex2

#ifdef ex3
main()
{
   int a=50;
   int b=0;
   int max=100;
   int min=1;
   char x;
   printf("PENSE EM UM VALOR DE 1 A 99!\n");
   do
   {
       if(b!=1)
   {
     printf("Seu numero eh esse: %d ?",a);
     scanf("%c", &x);
     switch(x)
     {
     case '>':
        {
        min=a;
        a=((max+a)/2);
        break;
        }
        case '<':
        {
        max=a;
        a=((min+a)/2);
        break;
        }
        case '=':
        {
        printf("acertei");
        b=1;
        }
     }
}
   }while (b!=1);
}
#endif // ex3

#ifdef ex4
main()
{
 float hi,mi,si,hf,mf,sf;
 float inicio,fim,total;
 do
 {
     printf("Insira a hora inicial:");
     scanf("%g",&hi);
 }while(hi<0 || hi>=24);
 do
 {
     printf("Insira o minuto inicial:");
     scanf("%g",&mi);
 }while(mi<0 || mi>=60);
 do
 {
     printf("Insira o segundo inicial:");
     scanf("%g",&si);
 }while(si<0 || si>=60);
 do
 {
     printf("Insira a hora final:");
     scanf("%g",&hf);
 }while(hf<0 || hf>=24);
 do
 {
     printf("Insira o minuto final:");
     scanf("%g",&mf);
 }while(mf<0 || mf>=60);
 do
 {
     printf("Insira o segundo final:");
     scanf("%g",&sf);
 }while(sf<0 || sf>=60);

 inicio=(hi+(mi/60)+(si/3600));
 fim=(hf+(mf/60)+(sf/3600));
 total=fim-inicio;

 printf("Ligacao em horas: %f\n", total);
 printf("Ligacao em minutos: %f\n", total*60);
 printf("Ligacao em segundos: %f\n", total*3600);
}
#endif // ex4

#ifdef ex5

      int main()
        {

            float f,r,n,mod;
            int num,dem;

            printf("digite o numerador: ");
            scanf("%d",&num);

            printf("digite o denominador: ");
            scanf("%d",&dem);

            r=num/dem;
            mod=num%dem;
            f=mod/dem;

             printf("o inteiro eh %.f, o resto eh %f e a parte fracionario eh %f\n",r,mod,f);

            if(f<=0.24)
                {
                 r = r+0.0;
                printf("O numero arrendondado eh:%.1f",r);
                }
                    else if(f>=0.25 && f<=0.74)
                    {
                        r =r+0.5;
                    printf("O numero arrendondado eh:%.2f",r);
                    }
                        else
                        {
                        n=r+1;
                        printf("O numero arrendondado eh:%.f",n);
                        }

        }
        #endif

#ifdef ex10
main()
{
    int a,b;

        printf ("insira a parte inteira do numero: ");
        scanf("%d",&a);
        do{
        printf("insira a parte fracionada: ");
        scanf("%d",&b);
        }while(b>100);
        if(b<=24)
        {
            b=0;
        }
        else if(b>24 && b<=50)
        {
            b=25;
        }
        else if(b>24 && b<=74)
        {
            b=50;
        }
        else if(b>74)
        {
            a=a+1;
        }
        printf("o numero arredondado eh %d%.d",a,b);
}

#endif // ex10

#ifdef ex6 //while
main()
{
    float litros;
    float a1;
    float g1;
    float a=2.55;
    float g=4.35;
    char tipo;

        printf("Insira o tipo de combustivel desajado GASOLINA - G e ALCOOL - A: \n");
        scanf("%c",&tipo);

      printf("Insira a quantidade de litros desajado: \n");
      scanf("%g",&litros);
      if(litros<=20 && tipo=='a')
      {
          a1=(a*litros)-(a*litros*0.03);
          printf("O valor a ser pago eh %g por %g litros de alcool\n",a1,litros);
      }
      else if(litros>20 && tipo=='a')
      {
          a1=(a*litros)-(a*litros*0.05);
          printf("O valor a ser pago eh %g por %g litros de alcool\n",a1,litros);
      }
      else if(litros<=20 && tipo=='g')
      {
          g1=(g*litros)-(g*litros*0.04);
          printf("O valor a ser pago eh %g por %g litros de gasolina\n",g1,litros);
      }
      else if(litros>20 && tipo=='g')
      {
          g1=(g*litros)-(g*litros*0.06);
          printf("O valor a ser pago eh %g por %g litros de gasolina\n",g1,litros);
      }

    }

#endif // ex6

#ifdef ex7
main()
{
    float a,b,c;
    printf("Insira a distancia percorrida em KM: ");
    scanf("%g", &a);
    printf("Insira a quantidade de combustivel gasta em litros: ");
    scanf("%g", &b);
    c=a/b;
    if (c<8)
    {
        printf("VENDA O CARRO!!");
    }
    else if (c>=8 && c<=14)
    {
        printf("ECONOMICO!");
    }
    else if (c>14)
    {
        printf("SUPER ECONOMICO!");
    }

}
#endif // ex7

#ifdef ex8
main()
 {
  float peso;
  float altura;
  float imc;

  do
  {
      printf("Insira seu peso em KG: \n");
      scanf("%g",&peso);
      printf("Insira sua altura em metros: \n");
      scanf("%g",&altura);
  }while(peso<=0 || altura<=0);

    imc=peso/(altura*altura);

    if (imc<18.5)
    {
        printf("Abaixo do peso");
    }
    else if (imc>=18.5 && imc<=24.9)
    {
        printf("saudavel");
    }
    else if (imc>=25 && imc<=29.9)
    {
        printf("peso em excesso");
    }
    else if (imc>=30 && imc<=34.9)
    {
        printf("obesidade grau 1");
    }
    else if (imc>=35 && imc<=39.9)
    {
        printf("obesidade grau 2 (SEVERA)");
    }
    else if (imc>40)
    {
        printf("obesidade grau 3 (MORBIDA)");
    }

}
#endif // ex8
