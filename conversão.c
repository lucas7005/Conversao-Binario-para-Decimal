#include <stdio.h>
#include <conio.h>


main(){

int dec=0,num,d=1;


printf("Digite o numero binario: ");
scanf("%d",&num);

do{
dec = dec+(num%10)*d;
d = d*2;
num = num/10;

}while(num!=0);

printf(" O numero em decimal � %d",dec);


getch();
}
