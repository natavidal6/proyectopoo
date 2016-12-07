 #include "venta.h"
 #include<time.h>
 #include<stdlib.h>
 #include<string.h>

 #include<iostream>

using namespace std;

int main() {
	int i, n=4, variable1[n], variable2[n];
	articulo Artmax; //almacena los articulos;
	articulo p; // sera usado para ejecutar funciones	
	departamento z, d, y;// grabara todos los montos de los departamentos y el dpto que posee el monto mayor
     
	 articulo Art[50];
     
	for(i=0; i<50; i++) {
	
		Art[i].codArt=p.datos(i);
		Art[i].precioArt=p.precio(i);
		Art[i].montoArt=0;
		Art[i].dpto=p.condicion(Art[i].codArt);
		
	
		                   	}
		            ("hola");
	// compras que se realizaran
	
	for(i=0; i<=n; i++ ) {
		variable1[i]=rand()%50;//determina un codigo de articulo aleatroio
		variable2[i]=rand()%5; // determina una cantidad de articulo aleatroio
		Art[variable1[i]].compra(variable2[i], Art[variable1[i]]); // se hace la funcion compr introduciendo el precio y la cantidad del articulo
		}
	

	for(i=0; i<=n; i++) {
   	  	    d=z.Dptoventas(Art[variable1[i]]); // determina la venta por departamento
   	  	                           //determina el dpto con mayor venta y el promedio de ventas
   		   }

	for (i=0; i<=n; i++) {
	        		
			Artmax=Art[variable1[i]].maxArt(Art[variable2[i+1]]); // se evalua cual articulo tuvo mayor venta comparandose entre sí
			Art[variable1[i]]=Artmax; // el articulo mayor se compara con los otros
		
	}
	
	z.imprimir(Artmax, d);

 
      
  return 0;
	
}
