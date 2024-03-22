//jawaban
// 1. cara membandingkan dan menukar di buble sort 
//    a. buble sort akan menyeken atau mensortir sesuai dengan urutan data 
//    b. kemudian kedua data akan di bandingkan antara yang kecil dan besar (proses membandingkan dari yang paling besar pertama sampai ke yang terakhir)
//    c. akan di tukar jika ada data yang urutannya tidak sesuai 
//    d. kemudian akan diurutkan dari kecil ke besar 
//2. cara shell sort menukar dan membandingkan element-elemennya yaitu 
//   a. dengan cara membagi kedalam beberapa bagian 
//   b. setelah di bagi kedalam beberapa bagian makan akan dilakukan penyortiran di setiap bagiannya
//   c. setelah disortir makan akan di bandingkan jika antara yang kecil dan yang besar 
//   d. setelah selesai di bandingkan selanjutnya akan di tukar antara yang kecil dan besar
//   e. setelah di tukar maka akan di satukan menjadi 1 bagian lagi dan akan kembali ke langkah a jika belum urut
//3. menggunakan selection sort karena selection sort memyortir dengan cara mencari nilai paling kecil atau minimum untuk dibandingkan. 
 

#include <iostream>
using namespace std;

int i, n, temp, j;
int arr [69]; 

void input() {
	while (true) {
		cout << "Masukan Banyaknya Array Pada Elemen";
		cin >> n;
		if (n <= 69)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 69 elemen.\n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke- " << (i + 1) << ":";
		cin >> arr[i];

	}
}

void Rinakit() {
	
	
	for (int i = 0; i < n - 1; i++) {
		int temp = arr[i];
		j = i - 1;
		int min_index = j;
		for (j = 0; j < n - 1; j++) {
			if (arr[i] < arr[min_index]) {
				min_index = i;
			}
			arr[j + 1] = temp;
			cout << "pass ke-" << i << ":";
			
		}
	}
}



void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang Telah tersusun" << endl;
	cout << "=================================" << endl;
	cout << endl;

	for (int j = 0; j < n; j++) {
		cout << arr[j];
		if (j < n - 1) {
			cout << "--->";
		}
	}
	cout << endl;
	cout << endl;

}

int main()
{
	input();
	Rinakit();
	display();
}
