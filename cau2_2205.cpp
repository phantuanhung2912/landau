#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n;
    do{
        cout<<"Nhap so phan tu n (n>0): "; cin>>n;
    }
    while (n <= 0);
    double *A = new double[n];
    cout<<"Nhap mang A: ";
    for (int i = 0; i < n; i++){
        cin>>A[i];
    }

    //sap mang A tang dan, in ra man hinh
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (A[i] > A[j]){
                swap(A[i],A[j]);
            }
        }
    }
    cout<<"Mang A sap tang dan la: ";
    for (int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    //luu mang da sap xep vao file
    ofstream f;
    f.open("TEST.txt");
    f<<"Mang A sap tang dan la: ";
    for (int i = 0; i < n; i++){
        f<<A[i]<<" ";
    }
    f<<endl;
    f.close();

    //kiem tra cac phan tu cua A co >10 ko
    bool ktr = true;
    for (int i = 0; i < n; i++){
        if (A[i] <= 10){
        ktr = false;
        break;
        }
    }
    f.open("RES.txt");
    if (ktr == true){
        f<<"CÓ";
    }
    else{
        f<<"KHÔNG";
    }
    f.close();

    //phan cuoi
    int count = 0;
    double sum = 0;
    for (int i = n-1; i >= 0; i--){
        sum += A[i];
        count++;
        if (sum > 100){
            break;
        }
    }
    if (sum <= 100){
        cout<<"Tong cac phan tu trong A khong the lon hon 100";
    }
    else{
    cout<<"Can it nhat "<<count<<" phan tu trong A de tong cua chung lon hon 100";
    }
    delete[]A;
    return 0;
}