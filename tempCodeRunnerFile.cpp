class Budi: public pekerja, public pelajar {
    public:
        Budi(int pUmur) :
            pekerja(pUmur),
            pelajar(pUmur),
            orang(pUmur) // dapat dilakukan jika menggunakan virtual function 
        {
            cout << " Budi dibuat\n" << endl;
        }
};