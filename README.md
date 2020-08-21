# 2SUM
Fastest 2Sum O(N) using previous map

Using unordered_map faster than map 

Previous map là gì ?

Previous map đơn giản là map nhưng thay vì ta cần một vòng for để khởi tạo map 
thì ta khởi tạo previous map sau khi đọc giá trị làm code nhanh hơn
      unordered_map<int, int> prev_map;
        for (int i=0; i<nums.size(); i++) {
            int compliment = target-nums[i];
            if (prev_map.count(compliment)) {
                return {prev_map[compliment],i};
            }
            prev_map[nums[i]]=i;
        }
        return {};
Cách thông thường sẽ là 
      unordered_map<int, int> map;
      for (int i=0; i<nums.size(); i++) {
          map[nums[i]] = i;
      }
      for (int i=0; i<nums.size(); i++) {
          int need = target - nums[i]
          if (map.count(need) && map[need] != i) {
              return {i, map[need]};
          }
      }
      
https://leetcode.com/submissions/detail/383704082/
