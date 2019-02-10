#include <iostream>
#include <string>

class Casa{
private:
	int pavimentos;
	int quartos;
	double areaT;
	double areaC;
public:
	int getPavi();
	int getQuartos();
	double getAreaT();
	double getAreaC();
	void setPavi(int);
	void setQuartos(int);
	void setAreaT(double);
	void setAreaC(double);
};