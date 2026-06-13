#include<iostream>
#include<cmath>
using namespace std;

void nhap(double &x, int &y){
    cout<<"Nhap so thuc x: "; cin>>x;
    do{
        cout<<"Nhap so nguyen y: "; cin>>y;
    }
    while (y != (int)y);
}

double P(int a, int b){
    if (b == 0){
        return 0;
    }
    else{
        return sqrt(pow(a-b,2) + pow(a/b, 2));
    }
}

double Q(double x, int n){
    double q = exp(abs(x+1));
    for (int i = 1; i <= n; i++){
        q += (pow(x,n))/(2*n + 1);
    }
    return q;
}

int main(){
    double x;
    int n,m;
    nhap(x,n);
    cout<<"P(x,n) = "<<P(x,n);
    return 0;
}