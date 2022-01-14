#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cstdlib>
#include <locale.h>
using namespace std;

//Menú C++ David Guillermo Aguilera Romero 2394488

//1.1 Decisiones
//Leer un numero entero y determinar si es un numero terminado en 4
void EnteroTerminado4()
{
	int num, pd, ud;
	cout<<"Ingrese un número entero"<<endl;
	cin>>num;
	pd=trunc(num/10);
	cout<< "el primer digito es: "<<pd<<endl;
	ud= num-trunc(num/10)*10;
	cout<< "el ultimo digito es: "<<ud<<endl;
	if(ud==4){
		cout<<"Si cumple"<<endl;
	}
		else{
		cout<<"No cumple"<<endl;
	}

}


//1.2 Decisiones
// Leer un número entero y determinar si tiene 3 digitos
void Entero3dig()
{
	int num;
	cout<<"Ingrese un número entero"<<endl;
	cin>>num;
	if(num>100 and num<999){
		cout<<"El número tiene 3 digitos, sí cumple"<<endl;
	}
		else{
		cout<<"El número tiene menos de 3 o más de 3 digitos, no cumple"<<endl;
	}

}

//1.3 Decisiones
// Leer un número entero de dos dígitos y determinar a cuantó es igual la suma de sus dígitos
void EnteroSumaDig()
{
	int num, pd, ud, suma;
	cout<<"Ingrese un número entero de dos dígitos"<<endl;
	cin>>num;
	pd=trunc(num/10);
	cout<< "el primer digito es: "<<pd<<endl;
	ud= num-trunc(num/10)*10;
	cout<< "el ultimo digito es: "<<ud<<endl;
	if(num>99 and num<9){
		cout<<"Lo siento, este número no es de dos digitos"<<endl;
	}
	suma=pd+ud;
	cout<< "la suma de los dos dígitos es: "<<suma<<endl;

}

//1.4 Decisiones
//Leer un número entero de dos dígitos y determinar si ambos dígitos son pares
void DosDigitosPares()
{
	int num, pd, ud, npar1, npar2;
	cout<<"Ingrese un número entero"<<endl;
	cin>>num;
	if(num>99 and num<10){
		cout<<"Este NO es un número de dos dígitos"<<endl;
	}
	else{
		cout<<"Este es es un número de dos dígitos, presione una tecla para continuar"<<endl;
	}
	pd=(trunc(num/10));
	cout<< "el primer digito es: "<<pd<<endl;
	npar1=trunc(pd/2)*2;
	if(npar1==pd){
		cout<<"El primer digito es par"<<endl;
	}
	else{
		cout<<"El primer digito NO es par"<<endl;
	}
	ud=(num-trunc(num/10)*10);
	cout<< "el ultimo digito es: "<<ud<<endl;
	npar2=trunc(ud/2)*2;
	if(npar2==pd){
		cout<<"El segundo digito es par"<<endl;
	}
	else{
		cout<<"El segundo digito NO es par"<<endl;
	}

}

//1.5 Decisiones
//Leer un número entero de dos dígitos y determinar si los dos dígitos son iguales
void DosDigitosIguales()
{
	int num, pd, ud;
	cout<<"Ingrese un número entero"<<endl;
	cin>>num;
	pd=trunc(num/10);
	cout<< "el primer digito es: "<<pd<<endl;
	ud= num-trunc(num/10)*10;
	cout<< "el ultimo digito es: "<<ud<<endl;
	if(ud==pd){
		cout<<"Los dgitos son Iguales"<<endl;
	}
		else{
		cout<<"Los digitos NO son iguales"<<endl;
	}

}

