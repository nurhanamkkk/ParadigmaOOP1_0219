#include <iostream>
#include <string>
using namespace std;

class orang {
public: 
       string nama;

       orang(sting pNama) :
           nama(pNama) {
            cout << "orang dibuat\n" << endl;
      }

     ~orang() {
          cout << "orang dihapus\n" << endl;
     }
     
     int jumlah(int a, int b) {
         return a + b;
     }
};