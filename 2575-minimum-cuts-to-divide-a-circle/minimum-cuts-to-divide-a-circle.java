class Solution {
    public int numberOfCuts(int n) {
        if(n==1){//number of slices kitne chahiye
            return 0;//number of cut kitne lgane h
        }

        else if(n%2==0){//even number of slices
             return n/2;//usk hisab se kitne cuts
        }

        else{
            return n;//odd number of slice me slice=cut
        }
    }
}