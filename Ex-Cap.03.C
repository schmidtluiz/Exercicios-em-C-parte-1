#define ex10
#include <stdio.h>

#ifdef ex1
main()
{
int a,b,x,y,w,z;
printf("Insira um valor inteiro: ");
scanf("%d",&a);
printf("Insira outro valor inteiro: ");
scanf("%d",&b);
x=a+b;
y=a-b;
w=a*b;
z=a/b;
printf("Adicao: %d Subtracao: %d Multiplicacao: %d Divisao: %d",x,y,w,z);
}
#endif // ex1

#ifdef ex2
main()
{
 int a,b;
 printf("Insira um valor inteiro: ");
 scanf("%d",&a);
 printf("Insira outro valor inteiro: ");
 scanf("%d", &b);
 printf("Adicao: %d Subtracao: %d Multiplicacao: %d Divisao: %d",a+=b,a-=b,a*=b,a/=b);
}
#endif // ex2

#ifdef ex3
main()
{
 float a,b;
 printf("Insira um valor: ");
 scanf("%f",&a);
 printf("Insira outro valor: ");
 scanf("%f", &b);
 printf("Adicao: %f Subtracao: %f Multiplicacao: %f Divisao: %f",a+=b,a-=b,a*=b,a/=b);
}
#endif // ex3

#ifdef ex4
main()
{
 int a,b;
 printf("Insira um numero inteiro: ");
 scanf("%d",&a);
 printf("Insira outro numero inteiro: ");
 scanf("%d",&b);
 printf("DECIMAL AND: %3d OU: %3d OU EXCLUSIVO: %3d \n",a&b,a|b,a^b);
 printf("HEXADECIMAL AND: 0x%x OU: 0x%x OU EXCLUSIVO: 0x%x",a&b,a|b,a^b);
}
#endif // ex4

#ifdef ex5
main()
{
int a;
printf("Insira um valor: ");
scanf("%d",&a);
printf("multiplicacao: %d divisao: %d", a<<3, a>>3);


}
#endif // ex5

#ifdef ex6
main ()
{
 int a,b;
 printf("Insira um numero inteiro: ");
 scanf("%d",&a);
 printf("Insira outro numero inteiro: ");
 scanf("%d", &b);
 printf("O resultado da relacao a>=120 && b<240 eh: %d \n",a>=120 && b<240);
 printf("O resultado da relacao a!=60 || b==120 eh: %d \n",a!=60 || b==120);
 printf("O resultado da relacao (a*25)==100 && (b+10)>=100 eh: %d \n",(a*25)==100 && (b+10)>=100);
 printf("O resultado da relacao ((a+300)/5)>=100 || (b-200)<=200 eh: %d \n",((a+300)/5)>=100 || (b-200)<=200);
}
#endif // ex6

#ifdef ex7
main ()
{
    int a;
    float c, f, k;
 printf("Opcao 1 - Transformar graus Celsius em Fahrenheit e Kelvin\n");
 printf("Opcao 2 - Transforma graus Fahrenheit e Celsius e Kelvin\n");
 printf("Opcao 3 - Transforma graus Kelvin e Celsius e Fahrenheit\n");
 printf("Qual opcao deseja realizar? ");
 scanf("%d", &a);
 if (a==1)
 {
     printf("Insira a temperatura em celsius: ");
     scanf("%g",&c);
     f=((9*c)/5)+32;
     k=(c+273);
     printf("Temperatura em Fahrenheit eh %g e em Kelvin %g",f,k);
 }
 if (a==2)
 {
     printf("Insira a temperatura em Fahrenheit: ");
     scanf("%g",&f);
     c=((f-32)/9)*5;
     k=((((f-32)/9)*5)+273);
     printf("Temperatura em celsius eh %g e em Kelvin %g",c,k);
 }
 if (a==3)
 {
     printf("Insira a temperatura em kelvin: ");
     scanf("%g",&k);
     c=k-273;
     f=((((k-273)/5)*9)+32);
     printf("Temperatura em Celsius eh %g e em Fahrenheit %g",c,f);
 }
}
#endif // ex7

#ifdef ex8
main ()
{
    int a,b,c,d,e,f,g,h,i;
    do
    {
    printf("Insira o ano do seu nascimento: ");
    scanf("%d",&a);
    do{
    printf("Insira o mes do seu nascimento: ");
    scanf("%d",&b);
    }while(b<1 || b>12);
    do{
    printf("Insira o dia do seu nascimento: ");
    scanf("%d",&c);
    }while(c<1 || c>31);
    printf("Insira o ano atual: ");
    scanf("%d",&d);
    do{
    printf("Insira o mes atual: ");
    scanf("%d",&e);
    }while(e<1 || e>12);
    do{
    printf("Insira o dia atual: ");
    scanf("%d",&f);
    }while(f<1 || f>31);
    }while(d<a);
    g=d-a;
    h=e-b;
    if(h<0)
    {
        g--;
        h=12+h;
    }
    i=f-c;
    if(i<0)
    {
        h--;
        i=30+i;
    }
    printf("O ano, mes e dia sao respectivamente: %d %d %d",g ,h, i);

}
#endif // ex8

#ifdef ex9
main()
{
int Dia, Mes, Ano, DiasDoAno, Dias31, AnosBiss;
long int Anos, NumDias;
  do{
  printf("Digite o dia: \n" );
  scanf ( "%d", &Dia);
  }while(Dia<1 || Dia>31);
  do{
  printf("Digite o mes: \n" );
  scanf ( "%d",&Mes);
  }while (Mes<1 || Mes>12);
  printf("Digite o ano: \n" );
  scanf ( "%d",&Ano );
  Anos = Ano - 1600;

  if ( Mes < 9 )
      Dias31 = Mes / 2;
  else
      Dias31 = ( Mes + 1 ) / 2;

  DiasDoAno = 30 * ( Mes - 1 ) + Dia + Dias31;

  if ( Mes >= 2 )
    if ( ( Ano % 4 != 0 ) || ( ( Ano % 100 == 0 ) && ( Ano % 400 != 0 ) ) ) /*aqui faltava o if */
      DiasDoAno = DiasDoAno - 2;
  else
      DiasDoAno = DiasDoAno - 1;

  AnosBiss = Ano / 4 - 400 - ( Ano / 100 - 16 ) + ( Ano / 400 - 4 ) + 1;

  if ( Ano == 1600 )
      NumDias = DiasDoAno;
  else
      NumDias = Anos * 365 + DiasDoAno + AnosBiss;

  switch ( NumDias % 7 )
      {
      case 1 : printf ( "\n Sabado." ); break;
      case 2 : printf ( "\n Domingo." ); break;
      case 3 : printf ( "\n Segunda." ); break;
      case 4 : printf ( "\n Terca." ); break;
      case 5 : printf ( "\n Quarta." ); break;
      case 6 : printf ( "\n Quinta." ); break;
      case 7 : printf ( "\n Sexta." ); break;
      }
}
#endif // ex9

#ifdef ex10
main ()
{
    float a,c;
    char b;
 printf("Insira o valor do produto: ");
 scanf("%g", &a);
 printf("Insira o estado: ");
 scanf("%s", &b);
 if (b=='mg')
 {
     c=(a*0.07);
 }
 else if (b=='sp')
 {
     c=(a*0.12);
 }
 else if (b=='rj')
 {
     c=(a*0.15);
 }
 else if (b=='ms' )
 {
     c=(a*0.09);
 }
 printf("o preco final eh %g",c);
}
#endif // ex10
