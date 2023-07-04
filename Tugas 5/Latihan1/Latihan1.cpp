#include <iostream>
using namespace std;

struct lat1 {
    float phi = 3.14;
    int LPersegiPanjang(int p,int l){
        return p *l;
    }
    float LLingkaran(int r){
        return phi * r * r;
    }
    float VKerucut(int r,int t){
        return 0.3333333333333 * phi * r * r * t;
    }
    float VBola(int r){
        return 1.3333333333333 * phi *r *r *r;
    }
};

struct lat1 fungsi;

int main(){
    cout << fungsi.LPersegiPanjang(2,10) << endl;
    cout << fungsi.LLingkaran(10) << endl;
    cout << fungsi.VKerucut(10,5) << endl;
    cout << fungsi.VBola(10) << endl;

    return 0;
}
