/*

PROBLEM:

Given an array, A, of N integers, print each element in reverse order as a single line of space-separated integers.

SCORE: 10/10 possible points

*/

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    for(int i = arr.size()-1; i >= 0; --i)
        std::cout<< arr[i] << " ";
    return 0;
}
