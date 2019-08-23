#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(std::string nomeCliente, double salarioMensal, double saldo,int numeroConta)
{
    this -> nomeCliente = nomeCliente;
    this -> salarioMensal = salarioMensal;
    this -> saldo = saldo;
    this -> numeroConta = numeroConta;
    definirLimite();
}

ContaEspecial::ContaEspecial()
{
    //ctor
}


ContaEspecial::~ContaEspecial()
{
    //dtor
}
double ContaEspecial::definirLimite(){
    return 3*saldo;
}
