#include <iostream> 
using namespace std; 
  
int* fun(int arraySize) 
{ 
    int* arr = new int[arraySize]; 
  
    for(int i = 0; i < arraySize; i++) {
        arr[i] = i * 10;
    }
  
    return arr; 
} 
  
int main() 
{ 
    int* ptr = fun(2); 

    for (int i = 0, len = sizeof(ptr) / sizeof(int); i < len; i++) {
        printf("%d, ", ptr[i]);
    }

    printf("\n");

    return 0; 
} 