#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n;
    do{
        cout<<"Nhap so phan tu n(n>0): ";
        cin>>n;
    }
    while (n <= 0);
    long *A = new long[n];
    cout<<"Nhap mang A: ";
    for (int i = 0; i < n; i++){
        cin>>A[i];
    }

    //sap mang A tang dan
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (A[i] > A[j]){
                swap(A[i], A[j]);
            }
        }
    }
    cout<<"Mang A sap tang dan la: ";
    for (int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    ofstream f("TEST.txt");
    f<<"Mang A sap tang dan la: ";
    for (int i = 0; i < n; i++){
        f<<A[i]<<" ";
    }
    f<<endl;
    f.close();

    //ghi bo sung tong cac phan tu am tronng mag vao file
    int sum = 0;
    for (int i = 0; i < n; i++){
        if (A[i] < 0){
            sum += A[i];
        }
    }
    f.open("TEST.txt", ios::app);
    f<<"Tong cac phan tu am la: "<<sum<<endl;
    f.close();

    //cho biet lay dc nhieu nhat bao nhieu phan tu mang A de tong cua chung ko vuot qua 2K, K la gia tri trung binh
    double K = 0;
    for (int i = 0; i < n; i++){
        K += A[i];
    }
    K = K/n;
    long tong = 0;
    int dem = 0;
    for (int i = 0; i < n; i++){
        tong += A[i];
        dem++;
        if (tong += A[i] >= 2*K){
           break;
        }
    }
    if (tong > 2*K){
        dem--;
    }
    cout<<"co the lay duoc nhieu nhat "<<dem<<" phan tu trong mang A de tong cua chung khong vuot qua 2K";
    delete []A;
    return 0;
}