//1 Decisiones
void decisiones(){
	system("cls");
	cout<<"si"<<endl;
	int OP;
do
{
		system("cls");
		cout<<"Ejercicios de Decisiones"<<endl;
		cout<<"  1. Leer un numero entero y determinar si es un numero terminado en 4"<<endl;
		cout<<"  2. Leer un número entero y determinar si tiene 3 digitos"<<endl;
		cout<<"  3. Determinar la suma de los dos dígitos de un número "<<endl;
		cout<<"  4. Determinar si los dos dígitos de un número son pares"<<endl;
		cout<<"  5. Determinar si los do dígitos de un número son iguales"<<endl;
		cout<<"  6. Volver a menú principal"<<endl;
		
		cout<<"  Elija una Opción (1-6)"<<endl;

		cin>> OP;
	switch(OP)
	{
		case (1):
		{
			system("cls");
			EnteroTerminado4();	
		 } 
		 break;
		case (2):
		{
			system("cls");
			Entero3dig();	
		 } 
		 break;
		case (3):
		{
			system("cls");
			EnteroSumaDig();	
		 } 
		 break;
		case (4):
		{
			system("cls");
			DosDigitosPares();	
		 } 
		 break;
		case (5):
		{
			system("cls");
			DosDigitosIguales();	
		 } 
		 break;
		case (6):
		{
			return;
		 } 
		 break;			 
		 
	}
}while(OP=6);
}

//2.1 Secuencias
// "Dado un monto calcular el descuento considerando que por encima de 100 el descuento es el 10% y por debajo de 100 el descuento es el 2%.
void Descuento()
{
	int MontoInicial, MontoFinal, monto1, monto2;
	cin>>MontoInicial;
	if (MontoInicial>100){
		monto1=MontoInicial*0.9;
		MontoFinal=monto1;
	}
	else{
		monto2=MontoInicial*0.98;
		MontoFinal=monto2;
	cout<<"El monto final es "<<MontoFinal<<endl;
}
}

//2.2 Secuencias
//Escribir el algoritmo que permita emitir la factura correspondiente a una compra de un artículo determinado, del que se adquieren una o varias unidades. El IVA es del 19% y si el precio bruto ( precio venta más IVA) es mayor de $13000 se debe realizar un descuento del 5%.
void factura()
{
	int iva1, iva2, precioBruto, precioTotal;
	cout<<"Ingrese el precio bruto"<<endl;
	cin>>precioBruto;

	if (precioBruto<13000){
		precioTotal=precioBruto+(precioBruto+0.19);
		cout<<"Debes pagar IVA"<<endl;
	}
	else{
		precioTotal=precioBruto*0.95;
		cout<<"Felicidades, has ganado un descuento del 5%"<<endl;
	cout<<"El precio total es ", precioTotal, ", Ya puede imprimir su factura.";
}
}

//2.3 Secuencias
//Determinar la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus dos catetos. Desarrolle el algoritmo correspondiente.
void hipotenusa()
{
	int hipotenusa1, cateto1, cateto2, hipotenusa2;
	cout<<"Ingrese los dos catetos para calcular la hipotenusa del triángulo rectángulo"<<endl;
	cin>>cateto1;
	cin>>cateto2;	
	hipotenusa2=pow(cateto1,2)+pow(cateto2,2);
	hipotenusa1=sqrt(hipotenusa2);
	cout<<"La hipotenusa es "<<hipotenusa1<<endl;


}
//2.4 Secuencias
//Calcular el promedio de tres notas digitadas por teclado y mostrar en pantalla su resultado.
void promedio()
{
	int nota1, nota2, nota3, suma, prom;
	cout<<"Digite la nota 1"<<endl;
	cin>>nota1;
	cout<<"Digite la nota 2"<<endl;
	cin>>nota2;
	cout<<"Digite la nota 3"<<endl;
	cin>>nota3;
	suma=nota1+nota2+nota3;
	prom=suma/3;
	cout<<"El promedio es: "<<prom<<endl;
	if (prom<3){
		cout<<"Perdió"<<endl;
	}
	else{
		cout<<"Aprobó"<<endl;
}
}

//2.5 Secuencias
// Diseñe un programa que permita obtener el promedio de cuatro notas.
void promedio4()
{
	int nota1, nota2, nota3, nota4, suma, prom;
	cout<<"Digite la nota 1"<<endl;
	cin>>nota1;
	cout<<"Digite la nota 2"<<endl;
	cin>>nota2;
	cout<<"Digite la nota 3"<<endl;
	cin>>nota3;
	cout<<"Digite la nota 4"<<endl;
	cin>>nota4;
	suma=nota1+nota2+nota3+nota4;
	prom=suma/4;
	cout<<"El promedio es: "<<prom<<endl;
	if (prom<3){
		cout<<"Perdió"<<endl;
	}
	else{
		cout<<"Aprobó"<<endl;
}
}

