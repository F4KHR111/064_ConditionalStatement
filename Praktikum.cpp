#include <iostream>
using namespace std;

    // siswa mempunyai 2 niali yaitu matematika dan fisika
    // kemudian dihitung reratanya, jika rerata lebih dari 60
    // maka dinyatakan lulus, atau setidaknya nilai matematika
    //lebih dari 70 dan jika tidak keduanya maka
    //dinyatakan tidak lulus

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
    cout << "Rata-rata anda : " << nRerata << endl;
    cout << "Anda Dinyatakan : " << status;
    return 0;

}