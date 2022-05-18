/*Autor: Oscar Eduardo Fletes Ixta, 31/03/22
	Hacer Un programa que imprima todos los codigos ASCII de 10 en 10
	
	Programa en lenguaje c que muestra todos los caracteres del codigo ascii de 10 en 10, con el uso de ciclo for y condicones
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo unsigned char
		* Operaciones aritmeticas  
		* Uso de condiciones
		* Uso del ciclo for
		* printf para monstrar los valroes de las variables

	Objetivo:

	Mostrar el uso de variables unsigned char, condiciones, uso del ciclo for, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:

	El programa  arranca sin nececidad de pedir variables de entrada
	El programa imprime todos los codigos ASCII de 10 en 10
	*/
	
#include<stdio.h>//libreria para c
#include<stdlib.h>//libreria para prototipos de funciones, codigo ascii, entre otras mas funciones

int main(){
	printf("-----CODIGO ASCII----------- \n");//imprime mensaje
	for(unsigned char c=0;c<=255;c++){//ciclo for para contar todos los caarcteres del codigo ascii 
		printf("%d->[%c] \n",c,c);//imprime el numero del caracter, y el caracter 
		if(c%10==0 && c>0){//condicion, que imprima los caracteres de 10 en 10
			system("PAUSE");//pausa el programa 
		}
	}
	
	return 0;
}
