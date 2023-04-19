#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <string>
#include <iostream>

class Classe{
    private:
        std::string classe;
        bool verificarClasse(std::string);

    public:
        void setClasse(std::string);
        std::string getClasse();

};

inline std::string Classe::getClasse(){
    return classe;
}

class Codigo{
    private:
        std::string codigo;
        bool verificarCodigo(std::string);

    public:
        void setCodigo(std::string);
        std::string getCodigo();

};

inline std::string Codigo::getCodigo(){
    return codigo;
}

class Matricula{
    private:
        std::string matricula;
        bool verificarMatricula(std::string);

    public:
        void setMatricula(std::string);
        std::string getMatricula();

};

inline std::string Matricula::getMatricula(){
    return matricula;
}

class Resultado{
    private:
        std::string resultado;
        bool verificarResultado(std::string);

    public:
        void setResultado(std::string);
        std::string getResultado();

};

inline std::string Resultado::getResultado(){
    return resultado;
}

class Senha{
    private:
        std::string senha;
        bool verificarSenha(std::string);

    public:
        void setSenha(std::string);
        std::string getSenha();

};

inline std::string Senha::getSenha(){
    return senha;
}

class Telefone{
    private:
        std::string telefone;
        bool verificarTelefone(std::string);

    public:
        void setTelefone(std::string);
        std::string getTelefone();

};

inline std::string Telefone::getTelefone(){
    return telefone;
}

class Texto{
    private:
        std::string texto;
        std::string verificarTexto(std::string);

    public:
        void setTexto(std::string);
        std::string getTexto();

};

inline std::string Texto::getTexto(){
    return texto;
}

#endif // DOMINIOS_H_INCLUDED
