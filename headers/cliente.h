#ifndef CLIENTE_H
#define CLIENTE_H

struct Cliente {
    int id;
    char nome[50];
    char cpf[20];
    int ativo;
    char data_nascimento[11];
};

int clienteToJson(struct Cliente cliente);

void criaCliente();

void editaCliente();

void deletaCliente();

void listarClientes();

void verCliente();

#endif