//2 Secuencias
void secuencias(){
	system("cls");
	cout<<"si"<<endl;
	int OP;
do
{
		system("cls");
		cout<<"Ejercicios de Secuencias"<<endl;
		cout<<"  1. Dado un monto calcular el descuento considerando que por encima de 100 el descuento es el 10% y por debajo de 100 el descuento es el 2%."<<endl;
		cout<<"  2. Factura de producto, el IVA es del 19% y si el precio bruto ( precio venta más IVA) es mayor de $13000 se debe realizar un descuento del 5%."<<endl;
		cout<<"  3. Determinar la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus dos catetos. Desarrolle el algoritmo correspondiente."<<endl;
		cout<<"  4. Calcular el promedio de tres notas digitadas por teclado y mostrar en pantalla su resultado."<<endl;
		cout<<"  5. Promedio de cuatro notas."<<endl;
		cout<<"  6. Volver a menú principal"<<endl;
		
		cout<<"  Elija una Opción (1-6)"<<endl;

		cin>> OP;
	switch(OP)
	{
		case (1):
		{
			system("cls");
			Descuento();	
		 } 
		 break;
		case (2):
		{
			system("cls");
			factura();	
		 } 
		 break;
		case (3):
		{
			system("cls");
			hipotenusa();	
		 } 
		 break;
		case (4):
		{
			system("cls");
			promedio();	
		 } 
		 break;
		case (5):
		{
			system("cls");
			promedio4();	
		 } 
		 break;
		case (6):
		{
			return;
		 } 
		 break;			 
		 
	}
}while(OP=6);
}


//3.1 Ciclos
//Leer un número entero y mostrar todos enteros comprendidos entre 1 y el número leido
void EnteroyComprendidos()
{
	int i, num;
	i=0;
	cout<<"Digite un número"<<endl;
	cin>>num;
	while(i<num){
		i=i+1;
		cout<<i<<endl;
	}	
}

//3.2 Ciclos
//Leer un número entero y mostrar todos los pares enteros comprendidos entre 1 y el número leido
void EnteroyComprendidosPar(){
	int i, num, npar;
	i=0;
	cout<<"Por favor digite un número"<<endl;
	cin>>num;
	npar=trunc(num/2)*2;
	cout<<"Los números pares entre 1 y el número son: "<<endl;
	while (i<num){
		i=i+2;
		cout<<i<<endl;
	}
}

//3.3 Ciclos
//Leer dos números enteros y mostrar todos los enteros comprendidos entre ellos
void EnteroComprendidoEntreEllos(){
	int  num, num2;
	cout<<"Por favor digite un número"<<endl;
	cin>>num;
	cout<<"Por favor digite otro número"<<endl;
	cin>>num2;
	cout<<"Los números pares entre estos son: "<<endl;
	while (num<(num2-1)){
		num=num+1;
		cout<<num<<endl;
	}
}

//3.4 Ciclos
//Mostrar en la pantalla todos los enteros comprendidos entre 1 y 100
void EnteroyComprendidos1y100()
{
	int i;
	i=0;
	cout<<"A continuación se mostraran los enteros comprendidos entre 1 y 100, por favor presione ENTER"<<endl;
	cin.get();
	cout<<"Los números entre 1 y 100 son"<<endl;
	while(i<99){
		i=i+1;
		cout<<i<<endl;
	}	
}

//3.5 Ciclos
//Mostrar en la pantalla todos los enteros comprendidos entre 20 y 20000
void EnteroyComprendidos20y200()
{
	int i;
	i=20;
	cout<<"A continuación se mostraran los enteros comprendidos entre 2 y 200, por favor presione ENTER"<<endl;
	cin.get();
	cout<<"Los números entre 20 y 200 son"<<endl;
	while(i<199){
		i=i+1;
		cout<<i<<endl;
	}	
}

