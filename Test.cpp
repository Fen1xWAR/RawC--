#include <iostream>
#include <clocale> // для погдключения русской локали 
#include <string.h>
#include <stdio.h>  //strcat

using namespace std;

int main(int argc, char *argv[]) {

    char* slovo1  =  "proger";
    char* slovo2  =  "riger";

    char* slovo = new char[strlen(slovo1) + strlen(slovo2) + 1];
    strcat(slovo, slovo1);
    strcat(slovo, slovo2);
    printf("%s", slovo);;
    return 0;
}