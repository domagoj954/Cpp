#include<iostream>

class Matematika{
    private:
    int broj1;
  
    public:
    Matematika(int br1):
      broj1(br1){}

    int zbroj(){
    return broj1 + broj1;
}
};

class Mata{
    private:
    Matematika zbrojBrojeva;
    int broj2;

    public:
    Mata(int br1, int br2) : 
      zbrojBrojeva(br1), broj2(br2){}

    void konacniZbroj(){
        int zb = zbrojBrojeva.zbroj() + broj2;
        std::cout << zb;
        return;
    }

};

int main(){
  Mata mat1 = {10, 20};  // 10 + 10 + 20
  mat1.konacniZbroj();
}