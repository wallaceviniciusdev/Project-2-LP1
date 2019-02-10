#include <iostream>
#include <string>
#include "casa.h"
#include "apartamento.h"

class Imovel: public Casa, public Apartamento{
private:
	bool ativo;
	std::string titulo;
	std::string rua;
	std::string cidade;
	std::string bairro;
	int numero;
	int cep;
	bool operacao;
	double valor;
public:
	bool getAtivo();
	std::string getTitulo();
	std::string getRua();
	std::string getCidade();
	std::string getBairro();
	int getNumero();
	int getCep();
	bool getOperacao();
	double getValor();
	void setAtivo(bool);
	void setTitulo(std::string);
	void setRua(std::string);
	void setCidade(std::string);
	void setBairro(std::string);
	void setNumero(int);
	void setCep(int);
	void setOperacao(bool);
	void setValor(double);
};