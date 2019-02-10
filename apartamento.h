#include <iostream>
#include <string>

class Apartamento{
private:
	double area;
	int quartos;
	std::string posicao;
	int andar;
	double condominio;
	int garagem;
public:
	double getArea();
	int getQuartos();
	std::string getPosicao();
	int getAndar();
	double getCondo();
	int getGarag();
	void setArea(double);
	void setQuartos(int);
	void setPosicao(std::string);
	void setAndar(int);
	void setCondo(double);
	void setGarag(int);
};