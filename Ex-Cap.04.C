#define ex8
#include <stdio.h>

#ifdef ex1

int a[3];
float b[3];
long c[3];
double d[3];
unsigned e[3];
int x=0;

main()
{
    for(x=0;x<3;x++)
    {
        printf("Insira 3 int:");
        scanf("%d",&a[x]);
    }
    for(x=0;x<3;x++)
    {
        printf("Insira 3 float:");
        scanf("%f",&b[x]);
    }
    for(x=0;x<3;x++)
    {
        printf("Insira 3 long:");
        scanf("%ld",&c[x]);
    }
    for(x=0;x<3;x++)
    {
        printf("Insira 3 double:");
        scanf("%lf",&d[x]);
    }
    for(x=0;x<3;x++)
    {
        printf("Insira 3 unsigned:");
        scanf("%u",&e[x]);
    }
    printf("        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");
    printf("  %-6d              %-10ld          %-5u\n", a[0],c[0],e[0]);
    printf("            %-8.1f            %-8.1lf\n", b[0],d[0]);
    printf("  %-6d              %-10ld          %-5u\n", a[1],c[1],e[1]);
    printf("            %-8.1f            %-8.1lf\n", b[1],d[1]);
    printf("  %-6d              %-10ld          %-5u\n", a[2],c[2],e[2]);
    printf("            %-8.1f            %-8.1lf\n", b[2],d[2]);

}
#endif // ex1

#ifdef ex2
int v[10];
int x=0;
main()
{
    for(x=0;x<10;x++)
    {
        printf("Insira um numero inteiro: ");
        scanf ("%d",&v[x]);
    }
    if(v[0]== v[9] && v[1]== v[8] && v[2]== v[7] && v[3]== v[6] && v[4]== v[5])
    {
        printf("EH PALINDROMO");
    }
    else
    {
        printf("NAO EH PALINDROMO");
    }
}
#endif // ex2


#ifdef ex3
int v[2][3][3]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int i,j,k;
main(){
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("insira um valor:");
                scanf("%d",&v[i][j][k]);
            }
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d",v[i][j][k]);
            }
        }
    }



}
#endif // ex3

#ifdef ex4
main()
{
   int a[2][3];
   int b[2][3];
   float c[2][3];
   int i,j;
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("insira um valor para vetor 1: ");
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("insira um valor para vetor 2: ");
           scanf("%d",&b[i][j]);
       }
   }
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
         c[i][j]=a[i][j]*b[i][j];
       }
   }
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("valores %d %d, indices %d %d\n",a[i][j], b[i][j],i,j);
       }
   }
   printf("resultado da multiplicacao: \n");
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%g ", c[i][j]);
       }
       printf("\n");
   }
}
#endif // ex4

#ifdef ex5
main()
{
 int n;

 printf("insira a quantidade de numeros neste vetor: ");
 scanf("%d",&n);
 int a[n];
 int i;

 for(i=0;i<n;i++)
 {
   printf("Insira um valor: ");
   scanf("%d", &a[i]);
 }
 printf("O vetor par eh: ");
 for(i=0;i<n;i++)
 {
 if(i==0 || i%2==0)
 {
     printf("%d ",a[i]);
 }
 }
 printf("\nO vetor impar eh: ");
 for(i=0;i<n;i++)
 {
    if(i%2==1)
 {
     printf("%d ",a[i]);
 }
 }
}
#endif // ex5

#ifdef ex6
main()
{
 int n;

 printf("insira a quantidade de numeros neste vetor: ");
 scanf("%d",&n);
 int a[n];
 int i;

 for(i=0;i<n;i++)
 {
   printf("Insira um valor: ");
   scanf("%d", &a[i]);
 }
 printf("O vetor par eh: ");
 for(i=0;i<n;i++)
 {
 if(a[i]==0 || a[i]%2==0)
 {
     printf("%d ",a[i]);
 }
 }
 printf("\nO vetor impar eh: ");
 for(i=0;i<n;i++)
 {
    if(a[i]%2==1)
 {
     printf("%d ",a[i]);
 }
 }
}
#endif // ex6

#ifdef ex7
main()
{
    int n;

    printf("insira a quantidade de numeros neste vetor: ");
    scanf("%d",&n);
    int a[n];
    int i, j, b;
    for (i = 0; i<n; i++)
    {
        printf("Digite um numero:");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n; i++)
    for(j=i+1;j<n;j++)
    {
        if (a[i]>a[j])
        {
            b=a[i];
            a[i]=a[j];
            a[j]=b;
        }
    }

printf("Vetor em ordem crescente: \n");
for(i=0;i<n;i++)
printf(" %d",a[i]);

}

#endif // ex7

#ifdef ex8
main()
{
  int a[5][5];
  int i,j,b;
  for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           printf("insira um valor: ");
           scanf("%d",&a[i][j]);
       }
   }
   printf("Insira o valor a ser procurado: ");
   scanf("%d",&b);
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           if(b==a[i][j])
           {
            printf("O numero esta na posicao: Linha %d e coluna %d\n",i,j);
           }
       }
   }
   if(b!=(a[i][j]))
   {
       printf("o numero nao foi encontrado");
   }



}
#endif // ex8
