#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
    char c;
    char may;
    int n;
    do{
    n = read(STDIN_FILENO,&c,1);
    may = toupper(c);
    write(STDOUT_FILENO,&may,1);
    }while(n != 0);
    return 0;
    //ctrl d - fin de archivo

    // cat imprime en texto lo que contenga un archivo
    //"|" liga la salida de uno con la entrada de otro 
    //">" dice que la salida de uno se guarda en un archivo con ese nombre

    //cat fork.c | ./minamay //liga la salida de car del archivo fork con la entrada del minamay
    //cat fork.c | ./minamay > salida.txt

    //wc cuenta lineas, palabras y caracteres, con "-l" solo devuelve las palabras

    //ls | wc -l
}