//3 Ciclos
void ciclos(){
	system("cls");
	cout<<"si"<<endl;
	int OP;
do
{
		system("cls");
		cout<<"Ejercicios de Ciclos"<<endl;
		cout<<"  1. Leer un número entero y mostrar todos enteros comprendidos entre 1 y el número leido."<<endl;
		cout<<"  2. Leer un número entero y mostrar todos los pares enteros comprendidos entre 1 y el número leido."<<endl;
		cout<<"  3. Leer dos números enteros y mostrar todos los enteros comprendidos entre ellos."<<endl;
		cout<<"  4. Mostrar en la pantalla todos los enteros comprendidos entre 1 y 100"<<endl;
		cout<<"  5. Mostrar en la pantalla todos los enteros comprendidos entre 20 y 200"<<endl;
		cout<<"  6. Volver a menú principal"<<endl;
		
		cout<<"  Elija una Opción (1-6)"<<endl;

		cin>> OP;
	switch(OP)
	{
		case (1):
		{
			system("cls");
			EnteroyComprendidos();	
		 } 
		 break;
		case (2):
		{
			system("cls");
			EnteroyComprendidosPar();	
		 } 
		 break;
		case (3):
		{
			system("cls");
			EnteroComprendidoEntreEllos();	
		 } 
		 break;
		case (4):
		{
			system("cls");
			EnteroyComprendidos1y100();	
		 } 
		 break;
		case (5):
		{
			system("cls");
			EnteroyComprendidos20y200();	
		 } 
		 break;
		case (6):
		{
			return;
		 } 
		 break;			 
		 
	}
}while(OP=6);
}

//4.1 Vectores
//Leer 10 enteros, almacenarlos en un vector y determinar en qué posición del vector está el mayor número leído
void DiezEnterosMayor()
{
	int vector[11];
	int i, Pos_may;
	cout<<"Digite 10 números enteros"<<endl;
	i=0;
		for (i=1; i<=10;i+=1){
		cin>>vector[i];
	}
	for (i=2; i<=10;i+=1){
	if ((vector[i])>(vector[Pos_may])){
		Pos_may=i;
	}
	}
	cout<<"El número mayor está en la posición "<<Pos_may<<endl;
	
}

//4.2 Vectores
//Leer 10 enteros, almacenarlos en un vector y determinar en qué psición del vector está el mayor número par leído
void DiezEnterosParMayor()
{
	int vector[11];
	int i, Pos_may, npar, pd;
	cout<<"Digite 10 números enteros"<<endl;
	i=0;
		for (i=1; i<=10;i+=1){
		cin>>vector[i];
	}
	Pos_may=1;
	npar=0;
	for (i=2; i<=10;i+=1){
	if (vector[i] % 2==0){
		if ((vector[i]>vector[Pos_may])){
			Pos_may=i;
		}
	}
	}
	cout<<"El número par mayor está en la posición "<<Pos_may<<endl;
	
}

//4.3 Vectores
//Leer 10 números enteros, almacenarlos en un vector y determinar a cuanto es igual el promedio entero de datos del vector
void VectorPromedio()
{
	int vector[11];
	int i, Pos_may, c;
	cout<<"Digite 10 números enteros"<<endl;
	i=0;
	for (i=1; i<=10;i+=1){
		cin>>vector[i];
	}
	Pos_may=1;
	c=0;
		for (i=1; i<=10;i+=1){
		c=c+vector[i];
	}
	c=c/10;
	cout<<"El promedio de los números es "<<trunc(c)<<endl;
}

//4.4 Vectores
//Leer 10 números enteros, almacenarlos en un vector y determinar cuantas veces está repetido el mayor.
void VectorNvecesMayor()
{
	int vector[11];
	int i, a, Pos_may, c;
	cout<<"Digite 10 números enteros"<<endl;
	i=0;
	for (i=1; i<=10;i+=1){
		cin>>vector[i];
	}
	Pos_may=1;
		for (i=1; i<=10;i+=1){
		if (vector[i]>vector[Pos_may]){
		Pos_may=i;
		}
	}
	c=0;
	for (i=1; i<=10;i+=1){
		if (vector[i]==vector[Pos_may]) 
		{
		c=c+1;
		}
	}
	cout<<"El número mayor es "<<vector[Pos_may]<<" y se repite "<<c<<" veces."<<endl;
}

