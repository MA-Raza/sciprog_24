# Practical 03  
  
**(ACM40660- Scientific Programming Concepts- 2024/25 Autumn)**  
  
## Author:  
* **Name:** Muhammad Ahmad Raza  
* **Student Number:** 23212489  
* **Institute:** UCD School of Mechanical and Materials Engineering, University College Dublin (UCD), Ireland  
  
## Introduction:  
This directory contains the code files for Practical 03.  

* The C code contained in file `integral.c` calculates the integral of $tan(x)$ from $0$ to $\frac{\pi}{3}$ using the trapezoidal rule and compare the result with analytical solution i.e., $\int_{0}^{\frac{\pi}{3}} \tan(x) \, dx = \log(2)$.

## Compiling:  

To compile `integral.c` execute:  
```bash
gcc -o integral integral.c -lm
```
  
## Running:  

Run the compiled `integral.c` using:  
```bash
./integral
```
The output should be:  
```bash
Integration of tan(x) from 0 to pi/3 using trapezoidal rule = 0.695045 
Real value of the integral i.e., ln(2) = 0.693147 
Percentage error = -0.273796
```
