#include <iostream>

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

    palindrome(0,"madamc");
    
    
    return 0;
}