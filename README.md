# Sistema de Entregas Por Drones
Este projeto foi desenvolvido a partir da seguinte proposta acadêmica:

Em uma pequena cidade, verificou-se que pessoas idosas estavam com dificuldade de fazer compras em farmácias e supermercados. Por isso, foi criado o projeto "Apoio e Entrega com Drones (AEDS)".
O sistema deve determinar:

Quantas viagens são necessárias para realizar as entregas do dia

Quais pacotes são entregues em cada viagem

A quilometragem total percorrida pelo drone

O sistema foi implementado em C, utilizando conceitos fundamentais de Estrutura de Dados, com foco em TADs (Tipos Abstratos de Dados) e Fila Circular.


🧠 Conceitos Aplicados

✔️ Tipo Abstrato de Dado (TAD)

✔️ Fila Circular

✔️ Modularização (.h e .c)

✔️ Ponteiros

✔️ Manipulação de Arquivos

✔️ Validação de Entrada

✔️ Makefile

✔️ Organização em múltiplos diretórios


📂 bin/
   main                → Executável gerado

📂 header/
   drone.h
   galpao.h
   ListaPacotes.h
   pacote.h
   preenchimento_arquivo.h
   preenchimento_manual.h

📂 obj/
   arquivos .o gerados na compilação

📂 src/
   drone.c
   galpao.c
   ListaPacotes.c
   pacote.c
   preenchimento_arquivo.c
   preenchimento_manual.c
   

📂 testes/
   teste1.txt
   teste2.txt
   ...

main.c
Makefile
README.md


⚙️ Funcionamento do Sistema

O usuário escolhe o modo de entrada:

📂 Leitura por arquivo

✍️ Preenchimento manual

Os pacotes são armazenados no galpão utilizando Fila Circular.

O drone carrega os pacotes respeitando o peso máximo suportado.

O drone realiza múltiplas viagens até que todos os pacotes sejam entregues.

Ao final, o sistema informa:

Número de viagens realizadas

Pacotes entregues em cada viagem

Quilometragem total percorrida no dia


▶️ Como Compilar

O projeto utiliza Makefile.

Para compilar:

-make

▶️ Como Executar

-make run

📂 Entrada por Arquivo

Os arquivos de teste devem estar na pasta:

Exemplo de execução:

Leitura por arquivo ou leitura manual (1/2): 1
Escolha o teste no modelo testeX.txt: teste1.txt


✍️ Entrada Manual

O usuário informa:

Peso máximo do drone:

Número de pacotes:

Conteúdo:

Destinatário:

Peso:

Distância:

O sistema valida se o peso do pacote não ultrapassa o limite do drone.

📊 Exemplo de Saída

Viagem 1
Entrega: Medicamento para Maria
Entrega: Alimentos para João

Viagem 2
Entrega: Documento para Ana

Total de Quilometros Percorridos no Dia: 120km

🛠 Requisitos

GCC

Make

Sistema Linux, WSL , GitBash ou ambiente compatível.

👨‍💻 Autor


Márcio Paulino Vieira de Macedo
Curso: Ciência da Computação
Disciplina: Algoritmos e Estruturas de Dados
Ano: 2026
