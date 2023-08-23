#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <queue>
using namespace std;

template <typename T>
void print(T& t){
    typename T::iterator iter = t.begin();
    while (iter != t.end())
    {
        cout << *iter ++ << " ";
    cout << endl;
    }
    
}
int main() {
    set<int> s;
    cout << s.empty() << endl;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    cout << s.empty() << endl;
    print(s);

    set<int>::iterator it = s.begin();
    it = s.insert(it,10);
    return 0;
}