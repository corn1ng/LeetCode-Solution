class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer> map =new HashMap<>();
        int len =nums.length;
        int u;
        for(int i=0;i<len;i++)
        {
            if(map.containsKey(nums[i]))
            {
              u= map.get(nums[i]);
              u=u+1;
              map.put(nums[i],u);
            }
            else
            {
                map.put(nums[i],1);
            }
        }
        int max=0;
        int res=0;
        Iterator iter = map.entrySet().iterator();
        while(iter.hasNext())
        {
         Map.Entry entry = (Map.Entry) iter.next();
         if((Integer)entry.getValue() >= max)
            {
            max=(Integer)entry.getValue();
            res=(Integer)entry.getKey();
            }
        }
        return res;
    }
}
