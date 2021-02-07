#include "Zahedi-Neema.h"
using namespace std;

int main(){
    std::vector<std::vector<double> > v {
                { 1, 2, 3},
                { 5, 6, 7},
                { 9, 10, 11}
    };
    Matrix m(v);
    // m.displayMatrix();
    std::cout<< m(0,2);
    
    
    return 0;
}