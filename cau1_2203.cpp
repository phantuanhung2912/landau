#include<iostream>
#include<cmath>
using namespace std;

void nhap(double &a, int &b, int &c){
    cout<<"Nhap so thuc: "; cin>>a;
        cout<<"Nhap so nguyen: ";
        cin>>b>>c;
    
}

double H(int n, int m){
    if (n == 0 || (m + 1/n) < 0){
        return 0;
    }
    else{
        return sqrt(m + (1.0/n));
    }
}

double T(double x, int n){
    double t = 10*exp(abs(n - 5));
    for (int i = 1; i <= n; i++){
        t += pow(x,i)/(2*i - 1);
    }
    return t;
}

int main(){
    double x;
    int n,m;
    nhap(x,n,m);
    cout<<"H(n,m) = "<<H(n,m)<<endl;
    cout<<"T(x,n+m) = "<<T(x,n+m);
    return 0;
}