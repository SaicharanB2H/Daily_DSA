#include <bits/stdc++.h>

using namespace std;

int sum(int cont){
    if(cont==4){
        return 1 ;
    }
    else{
        cout<<cont<<" ";
        cont++;
        return sum(cont);
        
    }
}

int printname(int num,string name1){
    if(num ==0){
        return 0;
    }
    else{
        cout<<name1<<"\n";
        num--;
        return printname(num,"Saicharan");
    }
}

int linear(int num,int i){
    if(i>num){
        return 0;
    }
    else{
        return linear(num,i);
        cout<<i<<" ";
        i++;
    }
}

int linear_reverse(int n){
    if(n<=0){
        return 0;
    }
    else{
        cout<<n<<" ";
        n--;
        return linear_reverse(n);
    }
}

int fun(int n){
    if(n<1){
        return 0;
    }
    fun(n-1);
    cout<<n<<" ";
    return 1;
}

int fun1(int i,int n){
    if(i>n){
        return 0;
    }
    fun1(i+1,n);
    cout<<i<<" ";
    return 1;

}

// recursive sum 
int rec_sum(int i,int sum){
    if(i<0){
        cout<<sum<<" ";
        return 0;
    }
    return rec_sum(i-1,sum+i);
}


// recursive pattern with return 
int rec_sum_1(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+rec_sum_1(n-1);
    }
}

// recursive factorial

int rec_fact(int n){
    if(n==0){
        return 1;
    }
    return n*rec_fact(n-1);
}

// reverse an array

int rev_array(int l,int n,int arr[]){
    if(l>=n){
        return 0;
    }
    else{
        int temp = arr[l];
        arr[l] = arr[n];
        arr[n] = temp;
        rev_array(l+1,n-1,arr);
        return 1;
    }
}

int palindrome(int i,string arr){
    if(i>=arr.length()/2){
        cout<<"it is palindrome";
        return 0;
    }
    else if(arr[i] != arr[arr.length() -i -1]){
        cout<<"it is not palindrome";
        return 0;
    }
    else{
        palindrome(i+1,arr);
        return 1;
    }
}

// Hashing 


// selection sort algorithm

void selection_sort(int arr[],int len ){
    for(int i=0;i<=len-2;i++){
        int min = i;
        for(int j=i;j<=len -1;j++){
            if(arr[j]<arr[min]){
                // update min to new minimum index 
                min = j;
            }
        }

        // now swapping the minimum in the new position

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j =i;
        while(j>=0 && arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

int main(){
    // fun1(1,6);
    // rec_sum(3,0);
    // cout<<rec_sum_1(10);
    // cout<<rec_fact(5);

    // int arr[] = {1,2,3,4,5};
    // rev_array(0,4,arr);

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    // palindrome(0,"madamc");

    // int arr[] = {1,2,3,2,3,3,1,4,5,6,7,7};

    // int n = sizeof(arr)/sizeof(arr[0]);

    // int arr1[8] = {0};

    // for(int i=0;i<n ;i++){
    //     arr1[arr[i]]++;
    // }

    // for(int i=0;i<8;i++){
    //     cout<<"The frequency of "<<i<<" is "<<arr1[i]<<"\n";
    // }

    // string s = "saicharankfjalifhaoisdfnoaifaoifhoaifnlazxvnmxnz";

    // int hash[25] = {0};

    // for(int i=0;i<s.length();i++){
        
    //     hash[s[i] - 'a']++;
    // }
    
    // for(int i=0;i<25;i++){
    //     cout<<"The frequency of "<<char(97+i)<<" is "<<hash[i]<<"\n";
    // }

    // int arr[] = {1,2,3,1,2,3,3,4,4,5,5,6};

    // map<int,int>  mpp;

    // for(int i=0;i<12;i++){
    //     mpp[arr[i]]++;
    // }

    // for(auto it:mpp){
    //     cout<<it.first<<" -> "<<it.second<<"\n";
    // }

    int arr[] = {3,2,4,5,6,7};
    // selection_sort(arr,6);
    // bubblesort(arr,6);
    insertionsort(arr,6);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    
    
    return 0;
}