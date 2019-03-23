#ifndef SKYLINE
#define SKYLINE

class Skyline{	
private:		
	double *abscisas;	//	array	de	abscisas		
	double *alturas	;	//	array	de	alturas	(>	0,	la	ultima	sera 0)		
	int	n;		 		//	tam. de	los	arrays	anteriores		
public:		
	Skyline();
	~Skyline();
	void Aniadir(double izda, double dcha, double alt);
	Skyline(const Skyline &copia);
	Skyline operator=(const Skyline &skl);
	void imprimir();
};

#endif 