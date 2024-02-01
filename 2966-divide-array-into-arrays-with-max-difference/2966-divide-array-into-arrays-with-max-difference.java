class Solution {
    public int[][] divideArray(int[] nums, int k) {
        List<List<Integer>> result = new ArrayList<>();

        // Sort the array
        Arrays.sort(nums);

        // Iterate through the array and create groups of size 3
        for (int i = 0; i < nums.length; i += 3) {
            List<Integer> group = new ArrayList<>();
            // Add elements to the group
            for (int j = i; j < i + 3 && j < nums.length; j++) {
                group.add(nums[j]);
            }
            // Check if the difference between any two elements in the group is less than or equal to k
            if (group.size() == 3 && group.get(2) - group.get(0) <= k) {
                result.add(group);
            } else {
                // If conditions are not satisfied, return an empty array
                return new int[0][0];
            }
        }

        // Convert the List<List<Integer>> to int[][]
        int[][] resultArray = new int[result.size()][];
        for (int i = 0; i < result.size(); i++) {
            resultArray[i] = result.get(i).stream().mapToInt(Integer::intValue).toArray();
        }

        return resultArray;
    }
}