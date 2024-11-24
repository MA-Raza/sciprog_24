# Practical 07  
  
**(ACM40660- Scientific Programming Concepts- 2024/25 Autumn)**  
  
## Author:  
* **Name:** Muhammad Ahmad Raza  
* **Student Number:** 23212489  
* **Institute:** UCD School of Mechanical and Materials Engineering, University College Dublin (UCD), Ireland  
  
## Introduction:  
This directory contains the code files for Practical 07.  

* The C code contained in file `compute_e.c` estimates the value of constant $e$ using factorials.

* The C code contained in file `pointers.c` demostrate the use of pointers and dynamic memory allocation in C by creating and printing out a 1x5 vector of ones.

## Compiling:

To compile `compute_e.c` execute:  

```bash
gcc -o compute_e compute_e.c
```

To compile `pointers.c` execute:  

```bash
gcc -o pointers pointers.c
```

## Running:  

Run the compiled `compute_e.c` using:  

```bash
./compute_e
```
The output should be:

```bash
Please enter the order you wish to use 
10
1.0000000000000000
0.5000000000000000
0.1666666666666667
0.0416666666666667
0.0083333333333333
0.0013888888888889
0.0001984126984127
0.0000248015873016
0.0000027557319224
0.0000002755731922
e is estimated as 2.7182818011, with difference -2.731266e-08
```

Run the compiled `pointers.c` using:  

```bash
./pointers
```
The output should be:  

```bash
1 1 1 1 1
```

