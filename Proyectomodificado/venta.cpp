 /**
 @brief implementación de la clase
 */
 #include"venta.h"
 #include <iostream>
 #include <time.h>
 #include<iostream>
 using namespace std;

 
 //constructores
	//por defecto 
 	articulo::articulo() {
 		codArt=0.0;
 		precioArt=0.0;
 		dpto=0.0;
 	}
 	
	 articulo::articulo(int cA, double pA, int dto) {
		cA=codArt;
		pA=precioArt;
		dto=dpto; 
				
 	}
 /**
 Contructor de Departamento 
 */	
    	departamento::departamento() {
 	
 		montoDpto1=0.0;
 		montoDpto2=0.0;
 	    montoDpto3=0.0;
 	    montoDpto4=0.0;
 	    montoDpto5=0.0;
 	   
 	    promedio=0.0;
 	}
 	
	 departamento::departamento(double mD1, double mD2, double mD3, double mD4, double mD5, double prom) {
	
		mD1=montoDpto5;
		mD2=montoDpto4;
		mD3=montoDpto3;
		mD4=montoDpto2;
		mD5=montoDpto1;
	
		prom=promedio;
 	}
 	
 /**
 @brief funcion que rellena los dtos preliminares de cada articulo
 */	
 	int articulo::datos(int i) {
 		codArt=i+1;
 		return codArt;	 		
 	}
 	int articulo::precio(int i){
 		precioArt=i*250+i;
 		return precioArt;
 	}
  

/** 
@brief función que declara los departamentos de cada articulo
*/
	int articulo::condicion(int codigo) {
		
		while (codigo>=1 && codigo<=10) { // valor a evaluar: código del artículo para determinar el departamento que pertenecen 
			    dpto=1;
					  }
					  
		while (codigo>10 && codigo<=20) { 
		    dpto=2;
		  			}	
		
		while (codigo>20 && codigo<=30) { 
		    dpto=3;
		}		
		
		while (codigo>30 && codigo<=40) { 
		  	dpto=4;
		}	
		
		while (codigo>40 && codigo<=50) { 
		    dpto=5;	
		}
		return dpto;
	} 

/**
@brief Se hace una clase compra en la cual un articulo culaquiera es adquirido a su precio correspondiente y a una cantidad aleatoria
*/	
	void articulo::compra(int cantArt, articulo A) {
		
		montoArt=montoArt+cantArt*precioArt; // Se acumula los valores de venta de cada articulo por compra
				
	}
/**
@brief Calcula cual articulo tuvo mayor monto de venta
*/	
	articulo articulo::maxArt(articulo A) {
		articulo artmax;
		if (montoArt>=A.montoArt) {
			artmax.codArt=codArt;
			artmax.montoArt=montoArt;
			artmax.dpto=dpto;
		}
		else {
			artmax.codArt=A.codArt;
			artmax.montoArt=A.montoArt;
			artmax.dpto=A.dpto;
			
		}
		return artmax;
	}
/**
@brief Calcula las ventas de cada dpto
*/	
	departamento departamento::Dptoventas(articulo A){
		departamento d(0,0,0,0,0,0);
		
		switch (A.dpto) {
			case 1: 
				d.montoDpto1=A.montoArt+ d.montoDpto1;
				break;
		
			case 2: 
				d.montoDpto2=A.montoArt+d.montoDpto2;
		
				break;
				
			case 3: 
				d.montoDpto3=A.montoArt+d.montoDpto3;
				break;
			
			case 4: 
				d.montoDpto4=A.montoArt+d.montoDpto4;
			    break;
		           
		    case 5: 
				d.montoDpto5=A.montoArt+d.montoDpto5;
			    break;
		}
		
		d.promedio=(d.montoDpto1+d.montoDpto2+d.montoDpto3+d.montoDpto4+d.montoDpto5)/5;
		return d;
	}
	/**
	@brief Determina el dpto con mayor ventas y el promedio de ventas
	*/

	
	void imprimir(articulo Artmax, departamento d) {
	int i;
	double B[4];

	cout<<" \t\t INDUSTRIAS MODERNAS S.A \n  ";
	cout<<" \t\t VENTAS POR DEPARTAMENTO \n";
	cout<< "\n" ;
	

	cout<<"Departamento  1 \n";
	cout<<"total del departamento: \n"<<d.montoDpto1;
	cout<<"Departamento  2 \n";
	cout<<"total del departamento: \n"<<d.montoDpto2;
	cout<<"Departamento  3 \n";
	cout<<"total del departamento: \n"<<d.montoDpto3;
	cout<<"Departamento  4 \n";
	cout<<"total del departamento: \n"<<d.montoDpto4;
	cout<<"Departamento  5 \n";
	cout<<"total del departamento: \n"<<d.montoDpto5;
      
	  	cout<<"Promedio de venta por departamento: "<<d.promedio;
	cout<<"codigo del articulo  \t\t Monto de la venta \n";
	cout<<Artmax.codArt<<" \t\t"<<Artmax.montoArt<<"\n"; //monto de la venta;
	
		
	}

