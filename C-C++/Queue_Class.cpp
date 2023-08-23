#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

template <typename T>
void print(queue<T> q){
	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop;
	}	
}

int main()
{	
	queue<int> q;

	//cout << q.empty() << endl;
	q.push(5);
	q.push(1);
	q.push(6);
	//cout << q.empty() << endl;
	cout << q.front() << endl;
	cout << q.back() << endl;
	cout << "Size : " << q.size() << endl;
	q.pop(); // ilk giren ilk çıkar FIFO (FIRST IN FIRST OUT )
	cout << q.front() << endl; 
	cout << q.size() << endl;
	queue<int> q1 (q);
	cout << q1.front() << endl;
	cout << "q1 size : " << q1.size() << endl;
	q1.pop();
	cout << "q1 size : " << q1.size() << endl;
	cout << "q size: " << q.size() << endl;
	print(q);
	print(q1);
	cout << q.size() << endl;
	return 0;
}