#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H
#include<exception>
#include <string>



class SaldoNaoDisponivelException: public std::exception
{
    public:
        SaldoNaoDisponivelException()throw();
        virtual ~SaldoNaoDisponivelException()throw();

        void saldoIndisponivel();
        virtual std::string what();
    protected:
        std::string msgErro = "SALDO INDISPONIVEL";

    private:
};

#endif // SALDONAODISPONIVELEXCEPTION_H
