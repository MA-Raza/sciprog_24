# Practical 09  
  
**(ACM40660- Scientific Programming Concepts- 2024/25 Autumn)**  
  
## Author:  
* **Name:** Muhammad Ahmad Raza  
* **Student Number:** 23212489  
* **Institute:** UCD School of Mechanical and Materials Engineering, University College Dublin (UCD), Ireland  
  
## Introduction:  
This directory contains the code files for Practical 09.  

* The C code conatined in `main_stub.c` tells if a $n\timesn$ matrix in a given file is a magic square or not. A magic square is a $n\timesn$  matrix where the row sums, column sums and diagonal sums are equal to the same number.

## Compiling:  

To compile `GDC.c` execute: 
 
```bash
gcc -o main_stub main_stub.c
```

## Running:  

Run the compiled `main_stub.c` using:  

```bash
./main_stub
```

The output should be:  

```bash
Enter file name: magic_square.txt
No. lines, 3
This is magic
```

Or:  

```bash
Enter file name: not_magic_square.txt
No. lines, 3
This is not magic
```

