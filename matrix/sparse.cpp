#include <iostream>
using namespace std;

class Element {
public:
    int i, j, x; 
};

class Sparse {
private:
    int m, n, num;
    Element* e;

public:
    
    Sparse(int rows, int cols, int numElements) {
        m = rows;
        n = cols;
        num = numElements;
        e = new Element[num];
    }

    
    ~Sparse() {
        delete[] e;
    }

    
    void readElements() {
        cout << "Enter the elements (row column value):" << endl;
        for (int i = 0; i < num; i++) {
            cin >> e[i].i >> e[i].j >> e[i].x;
        }
    }


    void display() const {
        int k = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (k < num && e[k].i == i && e[k].j == j) {
                    cout << e[k++].x << " ";
                } else {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols, numElements;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter number of non-zero elements: ";
    cin >> numElements;

    Sparse s(rows, cols, numElements);
    s.readElements();
    s.display();

    return 0;
}
