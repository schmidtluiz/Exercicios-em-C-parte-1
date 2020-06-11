#define ex6
#include <stdio.h>

#ifdef ex1
main()
{
    char a[5][7];
    char x;

    printf("Insira um nome com ate 7 caracteres: ");
    scanf("%s",&a[0]);
    printf("Insira um nome com ate 7 caracteres: ");
    scanf("%s",&a[1]);
    printf("Insira um nome com ate 7 caracteres: ");
    scanf("%s",&a[2]);
    printf("Insira um nome com ate 7 caracteres: ");
    scanf("%s",&a[3]);
    printf("Insira um nome com ate 7 caracteres: ");
    scanf("%s",&a[4]);

    printf("        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");
    printf("  %-7s                                 %-7s\n",a[0],a[4]);
    printf("            %-7s             %-7s\n",a[1],a[3]);
    printf("                      %-7s\n",a[2]);
    printf("deseja continuar? [s ou n]");
    scanf("%s",&x);
    if(x=='s')
    {
        main();
    }
}
#endif // ex1

#ifdef ex2
main ()
{
char a[3][10];
printf("Insira uma string com 10 letras: ");
scanf("%s",&a[0]);
printf("Insira uma string com 10 letras: ");
scanf("%s",&a[1]);
printf("Insira uma string com 10 letras: ");
scanf("%s",&a[2]);
printf("        10        20        30        40        50\n");
printf("12345678901234567890123456789012345678901234567890\n");
printf("    %-10s          %-10s          %-10s\n",a[0],a[1],a[2]);
}
#endif // ex2

#ifdef ex3
main()
{
  int i, aux=1;
  char a[2][10];
  printf("insira um string com 10 letras:");
  scanf("%s",&a[0]);
  printf("insira um string com 10 letras:");
  scanf("%s",&a[1]);

  for(i=0;i<10;i++)
  if(a[0][i] == a[1][i])
  {

  }
  else
    {
    aux=0;
    }

  if(aux==0){
    printf("SAO DIFERENTES");
  } else{
    printf("SAO IGUAIS");
  }

}
#endif // ex3

#ifdef ex4
main ()
{
 char a[3];
 printf("insira o dia da semana: ");
 scanf("%s",a);

 switch(a[2]){
    case 'g':{
        printf("segunda-feira");
        break;
    }
    case 'r':{
        printf("terca-feira");
        break;
    }
    case 'a':{
        printf("quarta-feira");
        break;
    }
    case 'i':{printf("quinta-feira");
    break;
    }
    case 'x':{printf("sexta-feira");
    break;}
    case 'b':{printf("sabadou");
    break;}
    case 'm':{printf("domingo");
    break;}
    default:{
        printf("errou vacilao");
    }
 }
}
#endif // ex4

#ifdef ex5
main()
{
    char string[10]={'0','0','0','0','0','0','0','0','0','0'};
    int i;

    printf("Insira a string: ");
    scanf("%s", &string);

    for(i=0;i<10;i++){
        if(string[i] == '0' || string[i] == '\0'){
            printf("");
        } else{
        printf("%c",string[i]-32);
    }
    }
}
#endif // ex5

#ifdef ex6
main()
{
    char string[10]={'0','0','0','0','0','0','0','0','0','0'};
    int i;

    printf("Insira a string: ");
    scanf("%s", &string);

    for(i=0;i<10;i++){
        if(string[i] == '0' || string[i] == '\0'){
            printf("");
        } else{
        printf("%c",string[i]+32);
    }
    }
}
#endif // ex6

#ifdef ex7
main()
{
    char string[50];
    int i;

    for(i=0;i<50;i++){
        string[i]='0';
    }

    printf("Insira a string: ");
    scanf("%s", &string);

    for(i=0;i<50;i++){
        if(string[i] == '0' || string[i] == '\0'){
            printf("");
        } else{
        printf("%c",string[i]+1);
    }
    }
}
#endif // ex7


#ifdef ex8
main()
{
    char string[50];
    int i, count=0;

    for(i=0;i<50;i++){
        string[i]='0';
    }

    printf("Insira a string: ");
    scanf("%s", &string);

    for(i=0;i<50;i++){
        if(string[i] != '0' && string[i] != '\0'){
        count++;
        }
    }
    printf("%d", count);
}
#endif // ex8
