#include<bits/stdc++.h>
using namespace std;
 void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // transposing the matrix

        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }


        // reversing each row of the matrix
        

        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }

    }
int main(){
    int n ;
    cin >> n;

    vector<vector<int>>matrix (n, vector<int>(n, 0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
        }
    }


    rotate(matrix);



    for(auto it: matrix){
        for(auto x: it){
            cout<<x<< " ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}


// T.c : O(n*n);
// S.c : O(1);