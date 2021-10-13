#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 10000
int saldo;

void *printhola(void *arg){
    char *p = (char *)arg;
    printf("Hola desde hilo%s\n",p);

}

void *suma100(void *arg){
    int lsaldo = saldo;
    lsaldo += 100;
    saldo = lsaldo;
    pthread_exit(NULL);
}

int main(){
    pthread_t threads[NUM_THREADS];
    char *s = "Soy un hilo";
    for(int i = 0; i < NUM_THREADS; i++){
        pthread_create(&threads[i],NULL,suma100,(void*)s);
    }
    
    for(int i = 0; i < NUM_THREADS; i++){
        pthread_join(threads[i],NULL);
    }

    printf("El saldo es %d\n",saldo);
    pthread_exit(NULL);

}