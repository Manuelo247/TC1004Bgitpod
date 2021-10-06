#include <unistd.h>
#include <signal.h>
#include <stdio.h>

void handle(int numsignal){
    printf("JAJAJAJA %d\n", numsignal);
}

int main(){
    //ps -fe para ver el numero de los procesos

    //ctrl c es equivalente SIGINT, si vemos en "kill -l" SIGINT vale 2
    signal(2,handle);
    while(1){
        printf("trabajando\n");
        sleep(1);
    }
    return 0;
}