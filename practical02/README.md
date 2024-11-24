# Practical 02  
  
**(ACM40660- Scientific Programming Concepts- 2024/25 Autumn)**  
  
## Author:  
* **Name:** Muhammad Ahmad Raza  
* **Student Number:** 23212489  
* **Institute:** UCD School of Mechanical and Materials Engineering, University College Dublin (UCD), Ireland  
  
## Introduction:  

This directory contains the code files for Practical 02.  

* The C code contained in file `Conversion.c` converts a number into its binary representation, and prints out the original number, its binary representation and its length as an output.  

* The C code contained in file `Sum.c` calculates:  

$$
Sum1 = 1 + \frac{1}{2} + \frac{1}{3} + \frac{1}{4} + \dots + \frac{1}{1000}
$$

and  

$$
Sum2 = \frac{1}{1000} + \frac{1}{999} + \frac{1}{998} + \frac{1}{997} + \dots + 1
$$

and prints out the difference between the two calculated values to show that floating point addition is not associative.  

## Compiling:  

To compile `Conversion.c` execute:  

```bash
gcc -o Conversion Conversion.c -lm
```

To compile `Sum.c` execute:  

```bash
gcc -o Sum Sum.c
```

## Running:  

Run the compiled `Conversion.c` using:  

```bash
./Conversion
```
The output should be:  

```bash
The number of digits is 25  
inum=33554431,  fnum=33554432.000000, inum in binary=1111111111111111111111111
```

Run the compiled `Sum.c` using:  

```bash
./Sum
```
The output should be:  

```bash
 Sum1=7.485478
 Sum2=7.485472
 Difference between the two is 0.000007
```
