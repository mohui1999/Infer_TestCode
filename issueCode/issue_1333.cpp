#include <cstdio>
#include <cstdlib>
#include <ctime>
int main() {
    int x[10] = {}; // Zero initialise here - x is therefore always initialised

    srand(time(NULL));

    for(int i=0; i<100; ++i) {
        int k = rand() % 10;
        if(x[k] < 3) { // Error here
            printf("Package for %i\n", k);
            x[k]++; // and here
        } else {
            printf("%i has too many packages\n", k);
        }
    }
    return 0;
}