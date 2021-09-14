#include<iostream>

int main() {
	int x, n;
	std::cout << "Enter the number of items:" << "\n";
	std::cin >>n;

	int arr[n];
	// if declared at file scope: 	
	// typically resides on the datasegment 
	// while if declared at block scope:
	// typically resides on the stack

	int *arr = new int(n);
	// typically resides on the heap
   
    
    //! 'new' keyword
    // Syntax: pointer_variable = new data_type;

	std::cout << "Enter " << n << " items" << std::endl;
	for (x = 0; x < n; x++) {
		std::cin >> arr[x];
	}
	std::cout << "You entered: ";
	for (x = 0; x < n; x++) {
		std::cout << arr[x] << " ";
	}
    std::cout << std::endl;

    delete [] arr;

	return 0;
}

// char example[10];
// example is an array of 10 chars. Depending on context, it has automatic or static storage.
// The size can only be compile time constant. The array is destroyed and deallocated automatically.

// char* example = new char[10];
// example is a pointer. It is not an array. It points to first element of an array in dynamic storage.
// The size of dynamic array can be determined at runtime. The array is not destroyed and deallocated automatically.
// If not deallocated, the memory will leak.

// Dynamic allocation is generally slower than static or automatic. On the other hand,
// the amount of memory available for automatic storage is typically very limited.

// Bare owning pointers should be avoided. Best practice is to use a smart pointer
// or a RAII container such as std::vector when dynamic array is needed.