#include <iostream>
using namespace std;

class persegiP{
	private:
		int p, l;
	public:
		void setPan(int p){
			this->p = p;
		}
		void setLeb(int l){
			this->l = l;
		}
		
		int getPan(){
			return p;
		}
		int getLeb(){
			return l;
		}
		int Luas(){
			return p*l;
		}
		int Kel(){
			return (p+l)*2;
		}
};
class persegi{
	private:
		int s;
	public:
		void setS(int s){
			this->s = s;
		}
		
		int getS(){
			return s;
		}
		int Luas(){
			return s*s;
		}
		int Kel(){
			return s*4;
		}
};
class lingkaran{
	private:
		double phi, r;
	public:
		void setPhi(double phi){
			this->phi = phi;
		}
		void setR(double r){
			this->r = r;
		}
		
		int getPhi(){
			return phi;
		}
		int getR(){
			return r;
		}
		double Luas(){
			return phi*r*r;
		}
		double Kel(){
			return 2*phi*r;
		}
};
int main(){
	//Persegi Panjang
	persegiP pp;
	int p, l;
	cin>>p>>l;
	pp.setPan(p);
	pp.setLeb(l);
	cout<<"Luas persegi panjang : "<<pp.Luas()<<endl;
	cout<<"Keliling persegi panjang: "<<pp.Kel();
	//Persegi 
	persegi psg;
	int s;
	cin>>s;
	psg.setS(s);
	cout<<"Luas persegi: "<<psg.Luas()<<endl;
	cout<<"Keliling persegi: "<<psg.Kel();
	//Lingkaran 
	lingkaran lkr;
	double r, phi;
	cin>>phi>>r;
	lkr.setPhi(phi);
	lkr.setR(r);
	cout<<"Luas lingkaran: "<<lkr.Luas()<<endl;
	cout<<"Keliling lingkaran: "<<lkr.Kel();
	
}

