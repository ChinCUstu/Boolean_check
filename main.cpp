#include "iostream"
using namespace std;

bool issorted(int a[], int);
int main(){
    int a[] = {22, 44, 66, 88, 44, 66, 55};
    cout << "sorted(a, 4) = " << issorted(a, 4) << endl;
    cout << "sorted(a, 7) = " << issorted(a, 7) << endl;

}

bool issorted(int a[], int n){
    for(int i = 1; i < n; i++)
        if( a[i] < a[i - 1])
            return false;
    return true;
}