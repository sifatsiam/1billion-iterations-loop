#include <stdio.h>
#include <time.h>

int main() {
    int i, j, k;
    long long count = 0;
    
    clock_t start, end;
    double time_taken;

    start = clock();

    // Three nested loops that together execute 1 billion iterations
    for (i = 0; i < 1000; i++) {
        for (j = 0; j < 1000; j++) {
            for (k = 0; k < 1000; k++) {
                count++;
            }
        }
    }

    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    
    printf("Completed %lld iterations\n", count);
    printf("Time taken: %f seconds\n", time_taken);

    return 0;
}
