class Solution {
public:
    bool isPalindrome(int x) {
  long long  r,sum=0,temp;    
     
 temp=x;    
 while(x>0)    
{    
 r=x%10;    
 sum=(sum*10)+r;    
 x=x/10;    
} 
bool ans;
if(temp==sum){
    ans=true;
}
else{
     ans=false;       
        }
return ans;         
    }
};