#define ex8
#include <stdio.h>

#ifdef ex1
char a = '127';
short int b = 32767;
long int c= 2147483647;
unsigned char d = '255';
unsigned short int e= 65535;
unsigned int f= 65535;
unsigned long int g= 4294967295;
float h='3.4E+38';
double i='1.7E+308';


int main()
{
    char na = '-127';
    short int nb = -32768;
    long int nc= -2147483648;
    unsigned char nd = '0';
    unsigned short int ne= 0;
    unsigned int nf= 0;
    unsigned long int ng= 0;
    float nh='-3.4E+38';
    double ni='-1.7E+308';


        printf("\t\t****MAIORES VALORES****\t\t\n\n");
        printf("\tMaior valor tipo Char:              %c\n",a);
        printf("\tMaior valor short int:              %hd\n",b);
        printf("\tMaior valor long int:               %ld\n",c);
        printf("\tMaior valor unsigned char:          %u%c\n",d);
        printf("\tMaior valor unsigned short int:     %hu\n",e);
        printf("\tMaior valor unsigned int:           %u\n",f);
        printf("\tMaior valor long int:               %ul\n",g);
        printf("\tMaior valor float:                  %f\n",h);
        printf("\tMaior valor double:                 %lf\n\n",i);

        printf("\t\t****MENORES VALORES****\t\t\n\n");
        printf("\tMenor valor tipo Char:              %c\n",na);
        printf("\tMenor valor short int:              %hd\n",nb);
        printf("\tMenor valor long int:               %ld\n",nc);
        printf("\tMenor valor unsigned char:          %u%c\n",nd);
        printf("\tMenor valor unsigned short int:     %hu\n",ne);
        printf("\tMenor valor unsigned int:           %u\n",nf);
        printf("\tMenor valor long int:               %u\n",ng);
        printf("\tMenor valor float:                  %f\n",nh);
        printf("\tMenor valor double:                 %lf\n\n",ni);

}
#endif

#ifdef ex2

    main()
    {
    short a;
    long b;
    int c;
    float d;
    double e;
    char f;
        printf("Insira um numero short: ");
        scanf("%hd",&a);
        printf("Insira um numero long: ");
        scanf("%ld",&b);
        printf("Insira um numero int: ");
        scanf("%d",&c);
        printf("Insira um numero float: ");
        scanf("%f",&d);
        printf("Insira um numero double: ");
        scanf("%lf",&e);
        printf("Insira um caracter char: ");
        scanf("%s",&f);


        printf("        10        20        30        40        50        60\n");
        printf("12345678901234567890123456789012345678901234567890123456789012345\n");
        printf("    %-6hd              %-10ld          %-6d\n",a,b,c);
        printf("              %-8.1f            %-8.1lf            %-3c\n",d,e,f);

    }

    #endif

    #ifdef ex3
        main()
    {
    short a;
    long b;
    int c,h;
    float d;
    double e;
    char f;
    unsigned char g;
    long int i;

        printf("Insira um numero short: ");
        scanf("%hd",&a);
        printf("Insira um numero long: ");
        scanf("%ld",&b);
        printf("Insira um numero int: ");
        scanf("%d",&c);
        printf("Insira um numero float: ");
        scanf("%f",&d);
        printf("Insira um numero double: ");
        scanf("%lf",&e);
        printf("Insira um caracter char: ");
        scanf("%s",&f);
        printf("Insira um char sem sinal: ");
        scanf("%s",&g);
        printf("Insira um numero int: ");
        scanf("%d",&h);
        printf("Insira um numero long int: ");
        scanf("%ld",&i);


        printf("        10        20        30        40        50        60\n");
        printf("12345678901234567890123456789012345678901234567890123456789012345\n");
        printf("    %-6hd              %-10ld          %-6d\n",a,b,c);
        printf("              %-8.1f            %-8.1lf            %-3c\n",d,e,f);
        printf("         %-3c                 %-6d              %-10ld\n",g,h,i);

    }
    #endif // ex3

    #ifdef ex4
    main()
{
    int a;
    int b;

    printf("entre com a primeira variavel: \n");
    scanf("%d",&a);
    printf("entre com a segunda variavel: \n");
    scanf("%d",&b);

    printf("%d%d\n",a,b);
    printf("%d%d\n",b,a);

}
    #endif // ex4

    #ifdef ex5

    main()
{
    int a,b,c;

    printf("entre com o inteiro:");
    scanf("%d",&a);
    printf("entre com o limite: ");
    scanf("%d",&b);

        c=b;

        do{
        b=b+1;
        }while(b%a!=0);


     printf("menor multipo de %d maior que %d e': %d",a,c,b);

}
#endif

#ifdef ex6
main()
{
    int t;
    int h;
    int m;
    int s;

        printf("entre com o tempo em segundos: ");
        scanf("%d",&t);

        h = t/3600;
        m = (t%3600)/60;
        s = (t%3600)%60;

        printf("%d segundos equivale a %d hora(s),%d minuto(s),%d segundo(s)", t,h,m,s);
}
#endif // ex6

#ifdef ex7
main()
{
    int a,a1,a2,a3;

        printf("entre com um valor de 3 digitos: ");
        scanf("%d",&a);

        a1 = a%10;
        a2 = (a%100)/10;
        a3 = (a%1000)/100;

        printf("o valor invertido e': %d%d%d",a1,a2,a3);

}
#endif // ex7

#ifdef ex8
main()
{
  	int din;
	int cem;
	int cinquenta;
	int dez;
	int um;

	printf("Insira um valor: ");
	scanf("%d",&din);

	cem=din/100;
	cinquenta=(din%100)/50;
	dez=((din%100)%50)/10;
	um=(((din%100)%50)%10);

	printf("%d notas de cem.\n%d notas de cinquenta.\n%d notas de dez.\n%d notas de um.",cem,cinquenta,dez,um);
}
#endif // ex8


