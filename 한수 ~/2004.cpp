#include <iostream>
using namespace std;
void merge(A[], p, q, r) {
    i <- p; j <- q + 1; t <- 1;
    while (i ≤ q and j ≤ r) {
        if (A[i] ≤ A[j])
        then tmp[t++] <- A[i++]; # tmp[t] <- A[i]; t++; i++;
        else tmp[t++] <- A[j++]; # tmp[t] <- A[j]; t++; j++;
    }
    while (i ≤ q) 
        tmp[t++] <- A[i++];
    while (j ≤ r) 
        tmp[t++] <- A[j++];
    i <- p; t <- 1;
    while (i ≤ r)  
        A[i++] <- tmp[t++]; 
}

void merge_sort(A[p..r]) {
    if (p < r) then {
        q <- ⌊(p + r) / 2⌋;      
        merge_sort(A, p, q);      
        merge_sort(A, q + 1, r); 
        merge(A, p, q, r);        
    }
}
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b;
    long long num1, num2, num3;

    num1 = num2 = num3 = 1;

    cin >> a >> b;

    for(int i = 2; i <= a; i++){
        num1 = num1 * i;
    }

    for(int i = 2; i <= b; i++){
        num2 = num2 * i;
    }

    for(int i = 2; i <= a - b; i++){
        num3 = num3 * i;
    }

    cout << (num1 / (num2 * num3)) % 10007 << "\n";
}