#include<iostream>
using namespace std;

bool ispossible(int arr,int n,int m,int mid){
    int studentcount=1;
    int pagesum=0;

    for(int i=0; i<n; i++){
        if(pagesum+arr[i] <= mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount > m || arr[i] > mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}

int main(){
    int arr[4]={10,20,30,40};
    
    int m;

    int s=0;
    int sum;
    for(int i=0; i<4; i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;

    int mid=s+(e-s)/2;

    while(s<=e){
        if(ispossible(arr,4,2,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}