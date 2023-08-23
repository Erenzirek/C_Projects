#include <iostream>
#include <vector>
using namespace std;

// Vektörler dinamik olarak belleği daha verimli kullanıyor
template <typename T> // tipi belirsiz
void print(vector<T>& v){           // buraya bir vektör gelecek tipi şablon olacak defalarca oluşturmamak için referansını bırakıyoruz
	typename vector<T>::iterator i = v.begin();
	while (i != v.end())
		cout << *i++ << " ";
	cout << endl;
}


int main()
{	
	/*
	vector<int> v;
	vector<int> v1(5,10); // 2 tane 10 elemanını koy 
	vector<int> v2(10); // 10 tane 0 integer değerler 0 ile başlatır değer atamazsan
	vector<int> v4(&v2[5],&v2[8]); // c2 nin 5 ile 8. elemanına kadar kopyala
	vector<int> v5(v1); // v1 i kopyala

	print(v);
	print(v1);
	print(v2);
	print(v4);
	print(v5);
	
	*/

	vector<int> v6;
	v6.insert(v6.begin(),5);
	v6.insert(v6.begin(),10);
	v6.insert(v6.end(),7);
	v6.push_back(88); // sona eleman ekliyor
	v6.pop_back(); // sondaki elemanı çıkarttık
	print(v6);
	// cout << v6.empty(); // vektörün boş olup olmadığını kontrol eder 
						// boş ise 1 verir 
	cout << *v6.begin() << endl;
	cout << *v6.end() << endl;
	cout << v6.front() << endl;
	cout << v6.back() << endl; 
	v6.erase(v6.begin()+1,v6.end()-1); // birinci elemanı atla sondan bir önceki elamnıda atla aralığı sil 
	print(v6);
	//v6.clear();
	print(v6);

	v6.push_back(65);
	v6.push_back(68);
	v6.push_back(662);

	print(v6);
	cout << v6.size() << endl; // içindeki aktif elemanları print eder
	cout << v6.capacity() << endl; // vektörün kapasitesini ifade eder mesela vektör max 4 boyuta sahip fakat bu artar sonradan
	

	vector<int> v7;
	for (int i = 0; i < 10; i++)
	 
		v7.push_back(i*2);
	//print(v7);
	

	v6.insert(v6.begin(),v7[2],v7[5]);
	print(v6);

	v6.insert(v6.end(),v7[2],v7[5]);
	//print(v6);
	vector<int> v8;
	v7.swap(v8);
	print(v7);
	cout << endl;
	print(v8);
	
	return 0;
}