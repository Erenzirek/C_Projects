#include <iostream>
using namespace std;

int main()
{
   /*Break: Döngüde break çalıştırıldığı zaman döngü sona ermektedir.*/
   /*Continue: Döngüde continue deyimi çalıştırıldığı zaman döngü altındaki komutlar çalıştırılmaadan başa dönmektedir.*/
     int i = 0;

    while (i < 10)
    {
        if (i == 5)
        if (i == 5)
        {
            // "break" ifadesi, döngüyü sonlandırır.
            break;
        }
        cout << i << endl;
        
        // "continue" ifadesi, döngüdeki geri kalan komutları atlar ve döngünün başına döner.
        i++;
    }
    
    return 0;
}