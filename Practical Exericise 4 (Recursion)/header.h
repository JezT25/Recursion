#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define MAX 15 

void nFact();
void nFibo();
void nSum();
void rFact(int x, int prod, int end); 
void rFibo(int rec, int x, int y, int end);
void rSum(int x, int sum, int end);
int numScan(int min, int max);

#endif
