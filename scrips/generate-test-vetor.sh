#!/bin/bash

n=5

echo $n > teste_vetor.txt

for ((i=0;i<n;i++))
do
    echo -n "$((RANDOM % 100)) " >> teste_vetor.txt
done

echo "" >> teste_vetor.txt

echo "Teste salvo em teste_vetor.txt" 