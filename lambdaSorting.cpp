#include<iostream>

int main() {
	using std::cout;
	using std::cin;

	int arr[] = {4, 2, 3, 5, 7};
	int size = sizeof(arr) / sizeof(arr[0]);

	auto printarr = [&arr, size]() -> void {
		for(int i = 0; i < size; i++) cout << arr[i];
		cout << "\n";
	};

	auto bubbleSort = [&arr, size](int mode) -> void {
		// Mode = 1 (Ascending Order)
		// Mode = 2 (Descending Order)
		if(mode == 1) {
			for(int pass = 0; pass < size - 1; pass++) {
				for(int p = 0; p < size - pass - 1; p++) {
					if(arr[p] > arr[p+1]) {
						int temp = arr[p]; 
						arr[p] = arr[p+1];
						arr[p+1] = temp;
					}
				}
			}
		} else if(mode == 2) {
			for(int pass = 0; pass < size - 1; pass++) {
				for(int p = 0; p < size - pass - 1; p++) {
					if(arr[p] < arr[p+1]) {
						int temp = arr[p]; 
						arr[p] = arr[p+1];
						arr[p+1] = temp;
					}
				}
			}
		}
	};
	int choice;
	printarr();

	cout << "[1] Ascending Order | [2] Descending Order : ";
	cin >> choice;
	bubbleSort(choice);

	printarr();
	return 0;
}
