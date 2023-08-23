#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
using namespace std;

// LAST IN LAST OUT ----> LILO

template <typename T>
void print(stack<T> s){
	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}	
}

// 20 3 5 10 

int main(){/*	
	stack<int> s;
	cout << s.empty() << endl;
	s.push(10);
	s.push(5);
	s.push(22);
	s.push(68);
	cout << s.empty() << endl;
	cout << s.top() << endl;
	//s.pop();
	cout << s.top() << endl;

	cout << "size " << s.size() << endl;
	print(s);
*/
	string str = "kabak";
	stack<char> s;
	queue<char> q;
	for (int i = 0; i < str.length(); i++)
	{
		s.push(str[i]);
		q.push(str[i]);
	}

	bool isPalindrom = true;
	while(!s.empty() and !q.empty()){
		if(s.top() != q.front())
		{
			isPalindrom = false;
			break;
		}
		s.pop();
		q.pop();
	}

	if (isPalindrom)
	{
		cout << str << " word is palindrom ";
	}
	else{
		cout << str << " word isn't palindrom ";
	}
	
	
	return 0;
}