class Solution {
    static int n = 3;
    public int minFallingPathSum(int[][] matrix) {
        int rows = matrix.length;
        int columns = matrix[0].length;
        Integer[][] dp = new Integer[rows][columns];
        int ans = Integer.MAX_VALUE;
        for(int column = 0; column < columns; column += 1) {
            ans = Math.min(ans, minPathSum(rows - 1, column, matrix, dp));
        }
        return ans;
    }
    private static int minPathSum(int row, int column, int[][] matrix, Integer[][] dp) {
        if(row < 0) {
            return 0;
        }
        if(column < 0 || column >= matrix[0].length) {
            return 100000000;
        }
        if(dp[row][column] != null) {
            return dp[row][column];
        }
        int ans = matrix[row][column] + Math.min(minPathSum(row - 1, column - 1, matrix, dp), Math.min(minPathSum(row - 1, column, matrix, dp), minPathSum(row - 1, column + 1, matrix, dp)));
        return dp[row][column] = ans;
    }
}