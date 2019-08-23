#ifndef CONTA_H
#define CONTA_H
#include <iostream>
#include "IConta.h"
#include "SaldoNaoDisponivelException.h"

class Conta: public IConta
{
    public:
        Conta();
        Conta(std::string nomeCliente, double salarioMensal, double saldo,int numeroConta);
        virtual ~Conta();

        std::string getNome();
        double getSalario();
        double getSaldo();
        int getNumero();

        void setNome(std::string nomeCliente);
        void setSalario(double salarioMensal);
        void setSaldo(double saldo);
        void setNumero(int numeroConta);

        double definirLimite();
        void sacar(double valor);
        void depositar(double valor);

    protected:
        std::string nomeCliente;
        double salarioMensal;
        double saldo;
        int numeroConta;
        double limite;
    private:
};

#endif // CONTA_H
