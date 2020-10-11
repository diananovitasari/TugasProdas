#include <iostream>
using namespace std;
int main(void)
{
	char nama[20];
	int j1,j2,m1,m2,d1,d2;
	int selisih_jam,selisih_menit,selisih_detik;
	int waktumulai,waktuselesai;
	int total_detik;
	int lamapenggunaan;
	int selisihjam_detik;
	int selisihmenit_detik;
	int selisihdetik_detik;
	int tarif = 5000;
	int detik = 3600;
	int total_tarif;
	cout << "Program Penghitungan Billing Warnet  \n";
	cout << "Oleh Diana Novita Sari \n";
	cout << "------------------------------------ \n";
	cout << "Masukkan nama anda                   \n";
	cin >> nama;
	cout << "------------------------------------ \n";
	cout << "====== Waktu mulai penggunaan ====== \n";
	cout << endl;
	cout << "Masukkan jam:                        \n";
	cin >> j1;
	cout << "Masukkan menit:                      \n";
	cin >> m1;
	cout << "Masukkan detik:                      \n";
	cin >> d1;
	cout << "waktu mulai= " <<j1<< ":" <<m1<< ":" <<d1<< endl;
	cout << endl;
	
	cout << "===== Waktu selesai penggunaan ===== \n";
	cout << endl;
	cout << "Masukkan jam:                        \n";
	cin >> j2;
	cout << "Masukkan menit:                      \n";
	cin >> m2;
	cout << "Masukkan detik:                      \n";
	cin >> d2;
	cout << "waktu selesai= " <<j2<< ":" <<m2<< ":" <<d2<< endl;
	cout << endl;
	
	cout <<"*********************** Lama penggunaan *********************";
	cout << endl;
	selisih_jam = j2-j1;
	selisih_menit = m2-m1;
	selisih_detik = d2-d1;
	cout <<"Lama penggunaan " << selisih_jam << ":" << selisih_menit << ":" << selisih_detik<< endl;
	cout << endl;
	selisihjam_detik = selisih_jam * 3600;
	selisihmenit_detik = selisih_menit *60;
	selisihdetik_detik = selisih_detik;
	total_detik = selisihjam_detik  + selisihmenit_detik + selisihdetik_detik;
	cout << endl;
	
	total_tarif = total_detik * tarif / 3600;
	cout << "Total Pembayaran Billing Warnet anda adalah : " << total_tarif;
	cout << endl;
	cout << endl;
	cout << "**********Terima Kasih Telah Mencoba Billing Warnet*************";
	cout << endl;
	return 0;
}
