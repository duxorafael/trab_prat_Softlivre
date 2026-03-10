# trab_prat_Softlivre

## Integrantes do Grupo
- Alexandre Raphael

## Descrição
Este trabalho contém três programas desenvolvidos em C++, um **Makefile** para automatizar a compilação e **scripts Bash** para geração de testes.

1. **primo.cpp**
   - Lê um número inteiro e informa se ele é primo ou não.

2. **vetor.cpp**
   - Lê um vetor de números inteiros e imprime o maior valor do vetor.

3. **matriz.cpp**
   - Calculadora de matrizes que permite realizar:
     - Soma
     - Subtração
     - Multiplicação

Além dos programas, o projeto contém:

- **Makefile** para automatizar a compilação.
- **Scripts Bash (.sh)** para gerar entradas de teste automaticamente.

---

# Compilação

Os programas podem ser compilados utilizando o **Makefile** incluído no projeto.

Compilar todos os programas:

make

Compilar programas individualmente:

make primo
make vetor
make matriz

Isso irá gerar os executáveis:

primo.exe
vetor.exe
matriz.exe

---

# Execução dos Programas

Após compilar, os programas podem ser executados pelo terminal.

Executar o programa que verifica número primo:

.\primo.exe

Executar o programa do vetor:

.\vetor.exe

Executar a calculadora de matrizes:

.\matriz.exe

---

# Geração de Casos de Teste

Foram criados scripts Bash para gerar entradas de teste automaticamente.

Gerar teste para o programa **primo**:

bash scrips/generate-test-primo.sh

Gerar teste para o programa **vetor**:

bash scrips/generate-test-vetor.sh

Gerar teste para o programa **matriz**:

bash scrips/generate-test-matriz.sh


Esses scripts irão gerar arquivos de teste como:

teste_primo.txt

teste_vetor.txt

teste_matriz.txt


---

# Executando os programas com arquivos de teste

Para executar os programas utilizando os testes gerados:

Programa primo:

type teste_primo.txt | .\primo.exe

Programa vetor:

type teste_vetor.txt | .\vetor.exe

Programa matriz:

type teste_matriz.txt | .\matriz.exe


---

# Tecnologias Utilizadas

- C++
- GNU Make
- Bash
- g++
- git desktop
