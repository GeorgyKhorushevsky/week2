#include <stdio.h>
#include <pthread.h>
#define N 12


pthread_t _threads[N];

void *routine(void *arg) {
        printf("thread %d prints some text\n", *((int *) arg));
    pthread_exit(NULL);
}


int main() {
    for (int i = 0; i < N; i++) {
        printf("thread %d created\n", i);
        pthread_create(&_threads[0], NULL, routine, (void*) &i);
        pthread_join(_threads[0], NULL);
        printf("thread %d exits\n", i);
    }
    return 0;
}