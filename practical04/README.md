# Practical 04  
  
**(ACM40660- Scientific Programming Concepts- 2024/25 Autumn)**  
  
## Author:  
* **Name:** Muhammad Ahmad Raza  
* **Student Number:** 23212489  
* **Institute:** UCD School of Mechanical and Materials Engineering, University College Dublin (UCD), Ireland  
  
## Introduction:  

This directory contains the code files for Practical 04.  

* The C code contained in file `trapezoidalrule.c` finds the integral i.e., area under the curve, of $tan(x)$ from $0$ to $60$ degrees. It computes and stores $13$ values of $tan(x)$ for the angles from $0$ to $60$ degree with a difference of $5$ degrees in an array and then uses functions to compute the area under the curve using the trapezoidal rule.

## Compiling 

To compile `trapezoidalrule.c` execute:  
```bash
gcc -o trapezoidalrule trapezoidalrule.c -lm
```
  
## Running  

Run the compiled `trapezoidalrule.c` using:  
```bash
./trapezoidalrule
```
The output should be:  
```bash
Array[0] = Tan(0.000000 deg) = Tan(0.000000 rad) = 0.000000 
Array[1] = Tan(5.000000 deg) = Tan(0.087266 rad) = 0.087489 
Array[2] = Tan(10.000000 deg) = Tan(0.174533 rad) = 0.176327 
Array[3] = Tan(15.000000 deg) = Tan(0.261799 rad) = 0.267949 
Array[4] = Tan(20.000000 deg) = Tan(0.349066 rad) = 0.363970 
Array[5] = Tan(25.000000 deg) = Tan(0.436332 rad) = 0.466308 
Array[6] = Tan(30.000000 deg) = Tan(0.523599 rad) = 0.577350 
Array[7] = Tan(35.000000 deg) = Tan(0.610865 rad) = 0.700208 
Array[8] = Tan(40.000000 deg) = Tan(0.698132 rad) = 0.839100 
Array[9] = Tan(45.000000 deg) = Tan(0.785398 rad) = 1.000000 
Array[10] = Tan(50.000000 deg) = Tan(0.872665 rad) = 1.191754 
Array[11] = Tan(55.000000 deg) = Tan(0.959931 rad) = 1.428148 
Array[12] = Tan(60.000000 deg) = Tan(1.047198 rad) = 1.732051 
Integral of tan(x) from 0 to 60 degrees = 0.695047 
```