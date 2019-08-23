#include "Conta.h"

Conta::Conta()
{
    //ctor
}

Conta::~Conta()
{
    //dtor
}

Conta::Conta(std::string nomeCliente, double salarioMensal, double saldo,int numeroConta)
{
    this -> nomeCliente = nomeCliente;
    this -> salarioMensal = salarioMensal;
    this -> saldo = saldo;
    this -> numeroConta = numeroConta;
    definirLimite();
}

std::string Conta::getNome()
{
    return nomeCliente;
}

double Conta::getSalario()
{
    return salarioMensal;
}

double Conta::getSaldo()
{
    return saldo;
}

int Conta::getNumero()
{
    return numeroConta;
}

void Conta::setNome(std::string nomeCliente)
{
    nomeCliente = nomeCliente;
}

void setSalario(double salarioMensal)
{
    salarioMensal = salarioMensal;
}
void Conta::setSaldo(double saldo)
{
    saldo=saldo;
}

void Conta::setNumero(int numeroConta)
{
    numeroConta = numeroConta;
}

double Conta::definirLimite()
{
    return 2*salarioMensal;
}

void Conta::sacar(double valor)
{
    if (valor>saldo)
    {
        throw SaldoNaoDisponivelException();
    }else
    saldo -= valor;
}

void Conta::depositar(double valor)
{
    saldo += valor;
}
