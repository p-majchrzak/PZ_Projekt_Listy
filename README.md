# Lista dwukierunkowa w C++

**Autor:** Piotr Majchrzak

## Opis projektu

Projekt przedstawia implementację listy dwukierunkowej w języku C++. Lista przechowuje elementy na stercie i umożliwia poruszanie się po nich w obu kierunkach.

## Wykorzystane wzorce projektowe

- **Factory** – odpowiada za tworzenie nowych węzłów listy.
- **Iterator** – umożliwia przechodzenie pomiędzy elementami listy.

## Struktura projektu

| Plik | Opis |
|---|---|
| `Node.hpp` | Deklaracja klasy węzła |
| `Node.cpp` | Implementacja klasy węzła |
| `NodeFactory.hpp` | Deklaracja fabryki węzłów |
| `NodeFactory.cpp` | Implementacja fabryki węzłów |
| `Iterator.hpp` | Deklaracja iteratora |
| `Iterator.cpp` | Implementacja iteratora |
| `List.hpp` | Deklaracja listy dwukierunkowej |
| `List.cpp` | Implementacja listy dwukierunkowej |
| `main.cpp` | Testowanie działania programu |

## Funkcjonalności

- Dodawanie elementu na początek listy.
- Dodawanie elementu na koniec listy.
- Dodawanie elementu pod wskazanym indeksem.
- Usuwanie elementu z początku listy.
- Usuwanie elementu z końca listy.
- Usuwanie elementu pod wskazanym indeksem.
- Wyświetlanie całej listy.
- Wyświetlanie listy w odwrotnej kolejności.
- Wyświetlanie następnego elementu.
- Wyświetlanie poprzedniego elementu.
- Czyszczenie całej listy.

## Technologie

- C++
- Git
- GitHub
- Doxygen

## Testowanie

Działanie poszczególnych metod jest sprawdzane w funkcji `main()`. Testy obejmują dodawanie i usuwanie elementów, wyświetlanie listy, działanie iteratora oraz czyszczenie listy.

## Dokumentacja

Dokumentacja kodu jest generowana za pomocą programu Doxygen. Dokumentacja projektowa jest przygotowywana w formacie LaTeX.

## Kontrola wersji

Projekt jest rozwijany z wykorzystaniem systemu Git, a zmiany są zapisywane w repozytorium GitHub za pomocą commitów.
