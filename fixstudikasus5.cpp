#include <iostream>
using namespace std;

class krs {
	public:
		void krs_mahasiswa();
		void proses_sks(int,int);
		
	private:
		int tot_sks;
		int total;
		int sks;
		int biaya_sks;
		char matkul[50];
		char nama[30];
		int nim;
    int n;
};
void krs::krs_mahasiswa(){
	cout<<"-----------------------------------\n";
	cout<<"NAMA: ";
  cin.getline(nama, sizeof(nama));
	cout<<"NIM : ";cin>>nim;	
}
void krs::proses_sks(int sks, int biaya_sks){
	int total=biaya_sks;
	if(sks==0){
		cout<<"Jumlah Biaya Total:Rp. "<<total<<endl;
		cout<<"------------------------------------\n";
		return;
	}
	else{
		cout<<"-----------------------------------\n";
		cout<<"MATA KULIAH "<<": ";cin>>matkul;
		cout<<"SKS: ";cin>>n;
		tot_sks=n*102600;
		cout<<"Biaya SKS:Rp. "<<tot_sks<<endl;
		total=tot_sks;
		proses_sks(sks-1,biaya_sks+tot_sks);
	}
}

int main(){
	int sks;
	krs m;
	m.krs_mahasiswa();
	cout<<"JUMLAH MATKUL: ";cin>>sks;
	m.proses_sks(sks,0);
}
