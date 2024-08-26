
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
        karmasikSayi ��kar�m;
        ��kar�m.reel = reel - nesne1.reel;
        ��kar�m.sanal = sanal - nesne1.sanal;
        return ��kar�m;
    }

    karmasikSayi operator*(karmasikSayi nesne1)
    {
        karmasikSayi �arp�m;
        �arp�m.reel = reel * nesne1.reel - sanal * nesne1.sanal;
        �arp�m.sanal = sanal * nesne1.reel + nesne1.sanal * reel;
        return �arp�m;

    }
    karmasikSayi operator/(karmasikSayi nesne1) {
        karmasikSayi b�l�m;
        float reelpay = reel * nesne1.reel + sanal * nesne1.sanal;
        float sanalpay = sanal * nesne1.reel - reel * nesne1.sanal;
        float payda = nesne1.reel * nesne1.reel + nesne1.sanal * nesne1.sanal;
        b�l�m.reel = reelpay / payda;
        b�l�m.sanal = sanalpay / payda;
        return b�l�m;



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

        karmasikSayi �arp�m;
        �arp�m.reel = reel * nesne1.reel - sanal * nesne1.sanal;
        �arp�m.sanal = sanal * nesne1.reel + nesne1.sanal * reel;
        return �arp�m;


    }
    karmasikSayi operator/=(karmasikSayi nesne1) {
        karmasikSayi b�l�m;
        float reelpay = reel * nesne1.reel + sanal * nesne1.sanal;
        float sanalpay = sanal * nesne1.reel - reel * nesne1.sanal;
        float payda = nesne1.reel * nesne1.reel + nesne1.sanal * nesne1.sanal;
        b�l�m.reel = reelpay /= payda;
        b�l�m.sanal = sanalpay /= payda;
        return b�l�m;



    }
private:
    float reel;
    float sanal;

};


int main()
{
    setlocale(LC_ALL, "Turkish");

    int i�lem;
    float say�1r;
    float say�1s;
    float say�2r;
    float say�2s;

    cout << "girmek istedi�iniz ilk say�n�n reel k�sm�n� giriniz" << endl;
    cin >> say�1r;
    cout << "girmek istedi�iniz ilk say�n�n sanal k�sm�n� giriniz" << endl;
    cin >> say�1s;
    karmasikSayi say�1(say�1r, say�1s);

    cout << "girmek istedi�iniz ikinci say�n�n reel k�sm�n� giriniz" << endl;
    cin >> say�2r;
    cout << "girmek istedi�iniz ilk say�n�n sanal k�sm�n� giriniz" << endl;
    cin >> say�2s;
    karmasikSayi say�2(say�2r, say�2s);
    karmasikSayi say�3 = say�1 + say�2;
    karmasikSayi say�4 = say�1 * say�2;
    karmasikSayi say�5 = say�1 / say�2;
    karmasikSayi say�6 = say�1 - say�2;
    karmasikSayi say�7 = say�1 += say�2;
    karmasikSayi say�8 = say�1 -= say�2;
    karmasikSayi say�9 = say�1 *= say�2;
    karmasikSayi say�10 = say�1 /= say�2;
    cout << "+  operat�r� i�in 1'e " << endl << "-  operat�r� i�in 2'ye" << endl << "*  operat�r� i�in 3'e" << endl << "/  operat�r� i�in 4'e" << endl;
    cout << "+=  operat�r� i�in 5'e" << endl << "-=  operat�r� i�in 6'ya" << endl << "*=  operat�r� i�in 7'ye" << endl << "/=  operat�r� i�in 8'e bas�n�z" << endl << "say�lar�n kutupsal g�sterimi i�in de 9'a bas�n�z" << endl;

    cin >> i�lem;
    if (i�lem == 1) {
        karmasikSayi say�3 = say�1 + say�2;
        say�3.print();
            }
    else if (i�lem == 2) {
        karmasikSayi say�6 = say�1 - say�2;
        say�6.print();
}   
    else if (i�lem == 3) {
        karmasikSayi say�4 = say�1 * say�2;
        say�4.print();

    }
    else if (i�lem == 4) {

        karmasikSayi say�5 = say�1 / say�2;
        say�5.print();

    }
    else if (i�lem == 5) {
        karmasikSayi say�7 = say�1 += say�2;
        say�7.print();
    }
    else if (i�lem == 6) {
        karmasikSayi say�8 = say�1 -= say�2;
          say�8.print();}
    else if (i�lem == 7) {
        karmasikSayi say�9 = say�1 *= say�2;
        say�9.print();
    }
    else if (i�lem == 8) {
        karmasikSayi say�10 = say�1 /= say�2;
        say�10.print();

    }
    else if (i�lem == 9) {
    
        cout << "1. Say�n�n Kutupsal G�sterimi:" << "(" << say�1r << "," << say�1s << ")" << endl;
        cout << "2. Say�n�n Kutupsal G�sterimi:" << "(" << say�2r << "," << say�2s << ")" << endl;
    }
    return 0;
}
