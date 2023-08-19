//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void interleave(queue<int> &q){
    int n=q.size();
    if(q.empty()){
        return;
    }
    int k= n/2;
    int count=0;
    queue<int> q2;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        q2.push(temp);
        count++;
        if(count==k){
            break;
        }
    }
    while(!q.empty() && !q2.empty()){
        int first=q2.front();
        q2.pop();
        q.push(first);
        int second=q.front();
        q.pop();
        q.push(second);
    }
    if(n&1)
    {
        int element=q.front();
        q.pop();
        q.push(element);
    }
}
    vector<int> rearrangeQueue(queue<int> &q){
       
        vector<int> v;
        interleave(q);
        while(!q.empty()){
            int ele=q.front();
            q.pop();
            v.push_back(ele);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends