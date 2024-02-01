#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h> 

int main(int argc, char *argv[]) {
    int64_t num1, num2, num3;


    if (argc >= 4) {
        num1 = strtoll(argv[1], NULL, 10);
        num2 = strtoll(argv[2], NULL, 10);
        num3 = strtoll(argv[3], NULL, 10);
    } else {
        printf("usage: ./c_program <num1> <num2> <num3> \n");
        return 1;
    }
       

    int64_t add, mul;
    clock_t start, end;
    double add_time, mul_time;


    start = clock();
    add = num1 + num2 + num3;
    end = clock();

    add_time = ((double) (end - start)) / CLOCKS_PER_SEC * 1000; //time in milliseconds.
  

    // Perform multiplication
    start = clock();
    mul = num1 * num2 * num3;
    end = clock();
    mul_time = ((double) (end - start)) / CLOCKS_PER_SEC * 1000; //time in milliseconds


    // Output results

    //printf("Add time: %d ms\n", add_time);
    //printf("Mul time: %d ms\n\n", mul_time);
    printf("mul_time: %lf   add_time%lf\n", mul_time, add_time);

    return 0;
}
