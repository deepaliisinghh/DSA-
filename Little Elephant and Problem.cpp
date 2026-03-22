// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; 
//     cin >> n;
//     vector<int> a(n), b(n);
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//         b[i] = a[i];
//     }
//     sort(b.begin(), b.end());
//     int count = 0;
//     for (int i = 0; i < n; i++){
//         if(a[i] != b[i])
//             count++;
//     }
//     if(count == 0 || count==2)
//         cout<<"yes";
//     else 
//         cout<<"no";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int l = 0, r = n - 1;

    while(l < n - 1 && a[l] <= a[l + 1]) l++;
    if(l == n - 1){
        cout << "yes\n1 1";
        return 0;
    }
    r = l;
    while(r < n - 1 && a[r] > a[r + 1]) r++;
    reverse(a.begin() + l, a.begin() + r + 1);

    if(is_sorted(a.begin(), a.end())){
        cout << "yes\n" << l + 1 << " " << r + 1;
    } else {
        cout << "no";
    }

    return 0;
}