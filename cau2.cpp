#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n;
    do{
        cout<<"Nhap so phan tu n (n > 0): ";
        cin>>n;
    }
    while (n <= 0);
    double *A = new double[n];
    cout<<"Nhap mang A: ";
    for (int i = 0; i < n; i++){
        cin>>A[i];
    }

    //xuat mang ra man hinh va vao file
    cout<<"Mang A vua nhap la: ";
    for (int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    ofstream f("ABC2105.DAT");
    f<<"Mang A: ";
    for (int i = 0; i < n; i++){
        f<<A[i]<<" ";
    }
    f<<endl;
    f.close();

    //sap xep mang giam dan
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (A[i] < A[j]){
                swap(A[i], A[j]);
            }
        }
    }
    cout<<"Mang A sap giam dan la: ";
    for (int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    f.open("XYZ2105.txt");
    f<<"Mang A giam dan la: ";
    for (int i = 0; i < n; i++){
        f<<A[i]<<" ";
    }
    f<<endl;
    f.close();
    
    //tinh tong cac phan tu thuoc [3,8] va xuat ra man hinh
    double sum = 0;
    for (int i = 0; i < n; i++){
        if (A[i] >= 3 && A[i] <= 8){
            sum += A[i];
        }
    }
    cout<<"Tong cac phan tu thuoc [3,8] la: "<<sum<<endl;

    //chen x vao sau A[0], in mang sau khi chen ra man hinh
    double x;
    cout<<"Nhap x: "; cin>>x;
    double *B = new double[n+1];
    for (int i = 1; i < n; i++){
        B[i+1] = A[i];
    }
    B[0] = A[0];
    B[1] = x;
    delete []A;
    A = B;
    n++;
    cout<<"Mang A sau khi chen x la: ";
    for (int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
    delete []A;
    return 0;
}