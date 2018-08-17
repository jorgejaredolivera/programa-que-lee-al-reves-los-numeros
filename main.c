/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: olivera
 *
 * Created on 17 de agosto de 2018, 01:43 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int a,b,c,x1,x2,x3,palabra;
    printf("programa para que leas al reves cualquier numero de 3 digitos");
    printf("escribe el primer numero de 3 cifras que se te venga a la cabeza");
    scanf("%d",&palabra);
    a = palabra/ 100;
    x1 = palabra%100;
    b = x1/ 10;
    x2 = x1%10;
    c = x2/ 1;
    x3 = x2%1;
    printf("el numero %d se lee al reves de la forma = %d%d%d",palabra,c,b,a);

    return 0;
}

