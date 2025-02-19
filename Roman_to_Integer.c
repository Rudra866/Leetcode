int romanToInt(char* s) {
    int val[1000] = {} ;
    val['I'] = 1;
    val['V'] = 5;
    val['X'] = 10;
    val['L'] = 50;
    val['C'] = 100;
    val['D'] = 500;
    val['M'] = 1000;
    int len = strlen(s);
    int num=0;
    for(int i =0; i<len-1; i++){
        if (val[s[i]]<val[s[i+1]]){
            num -= val[s[i]];
        }
        else{
            num+=val[s[i]];
        }
    }
    num += val[s[len-1]];
    return num;
    
}


