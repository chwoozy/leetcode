class Solution {
    public int findCheapestPrice(int n, int[][] flights, int src, int dst, int K) {
        List<List<int[]>> adj=new ArrayList();
        for(int i=0;i<n;i++) adj.add(new ArrayList());
        for(int[] e: flights) adj.get(e[0]).add(new int[]{e[1],e[2]});
        PriorityQueue<int[]> pq = new PriorityQueue<>((a,b) -> a[1]-b[1]);
        pq.add(new int[]{src, 0, K});
        while(!pq.isEmpty()) {
            int[] curr = pq.poll();
            if(curr[0] == dst) return curr[1];
            if(curr[2]>=0) {      
                for(int[] child : adj.get(curr[0])) {
                    pq.add(new int[]{child[0], curr[1]+child[1], curr[2]-1});
                }
            }
        }
        return -1;
    }
}

// https://leetcode.com/problems/cheapest-flights-within-k-stops/