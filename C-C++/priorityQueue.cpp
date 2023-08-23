#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Öncelikli kuyruk oluşturma
    priority_queue<int> pq;

    // Eleman ekleme
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    // En yüksek önceliğe sahip elemana erişim
    cout << "Top element: " << pq.top() << endl;

    // Elemanları sırasıyla çıkartarak öncelikli kuyruğu boşaltma
    cout << "Elements in priority queue: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}