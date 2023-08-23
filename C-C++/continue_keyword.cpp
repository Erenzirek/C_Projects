#include <iostream>
using namespace std;

int main()
{
   /*Break: Döngüde break çalıştırıldığı zaman döngü sona ermektedir.*/
   /*Continue: Döngüde continue deyimi çalıştırıldığı zaman döngü altındaki komutlar çalıştırılmaadan başa dönmektedir.*/
     int i = 0;

     for ( i = 0; i < 10; i++)
     {
        if (i == 3 || i == 5)
        {
            continue;
        }
        cout << "i : " << i << endl;
     }
     
    

    
    return 0;
}