#!/bin/bash

# dimensões da matriz
l1=2
c1=2
l2=2
c2=2

echo "$l1 $c1" > teste_matriz.txt
echo "$l2 $c2" >> teste_matriz.txt

# m A
for ((i=0;i<l1;i++))
do
    for ((j=0;j<c1;j++))
    do
        echo -n "$((RANDOM % 10)) " >> teste_matriz.txt
    done
    echo "" >> teste_matriz.txt
done

# m B
for ((i=0;i<l2;i++))
do
    for ((j=0;j<c2;j++))
    do
        echo -n "$((RANDOM % 10)) " >> teste_matriz.txt
    done
    echo "" >> teste_matriz.txt
done

# op
echo "$((RANDOM % 3 + 1))" >> teste_matriz.txt

echo "Teste gerado em teste_matriz.txt"