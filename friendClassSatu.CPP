#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{ 
private:
    string nama;
public:
    void setNama(string pNama){
        friend class siswa; // deklarasi friend class
    }
}
private:
    string nama;
public:
    void setNama(string pNama){
    void setNama(string pNama)
        friend class siswa; // deklarasi friend class
    
};

class siswa
{
private:
    int id;

public:
    void setId(int pId);
    void displayAll(orang &a)
    {
        cout << id << endl << a.nama << endl;
    }
}