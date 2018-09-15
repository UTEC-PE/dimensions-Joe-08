#include <cstdlib>
#include <iostream>

#include "vector.h"

using namespace std;

template <typename T>
struct Dimensions {      
    int operator()(int* coordinates, int* sizes, int dimensions) {
        int multi = 1;
        int suma = coordinates[0]-1;
        for(int i = 1; i <= dimensions-1; i++){
        	multi *= sizes[i-1];
        	suma += (coordinates[i]-1)*multi;
        }
        return suma;
    }
};

struct Integer {
       typedef int T;
       typedef Dimensions<T> Operation;
};

int main(int argc, char *argv[]) {
    //system("pause");
    return EXIT_SUCCESS;
}