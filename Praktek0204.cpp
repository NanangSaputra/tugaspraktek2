#include <iostream>
using namespace std;

int main(){
int p,luas;
 float d1,d2,b,h,i,j,k,l,m,n;
 
 cout<<"Luas Rumah:42m2";
 cout<<"\n";
 d1=0.193;
 d2=1.215;
 b=8;
 h=(d1*d2*b);
 cout<<"Luas 1 box parket:"<<h<<'\n';

luas=42;
i=luas/h;
cout<<"Jumlah 1 box parket:"<<i<<'\n';

j=500;
k=i*j;
cout<<"Biaya parket(Rp):"<<k<<'\n';

m=20;
l=luas*m;
cout<<"Biaya pasang(Rp):"<<l<<'\n';

n=l+k;
cout<<"Total biaya(Rp):"<<n<<'\n';

cout<<"________________________________";
cout<<"\n";
cout<<"M.Nanang Saputra";
}
 
