{
    public:
    void showallpelajar(pelajar &x);
};
};

class pelajar
{
    private:
    int nilai;
    public:
    pelajar() { nilai = 100; }
    friend void manusia::showallpelajar(pelajar &x);
};

void manusia::showallpelajar(pelajar &x)
{
    cout << x.nilai;
}

int main()
{
    manusia budi;
    pelajar pbudi;
    budi.showallpelajar(pbudi);
    return 0;
}