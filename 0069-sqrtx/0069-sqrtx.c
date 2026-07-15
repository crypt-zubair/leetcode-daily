int mySqrt(int x) {
    if(x==0) return 0;
    long long low=1;
    long long end=x;
    long long ans=0;
    
    while(low<=end){long long mid=low+(end-low)/2;
        if(mid*mid==x){
            return mid;
        }
        else if (mid*mid>x){
            end=mid-1;
           
        }else{ ans=mid;
            low=mid+1;
        }
    }
return ans;
}