// 1. Cara insertionsort membandingkan serta menukar elemen-elemen = 
//  - membagi data menjadi 2 bagian, yaitu sorted list dan unsorted list 
//  - Kemudian bandingkan jumlah sorted list dengan jumlah di kolom pertama unsorted list 
//  - Jika bilangan pada sorted list lebih besar dari bilangan pertama pada unsorted list, maka sorted list dan unserted list akan bertukar tempat.
//  - Lakukan hal yag sama berulang kali hingga mendapat bilangan yang urut
// 2. Cara selectionsort membandingkan serta menukar elemen-elemen =
//  - yang pertama, lihat jumlah bilangan pada kotak pertama(0) apakah bilangan tersebut lebih besar/lebih kecil dari bilangan pada kotak kedua(1)
//  - Jika bilangan kotak pertama(0) lebih kecil dari kotak kedua(1) maka dibiarkan saja dan berpindah dari kotak pertama(0) ke kotak kedua(1) untuk membandingkan dengan jumlah
//    yang ada pada kotak ketiga(2)
//  - Jika bilangan pada kotak pertama (0) lebih besar daripada kotak kedua(1) maka harus ditukar
//  - lakukan hal yang sama hingga selesai dan mendapat urutan bilangan dari kecil ke besar
// 3. Cara mengetahui jumlah langkah/pass adalah dengan menghitung jumlah dari membandingkan antara kotak sortir, bila ada 5 kotak sortir maka langkah pertama bisa dimulai pada
//    pembandingan pertama pada kotak pertama(0) dan kotak kedua(2). Hal yang yang sama terus dilakukan hingga pembandingan selesai.
//    


#include <iostream>
using namespace std;
int far[26];
int n;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada faris : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nFaris dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "======================" << endl;
    cout << "Masukkan Elemen faris" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> far[i];
    }

}

void selectionsort() {
    int i, temp, j;

    for (i = 1; i <= n - 1; i++) { 

        temp = far[i]; 

        j = i - 1; 

        while (j >= 0 && far[j] > temp) 
        {
            far[j + 1] = far[j]; 
            j--; 
        }
        far[j + 1] = temp; 
    }
}

void display() {
    cout << endl;
    cout << "=====================================" << endl;
    cout << "Element faris yang telah tersusun" << endl;
    cout << "=====================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << far[j];
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;

}

int main() {

    input();
    selectionsort();
    display();
    system("pause");

    return 0;
}