//4.5 Vectores
//Cargar un vector de 10 posiciones con los 10 primeros elementos de la serie de Fibonacci y mostrarlo en Pantalla
void VectorFibonacci()
{
	int vector[11];
	int i, a, b, c;
	a=0;
	b=1;
		for (i=1; i<=10;i+=1){
		vector[i]=a;
		c=a+b;
		a=b;
		b=c;
	}
	for (i=1; i<=10;i+=1){
	cout<<vector[i]<<endl;
	}
	
}

//4 Vectores
void vectores(){
	system("cls");
	cout<<"si"<<endl;
	int OP;
do
{
		system("cls");
		cout<<"Ejercicios de Vectores"<<endl;
		cout<<"  1. Leer 10 enteros, almacenarlos en un vector y determinar en qué posición del vector está el mayor número leído."<<endl;
		cout<<"  2. Leer 10 enteros, almacenarlos en un vector y determinar en qué psición del vector está el mayor número par leído."<<endl;
		cout<<"  3. Leer 10 números enteros, almacenarlos en un vector y determinar a cuanto es igual el promedio entero de datos del vector."<<endl;
		cout<<"  4. Leer 10 números enteros, almacenarlos en un vector y determinar cuantas veces está repetido el mayor."<<endl;
		cout<<"  5. Cargar un vector de 10 posiciones con los 10 primeros elementos de la serie de Fibonacci y mostrarlo en Pantalla."<<endl;
		cout<<"  6. Volver a menú principal"<<endl;
		
		cout<<"  Elija una Opción (1-6)"<<endl;

		cin>> OP;
	switch(OP)
	{
		case (1):
		{
			system("cls");
			DiezEnterosMayor();	
		 } 
		 break;
		case (2):
		{
			system("cls");
			DiezEnterosParMayor();	
		 } 
		 break;
		case (3):
		{
			system("cls");
			VectorPromedio();	
		 } 
		 break;
		case (4):
		{
			system("cls");
			VectorNvecesMayor();	
		 } 
		 break;
		case (5):
		{
			system("cls");
			VectorFibonacci();	
		 } 
		 break;
		case (6):
		{
			return;
		 } 
		 break;			 
		 
	}
}while(OP=6);
}

//5.1 Matrices
//leer una matriz 4x4 entera y determinar en que fila y en que columna se encuentra en número mayor.
void matriz4x4mayor()
{
	int matriz[5][5];
	int inf, ic, pos_Cmay, pos_Fmay;
	cout<<"Digite 16 números enteros"<<endl;
	inf=0;
	ic=0;
	for (inf=1; inf<=4;inf+=1){
		for (ic=1; ic<=4;ic+=1){
			cin>>matriz[inf][ic];
	}
	}
	inf=0;
	ic=0;
	pos_Cmay=1;
	pos_Fmay=1;
	for (inf=1; inf<=4;inf+=1){
		for (ic=1; ic<=4;ic+=1){
			if (matriz[inf][ic]>matriz[pos_Fmay][pos_Cmay]){
				pos_Cmay=ic;
				pos_Fmay=inf;
			}
		}
	}
		for (inf=1; inf<=4;inf+=1){
		cout<<matriz[inf][1]<<" "<<matriz[inf][2]<<" "<<matriz[inf][3]<<" "<<matriz[inf][4]<<" "<<endl;
	}
	cout<<"El número mayor está en la columna "<<pos_Cmay<<endl;
	cout<<"El número mayor está en la fila "<<pos_Fmay<<endl;
}

