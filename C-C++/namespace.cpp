#include <iostream>

namespace ns1
{
    void func1(){
        std::cout << "func1() ns1" << std::endl;
    }
}

namespace ns2
{
    void func2(){
        std::cout << "func1() ns1" << std::endl;
    }
}

template <class T>
const T& min(const T& a, const T& b){
    return a;
}

int main()
{
  using std::cout;
  using std::endl;
  cout << "min " << min(4,5) << endl; 
  ns1::func1();
  ns2::func2();
    return 0;
}