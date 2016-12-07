/**
@brief se declara la clase artículo
*/
class articulo{
	
	//Atributos
	
	public:
	int dpto; // departamento  al cual pertenece el articulo
	int codArt; // codigo del articulo
	double precioArt; // precio del articulo
	int cantArt; //cntida dpor rticulo
	double montoArt; //monto que lleva el articulo

	
	//Constructores
	
	public:
	articulo();
	articulo(int codArt, double precioArt, int dpto);
	
	
	//metodos
	
	public:
	int datos(int i);
	int precio(int i);
	int condicion(int codArt);
	void imprimir();
	void compra(int cantArt, articulo A);
    articulo maxArt(articulo A);
    

}; 

class departamento  {
	public:
		double montoDpto1;
		double montoDpto2;
		double montoDpto3;
		double montoDpto4;
		double montoDpto5;
		double promedio;
		
	public:
		departamento();
		departamento(double montoDpto1, double montoDpto2, double montoDpto3, double montoDpto4, double montoDpto5, double promedio);
	public:
	    departamento Dptoventas(articulo A);
		void imprimir(articulo Artmax, departamento d);	
	  
	    
	
};
