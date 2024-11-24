# Practical 06  
  
**(ACM40660- Scientific Programming Concepts- 2024/25 Autumn)**  
  
## Author:  
* **Name:** Muhammad Ahmad Raza  
* **Student Number:** 23212489  
* **Institute:** UCD School of Mechanical and Materials Engineering, University College Dublin (UCD), Ireland  
  
## Introduction:  
This directory contains the code files for Practical 06.  

* The C code contained in file `matrixmult.c` computes a multiplication of two matrices $A$ and $B$ resulting in matrix $C={A}\times{B}$.

## Compiling:

To compile `matrixmult.c` execute:  
```bash
gcc -o matrixmult matrixmult.c
```
## Running:  

Run the compiled `matrixmult.c` using:  
```bash
./matrixmult
```
The output should be:  

```bash
This is matrix A

  0   1   2 
  1   2   3 
  2   3   4 
  3   4   5 
  4   5   6 

This is matrix B

  0  -1  -2  -3 
  1   0  -1  -2 
  2   1   0  -1 

This is matrix C

  5   2  -1  -4 
  8   2  -4 -10 
 11   2  -7 -16 
 14   2 -10 -22 
 17   2 -13 -28
```