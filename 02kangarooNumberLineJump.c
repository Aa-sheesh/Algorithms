char *kangaroo(int x1, int v1, int x2, int v2)
{
    while ((x1 >= 0 && x1 <= 10000) && (x2 >= 0 && x2 <= 10000) && (v1 >= 0 && v1 <= 10000) && (v2 >= 0 && v2 <= 10000))
    {
        // Never Catch Up Condition
        if ((x1 > x2 && v1 > v2) || (x2 > x1 && v2 > v1))
            return "NO";

        // Catchup Condition
        //kangaroo 1 catchup
        if(x1<x2&&v1>v2){
            if((x2-x1)%(v1-v2)==0){
                return "YES";
            }
            else{
                return "NO";
            }
        }
        //kangaroo 2 catchup
        if(x2<x1&&v2>v1){
            if((x1-x2)%(v2-v1)==0){
                return "YES";
            }
            else{
                return "NO";
            }
        }
        //Never Catchup Condition
        if(x1==x2&&v1==v2){
            return "YES";
        }
        else{
            return "NO";
        }
    }
    return "NO";
}