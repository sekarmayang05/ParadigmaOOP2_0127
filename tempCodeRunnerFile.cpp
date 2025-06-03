class pelajar : virtual public orang {
    public:
        pelajar(int pUmur) :
            orang(pUmur)
        {
            cout << " Belajar dibuat\n" << endl;
        }
};