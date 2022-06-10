#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class hitung{
	public:
		void inputdata();
		void proses();
		void output();
	private:
		string matriks[100][100];
  		int jum_baris, jum_kolom, i, j;
};
void hitung::inputdata(){
  cout << "Input jumlah baris : ";
  cin >> jum_baris;
  cout << "Input jumlah kolom : ";
  cin >> jum_kolom;
  cout << endl;
  for(i = 0; i < jum_baris ; i++){
    for(j = 0; j < jum_kolom; j++){
      cout << "Data ["<<i+1<<"]["<<j+1<<"] = ";
      cin >> matriks[i][j];
    }
    cout << endl;
  }
}
void hitung::output(){
  cout << "|| Jenis Karyawan  || Nama        || Alamat         || Jenis Kelamin       " << endl; 
	for(i = 0; i < jum_baris ; i++){
		for(j = 0; j < jum_kolom; j++){
     	 	cout << setw(3) <<"|| "<<matriks[i][j] << "       ||";
    }
    cout << endl;
}
  	cout << "\nMasukkan Baris : ";
  	cin>>jum_baris;
	cout << "\n======================================" << endl;
	cout << "|          HASIL PENCARIAN           |" << endl;
  	cout << "======================================" << endl;
  	cout << "--------------------------------------" << endl;
  	cout<<"|   Jenis Karyawan   |   Nama   |   Alamat   |    Jenis   Kelamin"<<endl;
  	cout << "--------------------------------------" << endl;
  	for (int i=0; i<4; i++){
    	cout << "\t" << matriks[jum_baris][i] << "\t";
	}
}
main(){
	hitung x;
	x.inputdata();
	x.output();
}

