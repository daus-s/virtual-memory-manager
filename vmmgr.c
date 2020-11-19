#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//
// Created by Daus Carmichael on 11/17/20.
//
#define SIZE 65536
#define INPUT 4096



int main(int argc, char** argv)
{
    if (argc!=2)
    {
        perror("illegal paramter use:"
               "_____________________"
               "./vmmgr [filename:str]")
    }
    char* filename = argv[1];
    //fopen and operations on file
    fp = fopen(filename, 'r');
    char* str = malloc(INPUT);
    str = fread(str, INPUT, 1, fp);

    /*get the string value into str, then parse by tok*/
    char* entry = strtok(str, ",");
    while (entry)
    {
        int addr = atoi(entry);
        entry = strtok(NULL, ",");
        //perform operation with new address: [int addr]
        
    }

    malloc(SIZE);
}

