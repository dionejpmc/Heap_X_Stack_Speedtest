#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;



const int SIZE = 10000000; // Tamanho do vetor


void stack(){
	int a = 5;
}

void heap(){
	int * p = new int;
	*p = 5;
	delete p;
}

int main() {
  
    auto start = high_resolution_clock::now();
	
	for( int i = 0; i < SIZE; i++)
		stack();
	
    auto end = high_resolution_clock::now();
    cout << "Tempo usando stack: " << duration_cast<milliseconds>(end - start).count() << " microssegundos" <<endl;

    // Medir o tempo de alocação e preenchimento usando heap
    start = high_resolution_clock::now();
	for( int i = 0; i < SIZE; i++)
		heap();
	

    end = high_resolution_clock::now();
    cout << "Tempo usando heap: " << duration_cast<milliseconds>(end - start).count() << " microssegundos" <<endl;
  

    return 0;
}
