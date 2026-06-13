#include<iostream>
#include<cmath>
using namespace std;

double P(int x){
    return exp(abs(x)) + pow(x,5) + sqrt(pow(x,2) + 1);
}

void hoandoi(int n, int m){
    int temp = n;
    n = m;
    m = temp;
}

double S(double x, int n){
    double s = 100;
    for (int i = 1; i <= n; i++){
        s += sqrt(pow(x,i))/(n + i);
        if ((n + i) == 0){
            s = 1;
        }
    }
    return s;
}

int main(){
    double a;
    cout<<"Nhap a: "; cin>>a;
    int b,c;
    cout<<"Nhap b, c: "; cin>>b>>c;
    if (c<b){
        hoandoi(c,b);
    }
    cout<<"S(a,c) - S(a,b) = "<<S(a,c) - S(a,b);
    return 0;
}