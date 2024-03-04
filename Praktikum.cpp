#include <iostream>
using namespace std;

int main(){
int nMatematika, nFisika, nRerata;
string status;

cout << "Masukan Nilai Matematika = " << endl;
cin >> nMatematika;
cout << "Masukan Nilai Fisika = " << endl;
cin >> nFisika;

nRerata = (nMatematika+nFisika)/2;

if (nRerata > 60 || nMatematika > 70){
    status = "Lulus";
}
else{
    status = "Tidak Lulus";
}
cout << "Anda Dinyatakan : " << status;
return 0;

}