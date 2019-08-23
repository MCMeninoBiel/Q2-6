#include "SaldoNaoDisponivelException.h"


SaldoNaoDisponivelException::SaldoNaoDisponivelException()throw()
{
    //ctor
}

SaldoNaoDisponivelException::~SaldoNaoDisponivelException()throw()
{
    //dtor
}

void SaldoNaoDisponivelException::saldoIndisponivel()
{

}

std::string SaldoNaoDisponivelException::what()
{
return "SALDO INDISPONIVEL";
}
