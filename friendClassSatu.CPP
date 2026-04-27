#include <iostream>
#include <string>
using namespace std;

class siswa; // forward declaration

class orang{
private:
    string nama;

public:
    friend class siswa; // friend class

    void setNama(string pNama){
        nama = pNama;
    }
};

class siswa{
private:
    int id;

public:
    void setId(int pId){
        id = pId;
    }

    void displayAll(orang &a){
        cout << "ID   : " << id << endl;
        cout << "Nama : " << a.nama << endl;
    }
};

int main(){
    orang org;
    siswa s;

    org.setNama("Achmad");
    s.setId(101);

    s.displayAll(org);

    return 0;
}