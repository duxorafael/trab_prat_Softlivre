#!/bin/bash

# gera um numero aleatorio entre 1 e 100
num=$((RANDOM % 100 + 1))

echo $num > teste_primo.txt

echo "Numero gerado: $num"
echo "Entrada salva em teste_primo.txt"