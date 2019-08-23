#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"


class ContaEspecial: public Conta
{
    public:
        ContaEspecial(std::string nomeCliente, double salarioMensal, double saldo,int numeroConta);
        ContaEspecial();
        virtual ~ContaEspecial();

        double definirLimite();

    protected:


    private:
};

#endif // CONTAESPECIAL_H
