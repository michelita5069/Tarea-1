#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
    float area ,base, altura, areaTriangulo;
    
    system("cls");
 printf("\n Dame el valor de la base:");
 scanf("%f",&base);
printf("\n Dame el valor de la altura:");
 scanf("%f",&altura);
 area=(base*altura)/2;
 printf("\n \n El area es:%.2f\n",area); 
 getch();
 
 return 0;


}
