#include <iostream>
using namespace std;
class Matrix
{
    int m1[3][3], m2[3][3], result[3][3];
    int i, j, k;

public:
    void getelements()
    {
        cout << "\nEnter elements of matrix-1 and matrix-2:";
        cout << "\nmatrix-1:\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "m1[" << i << "][" << j << "]=";
                cin >> m1[i][j];
            }
        }
        cout << "\nmatrix-2:\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "m2[" << i << "][" << j << "]=";
                cin >> m2[i][j];
            }
        }
    }
    void multiply()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < 3; k++)
                {
                    result[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }
    }
    void display_matrix()
    {
        cout << "Result matrix:\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }
};
int main()
{
    Matrix m;
    m.getelements();
    m.multiply();
    m.display_matrix();
}