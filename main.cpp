#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
/*

    // int -2.147.483.648 , 2.147.483.648
    // unsigned  0, 4.294.967.295
    // unsigned data types : char, short, int , long
    int deger1 = -21231231231;
    unsigned int deger2 = -123123123;
    char deger3 = 'a'; //120 -> ASCII

    // Veri tipi dönüþümleri
    //1.yol
    //int a = 20;
    //double b = 30000000;

    //a = (double)a;
    //b = (int)b;

    //2.yol
    //int c = 45;
    //double d = 990;

    //c = static_cast<double>(c);



    int bolum_int = 15/2;
    //std::cout<<"bolum sonucu (int): "<<bolum_int<<std::endl;

    float bolum_float = (float)15/2;
    //std::cout<<"bolum sonucu (float): "<<bolum_float<<std::endl;


    int a = 5;
    char b = 'O'; // 79

    a = a + b;// 84

    std::cout<<"A'nin degeri : "<<a<<std::endl;

    std::cout<<"b'nin degeri : "<<b<<std::endl;


    float sayi = 4.9;
    sayi = (int)sayi;
    std::cout<<"Cevirilmis sayi : "<<sayi<<std::endl;



    std::cout<<"Bu ilk satır \n bu ikinci satır\n bu ucuncu satir"<<std::endl;

    std::cout<<"bu ilk \t bu ikinci"<<std::endl;


    */


    // input - girdi alma
/*
    int dogumTarih;
    std::cout<<"Lutfen dogum tarihinizi giriniz : ";
    std::cin>>dogumTarih;

    int yas = 2023 - dogumTarih;
    std::cout<<"Yasiniz : "<<yas<<std::endl;
*/

    int x, y ,z;

    cout<<"birinci sayiyi giriniz : ";
    cin>> x;

    cout<<"ikinci sayiyi giriniz : ";
    cin>>y;

    z = !(x ^ y);

    cout<<"Sonuc : "<< z <<endl;







    return 0;
}
