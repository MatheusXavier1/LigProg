#include <iostream>
#include <string>

class Elevador {
    private:
        int capacidade;
        int pessoas;
        int andarAtual;
        int andarMax;

    public:
        // Construtor padrão com inicialização dos atributos
        Elevador() : capacidade(0), pessoas(0), andarAtual(0), andarMax(0) {}

        // Método para inicializar o elevador
        void init(int capacidade, int andarMax) {
            this->capacidade = capacidade;
            this->andarMax = andarMax;
            this->andarAtual = 0; // Sempre começa no térreo
            this->pessoas = 0;    // Sempre começa vazio
        }

        // Método para entrar uma pessoa
        void entra() {
            if (pessoas < capacidade) {
                pessoas++;
                std::cout << "Uma pessoa entrou. Número de pessoas no elevador: " << pessoas << "\n";
            } else {
                std::cout << "Elevador lotado!\n";
            }
        }

        // Método para sair uma pessoa
        void sai() {
            if (pessoas > 0) {
                pessoas--;
                std::cout << "Alguém saiu. Número de pessoas: " << pessoas << "\n";
            } else {
                std::cout << "Não tem ninguém no elevador\n";
            }
        }

        // Método para subir um andar
        void sobe() {
            if (andarAtual < andarMax) {
                andarAtual++;
                std::cout << "Subiu para o andar " << andarAtual << "\n";
            } else {
                std::cout << "Você está no último andar\n";
            }
        }

        // Método para descer um andar
        void desce() {
            if (andarAtual > 0) {
                andarAtual--;
                std::cout << "Desceu para o andar " << andarAtual << "\n";
            } else {
                std::cout << "Você está no térreo\n";
            }
        }

        // Métodos getters para obter os dados armazenados
        int getPessoas() const {
            return pessoas;
        }

        int getAndar() const {
            return andarAtual;
        }

        int getTotAndares() const {
            return andarMax;
        }

        int getCapacidade() const {
            return capacidade;
        }
};  

int main() {
    Elevador elevador;
    elevador.init(5, 10); // Inicializa o elevador com capacidade para 5 pessoas e 10 andares

    // Simulando algumas operações
    elevador.entra();
    elevador.entra();
    elevador.sobe();
    elevador.sobe();
    elevador.desce();
    elevador.sai();
    elevador.sai();
    elevador.desce();

    // Exibindo o estado atual do elevador
    std::cout << "Andar atual: " << elevador.getAndar() << "\n";
    std::cout << "Total de andares: " << elevador.getTotAndares() << "\n";
    std::cout << "Capacidade do elevador: " << elevador.getCapacidade() << "\n";
    std::cout << "Pessoas presentes: " << elevador.getPessoas() << "\n";

    return 0;
}
