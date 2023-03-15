int reverseDigit(int value){
    if(n<0){
        return -1;
    }
    if(n<10){
        return value;
    }else{
        int n = log10(value);
        return (value%10)*(pow(10,n))+reverseDigit(value/10);
    }
}