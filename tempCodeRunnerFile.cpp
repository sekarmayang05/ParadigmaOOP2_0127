class pekerja : virtual public orang {
    public:
        pekerja(int pUmur) :
            orang(pUmur)
        {
            cout << " pekerja dibuat\n" << endl;
        }
};