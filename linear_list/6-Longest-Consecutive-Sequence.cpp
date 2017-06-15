// 建立无序集合existSet visitedSet分别表示原集合中包含的元素和已经访问了的元素
// 全局最大个数maxLen
// 顺序遍历原集合中的元素
//     临时计数count=1
//     如果该元素在visitedSet，停止往下执行，进行下一次循环
//     否则，把比该元素小并且在existSet中的元素存放在visitedSet中，count++
//           把比该元素大并且在existSet中的元素存放在visitedSet中, count++
//     maxLen = max(maxLen, count)

class Solution{
public:
	int longestConsecutive(const vector<int>& nums){
		unordered_map<int ,bool> used;
		for (auto i: nums){
			used[i] = false;
		}

		int longest = 0;
		for(auto i: nums){
			if(used[i])
				continue;

			int length = 1;
			used[i] = true;
			for(int j = i+1; used.find(j)!=used.end(); ++j){
				used[j] = true;
				++length;
			}
			for(int j = i-1; used.find(j)!=used.end(); --j){
				used[j] = true;
				++length;
			}
			longest = max(longest, length);
		}
		return longest;
	}
};