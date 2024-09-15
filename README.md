# C++ Projects

This repository contains three C++ programs demonstrating fundamental programming concepts:

1. **Number Guessing Game**
2. **Simple Calculator**
3. **Tic-Tac-Toe Game**

## Table of Contents

1. [Number Guessing Game](#number-guessing-game)
2. [Simple Calculator](#simple-calculator)
3. [Tic-Tac-Toe Game](#tic-tac-toe-game)
4. [Getting Started](#getting-started)


## Number Guessing Game

### Description

The Number Guessing Game is a console application where the computer generates a random number between 1 and 100. The user must guess the number. After each guess, the program provides feedback indicating whether the guess was too high, too low, or correct. The game continues until the user guesses the correct number, and it allows for restarting.

### Features

- Random number generation within a specified range.
- Input validation and user feedback.
- Option to play again after guessing correctly.

## Simple Calculator

### Description

The Simple Calculator is a basic console application that performs fundamental arithmetic operations. Users can input two numbers and choose an operation (addition, subtraction, multiplication, or division) to perform on those numbers. The program handles division by zero and displays the result of the operation.

### Features

- Supports addition, subtraction, multiplication, and division.
- Handles errors such as division by zero.
- Provides clear and concise results for the chosen operation.

## Tic-Tac-Toe Game

### Description

The Tic-Tac-Toe Game is a console-based game for two players. Players take turns marking a 3x3 grid with 'X' or 'O'. The game checks for wins, draws, and allows players to restart the game. The game board is displayed after each move, showing the current state of the board.

### Features

- Displays a formatted 3x3 game board.
- Validates player moves and checks for game outcomes.
- Provides options for restarting the game.

## Getting Started

### Prerequisites

- A C++ compiler such as `g++` or `clang++`.

### Compilation and Execution

1. **Clone the Repository**:
    ```bash
    git clone <https://github.com/gargmanya/Codsoft>
    ```

2. **Navigate to the Project Directory (Codsoft1/Codsoft2/Codsoft3)**:
    ```bash
    cd <project_directory>
    ```

3. **Compile and Run Each Program**:
    - **Number Guessing Game**:
      ```bash
      g++ -o number_guessing_game number_guessing_game.cpp
      ./number_guessing_game
      ```
    - **Simple Calculator**:
      ```bash
      g++ -o simple_calculator simple_calculator.cpp
      ./simple_calculator
      ```
    - **Tic-Tac-Toe Game**:
      ```bash
      g++ -o tic_tac_toe tic_tac_toe.cpp
      ./tic_tac_toe
      ```



