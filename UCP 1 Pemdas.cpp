// 1. deklarasi variabel :
//      - string : string digunakan untuk menyimpan informasi nama atau kata "gibran"
//      - int : int atau interger digunakan untuk menyimpan bilangan bulat, baik positif atau negatif. "18"
//      - float : float digunakan untuk menyimpat bilangan desimal atau pecahan "0.9"

// 2. prosedur dan fungsi digunakan untuk memudahkan menyusun program dan memudahkan dalam memanggilnya kembali.
//    - prosedur biasanya digunakan untuk membuat prosedur input, display.
//    - fungsi biasanya digunakan untuk membuat fungsi seperti menghitung luas persegi panjang
//    contohnya : dalam membuat program "menghitung luas persegi panjang" kita memerlukan prosedur input, fungsi hitung luas, dan prosedur display.

// 3. Looping digunakan untuk mengulang program dengan menggunakan for, while, do...while
//    contoh: jika kita membuat suatu program prosedur input, dan kita membatasi data yang di input tidak boleh lebih dari 10, maka kita menggunakan looping for

//4. conditional statement digunakan jika program butuh "jika-maka"
//   contoh : dalam membuat program untuk menentukan siswa lolos ujian matematika, jika nilai 
//   matematika lebih dari 60 siswa dianggap lulus, namun jika nilai siswa kurang dari 60 maka dianggap tidak lulus. 
//   dalam kondisi tersebut conditional statement digunakan dalam program tersebut

//5. struct digunakan jika kita ingin membuat struktur dalam suatu program
//    contoh: dalam program data perpustakaan kita memerlukan membuat struktur buku.pada struktur buku kita membutuhkan data judul buku, data penulis, data tahun
//    dicetak, dan data halaman buku.dengan struktur itu kita dapat membuat tipe data "buku" yang menampung informasi tersebut

#include <iostream>
using namespace std;

string kota;
int kualitasUdara;
int kualitasSensor;

void InputKota() {
    cout << "Masukkan Nama Kota : ";
    cin >> kota;
    cout << "Masukkan Kualitas Udara : ";
    cin >> kualitasUdara;
    cout << "Masukkan nilai sensor : ";
    cin >> kualitasSensor;
}

void kondisi() {
    if (kualitasUdara >= 75 or kualitasSensor >= 45 ) 
    {
        cout << "Kualitas udara : Tidak Sehat" << endl;
    }
    else {
        cout << "Kualitas udara : Sehat" << endl;
    }
}

void display()
{
    cout << "Nama Kota : " << kota << endl;
    cout << "status : " << kondisi << endl;
}

int main()
{
    InputKota();
    kondisi();

    return 0;
}
