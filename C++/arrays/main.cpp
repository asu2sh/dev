#include<iostream>

int main() {
	int x, n;
	std::cout << "Enter the number of items:" << "\n";
	std::cin >>n;

	int *arr = new int(n);      
    
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