#include <iostream>
#include <vector>
#include <list>
using namespace std;

// Vektörler dinamik olarak belleği daha verimli kullanıyor
template <typename T> // tipi belirsiz
void print(T& v){           // buraya bir vektör gelecek tipi şablon olacak defalarca oluşturmamak için referansını bırakıyoruz
	typename T::iterator i = v.begin(); // Buradaki "typename" anahtar kelimesi eklendi.
	while (i != v.end())
		cout << *i++ << " ";
	cout << endl;
}

int main()
{	
	list<int> l;
	list<int> l2(5,6);
	list<int> l3(10);
	list<int> l4(l3.begin(),l3.end());
	list<int> l5(l2);

	print(l);	
	print(l2);	
	print(l3);	
	print(l4);	
	print(l5);

	cout << l.empty() << endl;
	cout << l2.empty() << endl; 
	l.begin();
	l.end();

	cout << l2.front() << endl;
	cout << l2.front() << endl;

	l2.clear();
	print(l2);
	cout << l2.empty() << endl;
	l2.insert(l2.begin(), 5);
	l2.insert(l2.end(), 3);
	l2.insert(l2.end(), 9);
	print(l2);
	l2.push_back(10);
	print(l2);
	l2.push_front(1);
	print(l2);
	l2.pop_back();
	print(l2);
	l2.pop_front();
	print(l2);
	l2.erase(l2.begin());
	print(l2);
	cout << l2.size() << endl;
	l2.push_back(5);
	l2.push_back(7);
	l2.push_back(9);
	l2.push_back(7);
	print(l2);
	l2.remove(5);
	print(l2);
	list<int> l6;
	l6.push_back(1);
	l6.push_back(5);
	l6.push_back(9);
	l6.push_back(2);
	print(l6);
	//l2.splice(l2.begin(),l6); // l2 nin başına l6 yı alıyoruz ve l6'nın içini boşaltmış oluyoruz.
	//print(l2);
	//print(l6);
	/*
	l2.splice(l2.end(),l6); // l2 nin başına l6 yı alıyoruz ve l6'nın içini boşaltmış oluyoruz.
	print(l2);
	print(l6);
	*/
	// l2.splice(l2.end(),l6); // l2 nin başına l6 yı alıyoruz ve l6'nın içini boşaltmış oluyoruz.
	l2.merge(l6); // sıralı işlemlerde merge kullanılır	
	print(l2);
	print(l6);
/*
	l2.sort();
	l6.sort();
	print(l2);
	print(l6);
*/
/*
	l2.merge(l6);
	print(l2);
	print(l6);
*/	
	print(l2);
	l2.sort();
	print(l2);
	l2.unique(); // benzersiz şekilde sıralama yapar 
	print(l2);	
	
	

	
	//l2.remove();
 
	return 0;
}