
# BasicX Language

BasicX is a simple programming language designed for educational purposes, created by Aditya Kumar Jha. It supports basic arithmetic operations and has a simple syntax for expressing mathematical expressions.

## Table of Contents

1. [Introduction](#introduction)
2. [Features](#features)
3. [Getting Started](#getting-started)
   - [Prerequisites](#prerequisites)
   - [Building the Interpreter](#building-the-interpreter)
   - [Running the Interpreter](#running-the-interpreter)
4. [Usage](#usage)
   - [Example Programs](#example-programs)
5. [Contributing](#contributing)
6. [License](#license)

## Introduction

BasicX is a minimalistic language for evaluating mathematical expressions. It was created to help understand the concepts of language design and implementation, including parsing, interpretation, and memory management. The language features a straightforward syntax to facilitate learning and experimentation with programming language concepts.

## Features

- **Arithmetic Operations:** Supports basic arithmetic operations such as addition (+), subtraction (-), multiplication (*), and division (/).
- **Simple Syntax:** Provides an easy-to-understand syntax for defining and evaluating expressions.
- **Error Reporting:** Includes error reporting for invalid expressions and syntax errors.
- **Basic I/O:** Supports basic input and output functionalities.

## Getting Started

### Prerequisites

Before you start, ensure you have the following installed:

- **GCC (GNU Compiler Collection):** Required for compiling C programs.
- **A Text Editor:** For creating and editing BasicX source files.

### Building the Interpreter

1. **Clone the Repository:**

   ```sh
   git clone <repository-url>
   cd BasicX
   ```

2. **Compile the Source Code:**

   Compile the individual C files to object files:

   ```sh
   gcc -c src/lexer.c -o src/lexer.o -Iinclude
   gcc -c src/parser.c -o src/parser.o -Iinclude
   gcc -c src/interpreter.c -o src/interpreter.o -Iinclude
   gcc -c src/ast.c -o src/ast.o -Iinclude
   gcc -c src/errors.c -o src/errors.o -Iinclude
   gcc -c bin/main.c -o bin/main.o -Iinclude
   ```

3. **Link the Object Files:**

   Create the final executable by linking the object files:

   ```sh
   gcc -o output_executable bin/main.o src/lexer.o src/parser.o src/interpreter.o src/ast.o src/errors.o
   ```

### Running the Interpreter

1. **Prepare a BasicX Source File:**

   Create a file with a `.bx` extension, such as `example.bx`.

2. **Run the Interpreter:**

   ```sh
   ./output_executable example.bx
   ```

## Usage

### Example Programs

To demonstrate the capabilities of BasicX, here are some example programs:

- **Addition Example:**

  Create a file named `addition.bx` with the following content:

  ```basicx
  10 + 20
  ```

  Expected Output:

  ```sh
  30
  ```

- **Multiplication Example:**

  Create a file named `multiplication.bx` with the following content:

  ```basicx
  6 * 7
  ```

  Expected Output:

  ```sh
  42
  ```

- **Division Example:**

  Create a file named `division.bx` with the following content:

  ```basicx
  50 / 5
  ```

  Expected Output:

  ```sh
  10
  ```

## Contributing

We welcome contributions to BasicX! To contribute:

1. **Fork the Repository:**
   
   Create your own copy of the repository on GitHub.

2. **Create a New Branch:**

   ```sh
   git checkout -b <branch-name>
   ```

3. **Make Your Changes:**

   Implement your feature or bug fix, and test it thoroughly.

4. **Submit a Pull Request:**

   Push your changes and submit a pull request with a detailed description of your modifications.

## License

This project is licensed under the [Apache License 2.0](LICENSE). See the LICENSE file for more details.
