#include <iostream>
#include <vector>
using namespace std;

void print(const vector<vector<int>>& mat)
{
    int m = mat.size();  
    int n = mat[0].size(); 

    for (int i = 0; i < m; i++) {
        
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++)
                cout << mat[i][j] << " ";
        }
        
        else {
            for (int j = n - 1; j >= 0; j--)
                cout << mat[i][j] << " ";
        }
    }
}

int main()
{
    vector<vector<int>> mat = {
        {45, 48, 54},
        {21, 89, 87},
        {70, 78, 15}
    };

    print(mat);
    return 0;
}