# Practical 05 
  
**(ACM40660- Scientific Programming Concepts- 2024/25 Autumn)**  
  
## Author:  
* **Name:** Muhammad Ahmad Raza  
* **Student Number:** 23212489  
* **Institute:** UCD School of Mechanical and Materials Engineering, University College Dublin (UCD), Ireland  
  
## Introduction:  

This directory contains the code files for Practical 05.  
  
* The C code contained in file `user_scanf.c` demonstrate how to use the `scanf` function to get a user input in C.

* The C code contained in file `fibonacci.c` generates a fibonacci series of length $n+1$ for a given $n$ value.

* The C code contained in file `arcTanh.c` computes the hyperbolic arc tan i.e., $arctanh()$, function using the Maclaurin series method and the natural logarithms method for a given precision.

## Compiling:

To compile `user_scanf.c` execute: 

```bash
gcc -o user_scanf user_scanf.c
```

To compile `fibonacci.c` execute: 

```bash
gcc -o fibonacci fibonacci.c
```

To compile `arcTanh.c` execute: 

```bash
gcc -o arcTanh arcTanh.c -lm
```

## Running:  

Run the compiled `user_scanf.c` using:  

```bash
./user_scanf
```

Nothing is returned if input is correct. '"Problem with input!!! Rerun and enter an integar and a double' is returned if user input is not an integar and a double. e.g.,

```bash
Enter an integar and a double
5 7.567
```
and
```bash
Enter an integar and a double
a 7.567
Problem with input!!! Rerun and enter an integar and a double
```

Run the compiled `fibonacci.c` using:  

```bash
./fibonacci
```

Returns fibonacci series of length $n+1$ e.g.,

```bash
Please input a positive integer
10
The fibonacci series is: 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 
```
If user input is less than 2:

```bash
Please input a positive integer
1
Input must be greater than 1
```

Run the compiled `arcTanh.c` using:  

```bash
./arcTanh
```

The output should be something like:

```bash
Please enter a positive real number delta:
0.1
The diff at -0.900000 is 0.1427933610
The diff at -0.800000 is 0.0624096220
The diff at -0.700000 is 0.0193531944
The diff at -0.600000 is 0.0211471806
The diff at -0.500000 is 0.0076394777
The diff at -0.400000 is 0.0023155969
The diff at -0.300000 is 0.0005196042
The diff at -0.200000 is 0.0000658874
The diff at -0.100000 is 0.0000020144
The diff at -0.000000 is 0.0000000000
The diff at 0.100000 is 0.0003353477
The diff at 0.200000 is 0.0000658874
The diff at 0.300000 is 0.0005196042
The diff at 0.400000 is 0.0023155969
The diff at 0.500000 is 0.0076394777
The diff at 0.600000 is 0.0211471806
The diff at 0.700000 is 0.0193531944
The diff at 0.800000 is 0.0624096220
The diff at 0.900000 is 0.1427933610
```
