class Solution {
    public List<List<Integer>> findWinners(int[][] matches) {
        Map<Integer, Integer> wins = new HashMap<>();
        Map<Integer, Integer> losses = new HashMap<>();
        
        for (int[] match : matches) {
            wins.put(match[0], wins.getOrDefault(match[0], 0) + 1);
            wins.put(match[1], wins.getOrDefault(match[1], 0));
            
            losses.put(match[1], losses.getOrDefault(match[1], 0) + 1);
            losses.put(match[0], losses.getOrDefault(match[0], 0));
        }
        
        List<Integer> notLost = new ArrayList<>();
        List<Integer> lostOnce = new ArrayList<>();
        
        for (int player : wins.keySet()) {
            int winsCount = wins.get(player);
            int lossesCount = losses.get(player);
            
            if (winsCount > 0 && lossesCount == 0) {
                notLost.add(player);
            }
            
            if (lossesCount == 1) {
                lostOnce.add(player);
            }
        }
        
        notLost.sort(null);
        lostOnce.sort(null);
        
        List<List<Integer>> result = new ArrayList<>();
        result.add(notLost);
        result.add(lostOnce);
        
        return result;
    }
}