# 🎴 Super Trunfo – Comparação de Países (Nível Intermediário)

Projeto desenvolvido para a disciplina de **Introdução à Programação**, com o objetivo de aprofundar o uso da linguagem **C**, aplicando estruturas de decisão como `switch`, `if/else` aninhados e cálculos derivados, por meio de um jogo inspirado no **Super Trunfo**.

---

## 📌 Objetivo do Projeto

O sistema permite o **cadastro de duas cartas de países** e realiza a **comparação entre elas** com base em um atributo escolhido pelo usuário através de um **menu interativo**.

O projeto é uma continuação da etapa básica, evoluindo para um nível intermediário com maior controle lógico e interação com o usuário.

---

## ⚙️ Funcionalidades

* Cadastro de duas cartas contendo:

  * Nome do país
  * População
  * Área territorial (km²)
  * PIB
  * Número de pontos turísticos

* Cálculo automático de:

  * **Densidade demográfica** (População / Área)

* Menu interativo para escolha do atributo de comparação:

  1. População
  2. Área
  3. PIB
  4. Pontos turísticos
  5. Densidade demográfica

* Comparação entre as cartas utilizando:

  * Estrutura `switch` para seleção do atributo
  * Estruturas `if / else` aninhadas para determinar o vencedor

* Exibição clara do resultado da comparação

* Tratamento de opção inválida no menu (`default`)

---

## 📏 Regras de Comparação

* **Regra geral:** vence a carta com o **maior valor** no atributo escolhido.
* **Exceção:** para **Densidade Demográfica**, vence a carta com o **menor valor**.
* Em caso de valores iguais, o resultado será **Empate**.

---

## 🖥️ Exemplo de Saída

```
Atributo: População

Brasil: 203000000
Argentina: 45000000

Resultado: Brasil venceu!
```

---

## 🧠 Conceitos Trabalhados

* Entrada e saída de dados (`scanf` / `printf`)
* Estrutura de decisão `switch`
* Estruturas condicionais `if / else`
* Condicionais aninhadas
* Cálculos com variáveis `int` e `float`
* Organização e legibilidade de código
* Validação básica de entrada do usuário

---

## 🛠️ Tecnologias Utilizadas

* Linguagem: **C**
* Compilador: **GCC**
* Ambiente: Terminal / Prompt de Comando

---

## ▶️ Como Compilar e Executar

No terminal, dentro da pasta do projeto:

```bash
gcc super_trunfo.c -o super_trunfo
./super_trunfo
```

---

## 📚 Observações Finais

Este projeto foi desenvolvido com foco acadêmico, priorizando clareza, organização e aplicação correta dos conceitos fundamentais de programação estruturada em C.

Ele serve como base para futuras evoluções, como:

* Uso de `struct`
* Comparações múltiplas
* Modularização do código

---

📌 **Autor:** Daniel Francisco Sabino Rocha
📘 **Curso:** Análise e Desenvolvimento de Sistemas
🏫 **Disciplina:** Introdução à Programação
