#include <iostream>
#include <vector>
using namespace std;

// Vektörler dinamik olarak belleği daha verimli kullanıyor

int main()
{	
	vector<int> v;
	vector<int> v1(5,10); // 2 tane 10 elemanını koy 
	vector<int> v2(10); // 10 tane 0 integer değerler 0 ile başlatır değer atamazsan
	vector<int> v4(&v2[5],&v2[8]); // c2 nin 5 ile 8. elemanına kadar kopyala
	vector<int> v5(v1); // v1 i kopyala


	vector<int>::iterator i = v1.begin();
	while (i != v1.end())
		cout << *i++;
	return 0;
}