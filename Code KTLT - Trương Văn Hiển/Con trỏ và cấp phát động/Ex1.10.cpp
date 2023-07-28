/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include<bits/stdc++.h>

using namespace std;
int n;

struct Matrix{
    int n,m;
    int** matrix;
    Matrix(int r, int c){
        n = r;
        m = c;
        matrix = new int*[n];
        for (int i = 0; i < m; i++){
            matrix[i] = new int[m];
        } 
    }
    void inputMatrix(){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> matrix[i][j];
            }
        }
    }
    void printMatrix(){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << matrix[i][j] << ' ';
            }
            cout << endl;
        }
    }
    void add(Matrix* b){
        if(n != b->n || m != b->m){
            cout << "Khong cung kich thuoc ma tran" << endl;
            return;
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << matrix[i][j] + b->matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    void multiply(Matrix* b){
        if (m != b->n){
            cout << "Khong hop le" << endl;
            return;
        }
        Matrix* c = new Matrix(n,b->m);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < b->m; j++){
                c->matrix[i][j] = 0;
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                for (int a = 0; a < b->m; a++){
                    c->matrix[i][a] += matrix[i][j]*b->matrix[j][a];
                }
            }
        }
        c->printMatrix();
        delete c;
    }
};

int main(){
    //cout << "Truong Van Hien - 20194276" << endl;
    cin >> n;
    Matrix* a = new Matrix(n, n);
    a->inputMatrix();
    Matrix* b = new Matrix(n, n);
    b->inputMatrix();
    a->add(b);
    a->multiply(b);
    delete a;
    delete b;
    return 0;
}