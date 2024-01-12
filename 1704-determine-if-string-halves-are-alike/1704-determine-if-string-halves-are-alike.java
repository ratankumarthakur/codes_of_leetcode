class Solution {
    public boolean halvesAreAlike(String s) {
        
        String sm=s.toLowerCase();
        String a = sm.substring(0, sm.length()/2);
        String b = sm.substring(sm.length()/2, sm.length());
        int a1=0,b1=0;
        for (int i = 0; i<a.length(); i++) {
            char A=a.charAt(i);
            if(A=='a' ||A=='e' ||A=='i' || A=='o' || A=='u'){
                a1++;
            }
        }
        for (int i = 0; i<b.length(); i++) {
            char B=b.charAt(i);
            if(B=='a' ||B=='e' ||B=='i' || B=='o'|| B=='u'){
                b1++;
            }
        }
    if(a1==b1){
            return true;
        }else{
            return false;
        }
}
}