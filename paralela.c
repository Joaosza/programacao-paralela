#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{

    int id, nt;

    #pragma omp parallel private(id, nt)
    {
        id = omp_get_thread_num();
        nt = omp_get_num_threads();

        printf("ola id %i nt %i/n ", id, nt);
    }

    return 0;
}
