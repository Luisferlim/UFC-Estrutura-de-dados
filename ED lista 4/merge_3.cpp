#include <iostream>
#include <vector>
using namespace std;
 
using Vector = vector<int>;
 
void printVector(const Vector& a)
{
    cout << "[";
    for (auto e : a) {
        cout << e << " ";
    }
    cout << "]" << endl;
}
 
Vector mergeThree(Vector& A, Vector& B,
                  Vector& C)
{
    int m, n, o, i, j, k;
    // Get Sizes of three vectors
    m = A.size();
    n = B.size();
    o = C.size();
 
    // Vector for storing output
    Vector D;
    D.reserve(m + n + o);
 
    i = j = k = 0;
 
    while (i < m && j < n && k < o) {
 
        // Get minimum of a, b, c
        int m = min(min(A[i], B[j]), C[k]);
 
        // Put m in D
        D.push_back(m);
 
        // Increment i, j, k
        if (m == A[i])
            i++;
        else if (m == B[j])
            j++;
        else
            k++;
    }
 
    // C has exhausted
    while (i < m && j < n) {
        if (A[i] <= B[j]) {
            D.push_back(A[i]);
            i++;
        }
        else {
            D.push_back(B[j]);
            j++;
        }
    }
 
    // B has exhausted
    while (i < m && k < o) {
        if (A[i] <= C[k]) {
            D.push_back(A[i]);
            i++;
        }
        else {
            D.push_back(C[k]);
            k++;
        }
    }
 
    // A has exhausted
    while (j < n && k < o) {
        if (B[j] <= C[k]) {
            D.push_back(B[j]);
            j++;
        }
        else {
            D.push_back(C[k]);
            k++;
        }
    }
 
    // A and B have exhausted
    while (k < o)
        D.push_back(C[k++]);
 
    // B and C have exhausted
    while (i < m)
        D.push_back(A[i++]);
 
    // A and C have exhausted
    while (j < n)
        D.push_back(B[j++]);
 
    return D;
}
 
// Driver Code
int main()
{
    Vector A = { 1, 2, 18, 20};
    Vector B = { 4, 17, 96, 97};
    Vector C = { 18, 77, 84, 85};
 
    // Print Result
    printVector(mergeThree(A, B, C));
    return 0;
}