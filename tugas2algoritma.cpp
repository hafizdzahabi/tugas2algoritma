#include <iostream>
using namespace std;

int main()
{
char pilihanProduk,*produk,beliLgi;
int ttlBayar,Kembalian,jmlPembelian,hargaProduk,totalHarga;

atas:
 cout<<"===================================================="<<endl;
 cout<<" TOKO KOMPUTER "<<endl;
 cout<<"===================================================="<<endl;
 cout<<endl;
 cout<<"----------------------------------------------------"<<endl;
 cout<<"Pilihan Produk"<<endl;
 cout<<"----------------------------------------------------"<<endl; 
 cout<<"1. Keyboard"<<endl;
 cout<<"2. CPU"<<endl;
 cout<<"3. Mouse"<<endl;
 cout<<"4. Pc"<<endl;
 cout<<"5. Harddisk"<<endl;
 cout<<"----------------------------------------------------"<<endl;
 cout<<"Produk [1-5]  : ";cin>>pilihanProduk;
 cout<<"Jumlah Pembelian  : ";cin>>jmlPembelian;
 cout<<"----------------------------------------------------"<<endl;

  if(pilihanProduk=='1'){produk="Keyboard";
  hargaProduk=80000;}
  else if(pilihanProduk=='2'){produk="CPU";
  hargaProduk=100000;}
  else if(pilihanProduk=='3'){produk="Mouse";
  hargaProduk=50000;}
  else if(pilihanProduk=='4'){produk="Pc";
  hargaProduk=200000;}
  else if(pilihanProduk=='5'){produk="Harddisk";
  hargaProduk=70000;}
  else
  {
   cout<<"Maaf, merek tidak tersedia"<<endl;
   cout<<"Pilih kembali";
   cout<<endl;
   goto atas;
  }
 totalHarga=hargaProduk*jmlPembelian;
 cout<<"Produk   : "<<pilihanProduk<<endl;
 cout<<"Harga Satuan   : Rp. "<<hargaProduk<<endl;
 cout<<"Jumlah Pembelian  : "<<jmlPembelian<<endl;
 cout<<"Total Harga   : Rp. "<<totalHarga<<endl;
 cout<<"----------------------------------------------------"<<endl;
 cout<<"Total Bayar   : Rp. ";
 cin>>ttlBayar;
 Kembalian=ttlBayar-totalHarga;
 cout<<"Kembalian   : Rp. "<<Kembalian<<endl<<endl;
 cout<<"===================================================="<<endl;
 cout<<"Beli kembali produk? [Y/T] : ";cin>>beliLgi;
 cout<<endl;
  if(beliLgi=='Y'||beliLgi=='y')
  {goto atas;}
  else{
   cout<<"Terima Kasih Atas Pembelian Produk Kami";
   cout<<endl;
  }
return 0;
}
