#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int compareIntegers(const void* a, const void* b) {

    return (*(int*)a - *(int*)b);

}


int main() {

    int array1[] = {5, 9, 10, 4, 2};
    int array2[] = {5, 9, 10, 4, 2};

    qsort(array1, 5, sizeof(int), compareIntegers);

    qsort(array2, 5, sizeof(int), [](const void* a, const void* b) {

        return *(int*)b - *(int*)a;

    });

    cout << "The ascending order of these integers is: \n";

    for(int a: array1) {

        cout << a << " ";

    }

    cout << "The descending order of these integers is: \n";

    for(int b: array2){

        cout << b << " ";
    }


}