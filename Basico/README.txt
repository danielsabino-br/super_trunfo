# Super Trunfo – Cadastro de Cidades

## 📘 Introdução

Este projeto foi desenvolvido como trabalho acadêmico para a disciplina de **Introdução à Programação**, 
utilizando a linguagem **C**. O objetivo é implementar um sistema simples inspirado no jogo **Super Trunfo**,
permitindo o cadastro, cálculo e comparação de atributos de duas cidades.

---

## 🎯 Objetivo

Criar um programa em linguagem C capaz de:

* Cadastrar duas cartas de cidades
* Calcular indicadores socioeconômicos
* Comparar os atributos das cartas
* Exibir os resultados de forma clara e objetiva

---

## 🧩 Funcionalidades

### 📥 Cadastro de Cartas

Para cada carta, o usuário informa:


* Estado (sigla)
* Código da carta
* Nome da cidade
* População
* Área (em km²)
* PIB (em bilhões de reais)
* Número de pontos turísticos

### 🧮 Cálculos Automáticos

O programa realiza automaticamente os seguintes cálculos:

* **Densidade Populacional** (habitantes por km²)
* **PIB per Capita** (reais por habitante)
* **Super Poder** (valor calculado a partir da soma ponderada dos atributos)

### ⚔️ Comparação entre Cartas

Os atributos das duas cartas são comparados, indicando se a **Carta 1 venceu** ou não em cada critério.

---

## 🧮 Fórmulas Utilizadas

* **Densidade Populacional**
  [ densidade = população / área ]

* **PIB per Capita**
  [ PIB\ per\ capita = (PIB \times 1.000.000.000) / população ]

* **Super Poder**
  Soma dos atributos principais, considerando a inversão da densidade populacional.

---

### 📊 Resultado da Comparação

```text
Populacao: Carta 1 venceu (1)
Area: Carta 1 venceu (1)
PIB: Carta 1 venceu (0)
Pontos Turisticos: Carta 1 venceu (0)
Densidade Populacional: Carta 1 venceu (0)
PIB per Capita: Carta 1 venceu (0)
Super Poder: Carta 1 venceu (0)
```

### 📌 Legenda

* `1` → Verdadeiro (Carta 1 venceu)
* `0` → Falso (Carta 1 não venceu)

---

## 🛠️ Tecnologias Utilizadas

* Linguagem C
* Compilador GCC
* Terminal / Prompt de Comando

---

## ▶️ Como Compilar e Executar

```bash
gcc super_trunfo_mestre.c -o super_trunfo
./super_trunfo
```

---

## 📚 Considerações Finais

Este projeto tem caráter **didático**, com foco no aprendizado de:

* Entrada e saída de dados em C
* Uso de variáveis e tipos de dados
* Operações matemáticas
* Comparações lógicas

O código pode ser expandido futuramente para incluir novas funcionalidades, como menus, mais cartas ou interface gráfica.

---

👨‍🎓 *Projeto acadêmico – Introdução à Programação*



