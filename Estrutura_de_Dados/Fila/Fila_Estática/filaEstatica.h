#define MAX 100

struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct aluno Aluno;
typedef struct fila Fila;

Fila* cria_Fila();

void libera_Fila(Fila* fi);

int tamanho_Fila(Fila* fi);

int Fila_cheia(Fila* fi);

int Fila_vazia(Fila* fi);

int insere_Fila(Fila* fi, struct aluno al);

int remove_Fila(Fila* fi);

int consulta_Fila(Fila* fi, struct aluno *al);