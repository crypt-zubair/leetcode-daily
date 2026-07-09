int getval(char s){
    switch (s){
        case'I':
        return 1;
        case'V':
        return 5;
        case'X':
        return 10;
        case'L':
        return 50;
        case'C':
        return 100;
        case'D':
        return 500;
        case'M':
        return 1000;
        default:
        return 0;
        }
}
int romanToInt(char* s) {
    int l=strlen(s);
    int total=0;
    for(int i=0;i< l;i++){
        int c=getval(s[i]);
        int nc= getval(s[i+1]);
        if(c<nc){
            total=total-c;
        }else{
            total=total+c;
        }
    }return total;
}