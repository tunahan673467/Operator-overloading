
#include<iostream>
using namespace std;

class karmasikSayi
{
public:
    karmasikSayi(int r = 0, int s = 0)
    {
        reel = r;
        sanal = s;
    }

    int getReel()
    {
        return reel;
    }

    int getSanal()
    {
        return sanal;
    }

    void setReel(int r)
    {
        reel = r;
    }

    void setSanal(int s)
    {
        sanal = s;
    }


    void print()

    {
        if (sanal > 0)
            cout << reel << " + " << sanal << "i" << endl;
        else if (sanal < 0)
            cout << reel << " - " << -sanal << "i" << endl;
        else
            cout << reel << endl;
    }
    karmasikSayi operator+(karmasikSayi nesne1)
    {
        karmasikSayi toplam;
        toplam.reel = reel + nesne1.reel;
        toplam.sanal = sanal + nesne1.sanal;
        return toplam;
    }

    karmasikSayi operator-(karmasikSayi nesne1)
    {
        karmasikSayi çıkarım;
        çıkarım.reel = reel - nesne1.reel;
        çıkarım.sanal = sanal - nesne1.sanal;
        return çıkarım;
    }

    karmasikSayi operator*(karmasikSayi nesne1)
    {
        karmasikSayi çarpım;
        çarpım.reel = reel * nesne1.reel - sanal * nesne1.sanal;
        çarpım.sanal = sanal * nesne1.reel + nesne1.sanal * reel;
        return çarpım;

    }
    karmasikSayi operator/(karmasikSayi nesne1) {
        karmasikSayi bölüm;
        float reelpay = reel * nesne1.reel + sanal * nesne1.sanal;
        float sanalpay = sanal * nesne1.reel - reel * nesne1.sanal;
        float payda = nesne1.reel * nesne1.reel + nesne1.sanal * nesne1.sanal;
        bölüm.reel = reelpay / payda;
        bölüm.sanal = sanalpay / payda;
        return bölüm;



    }

    karmasikSayi operator+=(karmasikSayi nesne1)
    {
        karmasikSayi toplam;
        toplam.reel = reel += nesne1.reel;
        toplam.sanal = sanal += nesne1.sanal;
        return toplam;
    }


    karmasikSayi operator-=(karmasikSayi nesne1)
    {
        karmasikSayi toplam;
        toplam.reel = reel -= nesne1.reel;
        toplam.sanal = sanal -= nesne1.sanal;
        return toplam;
    }
    karmasikSayi operator*=(karmasikSayi nesne1)
    {

        karmasikSayi çarpım;
        çarpım.reel = reel * nesne1.reel - sanal * nesne1.sanal;
        çarpım.sanal = sanal * nesne1.reel + nesne1.sanal * reel;
        return çarpım;


    }
    karmasikSayi operator/=(karmasikSayi nesne1) {
        karmasikSayi bölüm;
        float reelpay = reel * nesne1.reel + sanal * nesne1.sanal;
        float sanalpay = sanal * nesne1.reel - reel * nesne1.sanal;
        float payda = nesne1.reel * nesne1.reel + nesne1.sanal * nesne1.sanal;
        bölüm.reel = reelpay /= payda;
        bölüm.sanal = sanalpay /= payda;
        return bölüm;



    }
private:
    float reel;
    float sanal;

};


int main()
{
    setlocale(LC_ALL, "Turkish");

    int işlem;
    float sayı1r;
    float sayı1s;
    float sayı2r;
    float sayı2s;

    cout << "girmek istediğiniz ilk sayının reel kısmını giriniz" << endl;
    cin >> sayı1r;
    cout << "girmek istediğiniz ilk sayının sanal kısmını giriniz" << endl;
    cin >> sayı1s;
    karmasikSayi sayı1(sayı1r, sayı1s);

    cout << "girmek istediğiniz ikinci sayının reel kısmını giriniz" << endl;
    cin >> sayı2r;
    cout << "girmek istediğiniz ilk sayının sanal kısmını giriniz" << endl;
    cin >> sayı2s;
    karmasikSayi sayı2(sayı2r, sayı2s);
    karmasikSayi sayı3 = sayı1 + sayı2;
    karmasikSayi sayı4 = sayı1 * sayı2;
    karmasikSayi sayı5 = sayı1 / sayı2;
    karmasikSayi sayı6 = sayı1 - sayı2;
    karmasikSayi sayı7 = sayı1 += sayı2;
    karmasikSayi sayı8 = sayı1 -= sayı2;
    karmasikSayi sayı9 = sayı1 *= sayı2;
    karmasikSayi sayı10 = sayı1 /= sayı2;
    cout << "+  operatörü için 1'e " << endl << "-  operatörü için 2'ye" << endl << "*  operatörü için 3'e" << endl << "/  operatörü için 4'e" << endl;
    cout << "+=  operatörü için 5'e" << endl << "-=  operatörü için 6'ya" << endl << "*=  operatörü için 7'ye" << endl << "/=  operatörü için 8'e basınız" << endl << "sayıların kutupsal gösterimi için de 9'a basınız" << endl;

    cin >> işlem;
    if (işlem == 1) {
        karmasikSayi sayı3 = sayı1 + sayı2;
        sayı3.print();
            }
    else if (işlem == 2) {
        karmasikSayi sayı6 = sayı1 - sayı2;
        sayı6.print();
}   
    else if (işlem == 3) {
        karmasikSayi sayı4 = sayı1 * sayı2;
        sayı4.print();

    }
    else if (işlem == 4) {

        karmasikSayi sayı5 = sayı1 / sayı2;
        sayı5.print();

    }
    else if (işlem == 5) {
        karmasikSayi sayı7 = sayı1 += sayı2;
        sayı7.print();
    }
    else if (işlem == 6) {
        karmasikSayi sayı8 = sayı1 -= sayı2;
          sayı8.print();}
    else if (işlem == 7) {
        karmasikSayi sayı9 = sayı1 *= sayı2;
        sayı9.print();
    }
    else if (işlem == 8) {
        karmasikSayi sayı10 = sayı1 /= sayı2;
        sayı10.print();

    }
    else if (işlem == 9) {
    
        cout << "1. Sayının Kutupsal Gösterimi:" << "(" << sayı1r << "," << sayı1s << ")" << endl;
        cout << "2. Sayının Kutupsal Gösterimi:" << "(" << sayı2r << "," << sayı2s << ")" << endl;
    }
    return 0;
}