//5.2 Matrices
//Leer una matriz 4x4 entera y determinar cuantas veces se repita en ella en número mayor.
void Matriz4x4MayorRep()
{
	int matriz[5][5];
	int inf, ic, pos_Cmay, pos_Fmay,c ;
	cout<<"Digite 16 números enteros"<<endl;
	inf=0;
	ic=0;
	for (inf=1; inf<=4;inf+=1){
		for (ic=1; ic<=4;ic+=1){
			cin>>matriz[inf][ic];
	}
	}
	inf=0;
	ic=0;
	pos_Cmay=1;
	pos_Fmay=1;
	for (inf=1; inf<=4;inf+=1){
		for (ic=1; ic<=4;ic+=1){
			if (matriz[inf][ic]>matriz[pos_Fmay][pos_Cmay]){
				pos_Cmay=ic;
				pos_Fmay=inf;
			}
		}
	}
		for (inf=1; inf<=4;inf+=1){
		cout<<matriz[inf][1]<<" "<<matriz[inf][2]<<" "<<matriz[inf][3]<<" "<<matriz[inf][4]<<" "<<endl;
	}
	c=0;
	for (inf=1; inf<=4;inf+=1){
		for (ic=1; ic<=4;ic+=1){
			if (matriz[inf][ic]==matriz[pos_Fmay][pos_Cmay]){
				c=c+1;
			}
		}
	}	
	cout<<"El número mayor está en la columna "<<pos_Cmay<<endl;
	cout<<"El número mayor está en la fila "<<pos_Fmay<<endl;
	cout<<"El número mayor se repite "<<c<<" veces";
}

//5.3 Matrices
//Leer una matriz 4x4 entera y determinar en que posiciones están los enteros terminados en 0.
void Matriz4x4PosNum()
{
	int matriz[5][5];
	int inf, ic, pos_Cmay, pos_Fmay,ud ;
	cout<<"Digite 16 números enteros"<<endl;
	inf=0;
	ic=0;
	for (inf=1; inf<=4;inf+=1){
		for (ic=1; ic<=4;ic+=1){
			cin>>matriz[inf][ic];
	}
	}
	inf=0;
	ic=0;
	for (inf=1; inf<=4;inf+=1){
		cout<<matriz[inf][1]<<" "<<matriz[inf][2]<<" "<<matriz[inf][3]<<" "<<matriz[inf][4]<<" "<<endl;
	}
	
	for(inf=1; inf<=4;inf+=1){
		for(ic=1; ic<=4; ic+=1){
			if (matriz[inf][ic]>>0){
				ud=(matriz[inf][ic])-trunc(matriz[inf][ic]/10)*10;
				if(ud==0){
					cout<<"Fila "<<inf<<" y columna "<<ic<<" termina en 0."<<endl;
				}
			}
		}
	}
}

//5.4 Matrices
//Leer una matriz 4x3 entera, calcular la suma de los elementos de cada fila y determinar cuál es la fila que tiene la mayor suma
void Matriz3x4SumFilas()
{
	int matriz[5][4];
	int vs[4];
	int inf, ic, pos_may, i, sumf ;
	cout<<"Digite 12 números enteros"<<endl;
	inf=0;
	ic=0;
	for (inf=1; inf<=4;inf+=1){
		for (ic=1; ic<=3;ic+=1){
			cin>>matriz[inf][ic];
	}
	}

	for (inf=1; inf<=4;inf+=1){
		cout<<matriz[inf][1]<<" "<<matriz[inf][2]<<" "<<matriz[inf][3]<<" "<<endl;
	}
	
	for(inf=1; inf<=4;inf+=1){
		sumf=0;
		for(ic=1; ic<=3; ic+=1){
			sumf=matriz[inf][ic]+sumf;
			vs[inf]=sumf;
		}
	}
	cout<<"Las sumas de las filas son: "<<vs[1]<<" "<<vs[2]<<" "<<vs[3]<<" "<<vs[4]<<endl;
	pos_may=0;
	vs[0]=0;
	i=1;
	for(i=1;i<=4;i+=1){
		if (vs[i]>=vs[pos_may]){
		pos_may=i;
		}
	}
	cout<<"La suma mayor es: "<<vs[pos_may]<<endl;
}

