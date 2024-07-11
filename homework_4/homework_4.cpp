#include <iostream>

using namespace std;

int main()
{
	double mesafe = 0;
	double benzin_serf_100km = 0;
	const float benz_qiy= 0.90;
	cout << "mesafe: ";
	cin >> mesafe;
	cout << "benzin_serf_100km: ";
	cin >> benzin_serf_100km;
	double litr = mesafe / 100 * benzin_serf_100km;
	double qiymet = litr * benz_qiy;
	cout << "lazim olan benzin miqdari: " << litr;
	cout << "qiymet: " << qiymet;


	double en = 0;
	double uzunluq = 0;
	double hundurluk = 0;
	cout << "otagin enini daxil edin: ";
	cin >> en ;
	cout << "uzunlugunu daxil edin: ";
	cin >> uzunluq ;
	cout << "hundurluyunu daxil edin: ";
	cin >> hundurluk ;
	double oboy = (2*en+2*uzunluq)*hundurluk ;
	cout << "otagin divarlarinin oboyu ucun lazim olan kv: " << oboy;


	double otaq = 0;
	cout << "otagin sayini daxil edin: ";
	cin >> otaq;
	double skaf = otaq * 1;
	double tv = otaq * 1;
	double z_q = otaq * 1;
	cout << "lazim olan skaf: " << skaf;
	cout << "lazim olan tv: " << tv;
	cout << "lazim olan zibil qabi: " << z_q;


	int k_s = 0;
	int gunluk_sehife = 0;
	cout << "Kitabin cemi sehifesi: ";
	cin >> k_s;
	cout << "hergun oxuyacaqim sehife: ";
	cin >> gunluk_sehife;
	int kitabin_bitmesi = k_s / gunluk_sehife;
	cout << "Kitabi bitireceyiniz gun: " << kitabin_bitmesi;



	double oniki = 0;
	double onbir = 0;
	double on = 0;
	double doqquz = 0;
	double sekkiz = 0;
	cout << "12: ";
	cin >> oniki;
	cout << "11: ";
	cin >> onbir;
	cout << "10: ";
	cin >> on;
	cout << "9: ";
	cin >> doqquz;
	cout << "8: ";
	cin >> sekkiz;
	double qizil = oniki * 5 + onbir * 4 + on * 3 + doqquz * 2 + sekkiz * 1;
	cout << "Sizin qizillarinizin cemi: " << qizil;
}
