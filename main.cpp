#include <iostream>
#include "IConta.h"
#include "ContaEspecial.h"
#include "Conta.h"
#include "SaldoNaoDisponivelException.h"


int main()
{
    Conta *conta1 = new Conta("Gabriel", 4000, 1300, 29109);
    ContaEspecial *contaEspecial1 = new ContaEspecial("Christiane", 2700, 2500, 10923);
    Conta *conta2 = new Conta("Maria", 2000, 300, 29110);


    std::cout << "nome: "<< conta1->getNome()<<std::endl;
    std::cout << "salario: "<< conta1->getSalario()<<std::endl;
    std::cout << "saldo: "<< conta1->getSaldo()<<std::endl;
    std::cout << "numero da conta: "<< conta1->getNumero()<<std::endl<<std::endl;

    std::cout << "nome: "<< conta2->getNome()<<std::endl;
    std::cout << "salario: "<< conta2->getSalario()<<std::endl;
    std::cout << "saldo: "<< conta2->getSaldo()<<std::endl;
    std::cout << "numero da conta: "<< conta2->getNumero()<<std::endl<<std::endl;

    std::cout << "nome: "<< contaEspecial1->getNome()<<std::endl;
    std::cout << "salario: "<< contaEspecial1->getSalario()<<std::endl;
    std::cout << "saldo: "<< contaEspecial1->getSaldo()<<std::endl;
    std::cout << "numero da conta: "<< contaEspecial1->getNumero()<<std::endl<<std::endl;

    try
    {
        conta1->sacar(500);
        conta2->sacar(500);
        contaEspecial1->depositar(1000);
    }
    catch(SaldoNaoDisponivelException ex)
    {
        std::cerr<< "Erro: "<< ex.what()<< std::endl;
    }
    catch (...)
    {
        std::cerr<< "Erro"<< std::endl;
    }
    std::cout << "o cliente "<<conta1->getNome()<< " sacou\nnovo saldo: "<<conta1->getSaldo()<<std::endl;
    std::cout << "o cliente "<<contaEspecial1->getNome()<< " depoistou\nnovo saldo: "<<contaEspecial1->getSaldo()<<std::endl;

    std::cout << "o cliente "<<conta2->getNome()<< " sacou\nnovo saldo: "<<conta2->getSaldo()<<std::endl;

    std::cout << "\nlimite de "<<conta1->getNome()<<" : "<<conta1->definirLimite()<<std::endl;
    std::cout << "limite de "<<contaEspecial1->getNome()<<" : "<<contaEspecial1->definirLimite()<<std::endl;

    return 0;
}
