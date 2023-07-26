#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<int> myArray = {5, 10, 15, 20, 25, 30};
	
	std::cout << "Dizi elemanlarý: " << std::endl;
	for(int num : myArray){
	std::cout << num << " ";
	}
	myArray.push_back(5);
	std::cout << "Dizi elemanlarý: " << std::endl; 
	for(int num : myArray){
	std::cout << num << " ";
	}
	return 0;
}