//5.5 Matrices
//Leer una matriz 3x4 y determinar en que posiciones exactas se encuentran los números pares.
void Matriz4x4PosPares()
{
	int matriz[4][5];
	int inf, ic, pos_par ;
	cout<<"Digite 12 números enteros"<<endl;
	inf=0;
	ic=0;
	for (inf=1; inf<=3;inf+=1){
		for (ic=1; ic<=4;ic+=1){
			cin>>matriz[inf][ic];
	}
	}

	for (inf=1; inf<=3;inf+=1){
		cout<<matriz[inf][1]<<" "<<matriz[inf][2]<<" "<<matriz[inf][3]<<" "<<matriz[inf][4]<<" "<<endl;
	}
	
	for(inf=1; inf<=3;inf+=1){
		for(ic=1; ic<=4; ic+=1){
			if ((matriz[inf][ic])% 2==0){
				cout<<"Fila "<<inf<<" y columna "<<ic<<" es par."<<endl;
				
			}
		}
	}
}

//5 Matrices
void matrices(){
	system("cls");
	cout<<"si"<<endl;
	int OP;
do
{
		system("cls");
		cout<<"Ejercicios de Matrices"<<endl;
		cout<<"  1. Leer una matriz 4x4 entera y determinar en que fila y en que columna se encuentra en número mayor."<<endl;
		cout<<"  2. Leer una matriz 4x4 entera y determinar cuantas veces se repita en ella en número mayor."<<endl;
		cout<<"  3. Leer una matriz 4x4 entera y determinar en que posiciones están los enteros terminados en 0."<<endl;
		cout<<"  4. Leer una matriz 4x3 entera, calcular la suma de los elementos de cada fila y determinar cuál es la fila que tiene la mayor suma."<<endl;
		cout<<"  5. Leer una matriz 3x4 y determinar en que posiciones exactas se encuentran los números pares."<<endl;
		cout<<"  6. Volver a menú principal"<<endl;
		
		cout<<"  Elija una Opción (1-6)"<<endl;

		cin>> OP;
	switch(OP)
	{
		case (1):
		{
			system("cls");
			matriz4x4mayor();	
		 } 
		 break;
		case (2):
		{
			system("cls");
			Matriz4x4MayorRep();	
		 } 
		 break;
		case (3):
		{
			system("cls");
			Matriz4x4PosNum();	
		 } 
		 break;
		case (4):
		{
			system("cls");
			Matriz3x4SumFilas();	
		 } 
		 break;
		case (5):
		{
			system("cls");
			Matriz4x4PosPares();	
		 } 
		 break;
		case (6):
		{
			return;
		 } 
		 break;			 
		 
	}
}while(OP=6);
}

//Menú
main()
{
	setlocale(LC_CTYPE, "spanish");
int OP;
do
{
		system("cls");
		cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
		cout<<"<<<<<<<<<<<<<<<<<                          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
		cout<<"<<<<<<<<<<<<<<<<<    Menú de Ejercicios    <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
		cout<<"<<<<<<<<<<<<<<<<<  David Aguilera Romero   <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
		cout<<"<<<<<<<<<<<<<<<<<      Ficha 2394488       <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
		cout<<"<<<<<<<<<<<<<<<<<          Ruta1           <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
		cout<<"<<<<<<<<<<<<<<<<<                          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
		cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
		cout<<" "<<endl;
		cout<<"  1. Decisiones"<<endl;
		cout<<"  2. Secuencias"<<endl;
		cout<<"  3. Ciclos"<<endl;
		cout<<"  4. Vectores"<<endl;
		cout<<"  5. Matrices"<<endl;
		cout<<"  6. Salir"<<endl;
		
		cout<<"  Elija una Opción (1-6)"<<endl;

		cin>> OP;
	switch(OP)
	{
		case (1):
		{
			system("cls");
			decisiones();	
		 } 
		 break;
		{
			system("cls");
			secuencias();	
		 } 
		 break;
		case (3):
		{
			system("cls");
			ciclos();	
		 } 
		 break;
		case (4):
		{
			system("cls");
			vectores();	
		 } 
		 break;
		case (5):
		{
			system("cls");
			matrices();	
		 } 
		 break;
		case (6):
		{
			exit (-1);
		 } 
		 break;			 
		 
	}
}while(OP=6);

}
