#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define N 100000
#define T 4

int sum = 0;
pthread_mutex_t mutex;

void *array_sum(void *arg)
{
    int *A = (int *)arg;
    int i;
    for (i = 0; i < N / T; i++)
    {
        pthread_mutex_lock(&mutex);
        sum += A[i];
        pthread_mutex_unlock(&mutex);
    }

    pthread_exit(NULL);
}

int main()
{
    pthread_mutex_init(&mutex, NULL);
    pthread_t t[T];

    int A[N], i;
    for (i = 0; i < N; i++)
        A[i] = rand() % 10;
    for (i = 0; i < T; i++)
        pthread_create(&t[i], NULL, array_sum, &A[i * N / T]);
    for (i = 0; i < T; i++)
        pthread_join(t[i], NULL);
    printf("%d\n", sum);
    return 0;
}