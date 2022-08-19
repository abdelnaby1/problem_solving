int mySqrt(int x)
{
    // a way by binary search
    // long long int l = 0;
    // long long int r = x;
    // while(l<r){
    //     long long int middle = r+(r-l)/2;
    //     if(middle*middle <=x){
    //         l = middle +1;
    //     }else{
    //         r = middle -1;
    //     }
    // }
    // return l;
    //}

    // another way
    long long int i = 1;
    while (i * i <= x)
        i++;
    return (i - 1);
}