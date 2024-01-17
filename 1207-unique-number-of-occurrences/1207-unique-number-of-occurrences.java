class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        int n= arr.length;
        HashMap<Integer,Integer> freq = new HashMap<Integer,Integer>();
 
    // Store the frequency of each
    // element from the array
    for(int i = 0; i < n; i++)
    {
        if(freq.containsKey(arr[i]))
        {
            freq.put(arr[i], freq.get(arr[i]) + 1);
        }else
        {
            freq.put(arr[i], 1);
        }
    }
 
    HashSet<Integer> uniqueFreq = new HashSet<Integer>();
 
    // Check whether frequency of any
    // two or more elements are same
    // or not. If yes, return false
    for(Map.Entry<Integer,
                  Integer> i : freq.entrySet())
    {
        if (uniqueFreq.contains(i.getValue()))
            return false;
        else
            uniqueFreq.add(i.getValue());
    }
 
    // Return true if each
    // frequency is unique
    return true;
    }
}