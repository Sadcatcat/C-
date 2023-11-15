#include<iostream>
using namespace std;
//
//////给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
//////有效字符串需满足：
//////左括号必须用相同类型的右括号闭合。
//////左括号必须以正确的顺序闭合。
//////每个右括号都有一个对应的相同类型的左括号。
////#include<stack>
////#include <unordered_map>
////class Solution {
////public:
////    
////    bool isValid(string s) {
////        unordered_map<char, char>pirse=//定义一个相当于python字典一样的容器，设置键与值
////        { {'(',')'},{'{','}'},{'[',']'}};
////        stack<char>result;
////        for (int i = 0; i < s.size(); i++) {
////            //find函数通过键找到值，若未找到，则返回end迭代器；
////            if (pirse.find(s[i]) != pirse.end())
////            {
////                result.push(pirse[s[i]]);
////            }
////            else
////            {
////                if (result.empty() || result.top() != s[i])
////                {
////                    return false;
////                }
////                result.pop();
////            }
////        }
////        return result.empty();//不为空返回0，为空为1
////    }
////};
////
////int main() 
////{
////    Solution s;
////    cout << s.isValid("({}){}");
////}
//
//
//
//////容器训练（vector）
//////编写一个函数来查找字符串数组中的最长公共前缀。
//////
//////如果不存在公共前缀，返回空字符串 ""。
//////
//////
//////
//////示例 1：
//////
//////输入：strs = ["flower", "flow", "flight"]
//////输出："fl"
//////示例 2：
//////
//////输入：strs = ["dog", "racecar", "car"]
//////输出：""
//////解释：输入不存在公共前缀。
////#include<vector>
////#include<iostream>
////#include<algorithm>
////class Solution {
////public:
////    string result;
////    vector<string>s;
////    bool is_same(vector<string>& s)
////    {
////        string str = s.front();
////        int i = 1;
////        for (i; i < s.size(); i++)
////        {
////            
////            if (str!= s[i]) break;
////        }
////
////        if (i == s.size())
////            return true;
////        else
////            return false;
////
////    }
////
////    string longestCommonPrefix(vector<string>& strs)
////    {
////        if (strs.size() == 1) return strs.front();
////        int start = 0;
////        sort(strs.begin(), strs.end(), [](string a, string b) {return a.size() < b.size(); });//先进行个数的自定义升序排列
////        for (int i = 0; i < strs.front().size(); i++, start++)
////        {
////        for (vector<string>::iterator it = strs.begin(); it != strs.end(); it++)
////        {
////            s.push_back((*it).substr(start, 1));
////        }
////        if (is_same(s))
////        {
////            result += s.front();
////            s.clear();
////        }
////        else if (!result.empty())
////            return result;
////        else
////            return "";
////     
////        }
////     return result;
////    }
////
////
////};
////
////int main()
////{
////    Solution p;
////    vector<string>str;
////    str.push_back("a");
////    str.push_back("ab");
////    str.push_back("abc");
////    str.push_back("abcd");
////    cout <<  p.longestCommonPrefix(str) << endl;
////
////}
//
//
//
//
//////罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。
//////
//////字符          数值
//////I             1
//////V             5
//////X             10
//////L             50
//////C             100
//////D             500
//////M             1000
//////例如， 罗马数字 2 写做 II ，即为两个并列的 1 。12 写做 XII ，即为 X  + II 。 27 写做  XXVII, 即为 XX  + V  + II 。
//////
//////通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：
//////
//////I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
//////X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
//////C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
//////给定一个罗马数字，将其转换成整数。
////#include<string>
////#include<vector>
////#include<algorithm>
////class Solution {
////public:
////    vector<int>tage;
////    int result=0;
////    int romanToInt(string s) {
////       if (s.size() == 2)
////        {
////            switch (s[0])
////            {
////            case 'I':if (s[1] == 'V') return 4; else if (s[1] == 'X') return 9; break;
////            case 'X':if (s[1] == 'L') return 40; else if (s[1] == 'C') return 90; break;
////            case 'C':if (s[1] == 'D') return 400; else if (s[1] == 'M') return 900; break;
////            }
////        }
////    
////        { 
////            for (int i = 0; i < s.size(); i++)
////            {
////                switch (s[i])
////                {
////                case'I': tage.push_back(1); break;
////                case'V': tage.push_back(5); break;
////                case'X': tage.push_back(10); break;
////                case'L': tage.push_back(50); break;
////                case'C': tage.push_back(100); break;
////                case'D': tage.push_back(500); break;
////                case'M': tage.push_back(1000); break;
////                default:return 0;
////                }
////            }
////            
////            if (!tage.empty())
////            {
////                int sum = tage[0];
////                for (int i = 1; i < tage.size(); i++)
////                {
////                    if (sum <tage[i])
////                        result -= sum;
////                    else
////                        result += sum;
////                    sum = tage[i];
////                }
////                result += sum;
////                return result;
////            }
////            return 0;
////        }
////        
////    }
////};
////
////
////int main()
////{
////    Solution s;
////    cout << s.romanToInt("MCMXCIV");
////}
//
//
//////给你一个 升序排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。
//////
//////由于在某些语言中不能改变数组的长度，所以必须将结果放在数组nums的第一部分。更规范地说，如果在删除重复项之后有 k 个元素，那么 nums 的前 k 个元素应该保存最终结果。
//////
//////将最终结果插入 nums 的前 k 个位置后返回 k 。
//////
//////不要使用额外的空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
//////
//////来源：力扣（LeetCode）
//////链接：https ://leetcode.cn/problems/remove-duplicates-from-sorted-array
//////著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
////
////#include<vector>
////
////void printVector(vector<int>& V)
////{
////    for (vector<int>::iterator it = V.begin(); it != V.end(); it++)
////    {
////        cout << *it << " ";
////    }
////    cout << endl;
////}
////
////class Solution {
////public:
////    int removeDuplicates(vector<int>& nums) {
////        for (vector<int>::iterator it = nums.begin(); it != nums.end() - 1;)
////        {
////               
////            if (*it == *(it + 1))
////            {
////                it=nums.erase(it);  //删除后，必须让迭代器接受函数的返回值，函数返回的是下一个位置的迭代器，不接受会让当前迭代器失效
////            }
////            else
////                it++;
////            
////        }
////        printVector(nums);
////        return nums.size();
////    }
////};
////
////int main()
////{
////    Solution S;
////    vector<int> nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
////    S.removeDuplicates(nums);
////    
////
////}
//
//
//
//
//////反转链表
//////给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
////
////  struct ListNode {
////     int val;
////     ListNode *next;
////     ListNode() : val(0), next(nullptr) {}
////     ListNode(int x) : val(x), next(nullptr) {}
////     ListNode(int x, ListNode *next) : val(x), next(next) {}
//// };
//// 
////  class Solution {
////  public:
////      ListNode* reverseList(ListNode* head) {
////          ListNode* prev = nullptr;
////          ListNode* curr = head;
////          while (curr) {
////              ListNode* next = curr->next;
////              curr->next = prev;
////              prev = curr;
////              curr = next;
////          }
////          return prev;
////      }
////  };
//
//
////N皇后
//
//#include<vector>
//#include<math.h>
//class Solution {
//public:
//
//   
//
//    int Q[10];
//    vector<string>count_queen;
//    vector<vector<string>> Queen;
//   
//    
//
//    bool islegal(int j,int n)
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            if (Q[i] == Q[j] || abs(Q[i] - Q[j]) == j - i)
//                return 0;
//        }
//        return 1;
//    }
//
//    void isQueen(int j,int n)
//    {   
//        for (int i = 1; i <= n; i++)
//        {
//            Q[j] = i;
//            if (islegal(j, n))
//            {
//                if (j == n)
//                {
//                  
//                }
//                else
//                    isQueen(j + 1, n);
//            }
//            
//        }
//    }
//
//    vector<vector<string>> solveNQueens(int n) {
//    
//        for (int i = 1; i <= n; i++)
//        {
//            count_queen.push_back(".");
//        }
//
//        for (int i = 1; i <= n; i++)
//        {
//            Queen.push_back(count_queen);
//        }
//      
//       isQueen(1, n);
//
//        for (vector<vector<string>>::iterator it = Queen.begin(); it != Queen.end(); it++)
//        {
//            for (vector<string>::iterator is = count_queen.begin(); is != count_queen.end(); is++)
//            	cout << *is;
//            	cout<<endl;
//        }
//
//        return Queen;
//    }
//};
//
//
//int main()
//{
//    Solution S;
//    S.solveNQueens(4);
//    system("pause");
//    return 0;
//}

////算法入门
////二分查找
//#include<vector>
//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//        int n = nums.size();
//        int left = 0;
//        int right = n - 1;
//        int mid;
//        /* int i = 0;
//         for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++,i++)
//         {
//             if (*it == target)
//                 return i;
//         }
//         return -1;*/
//        while (left <= right)
//        {
//            mid = (left + right) / 2;
//            if (nums[mid] == target)
//                return mid;
//            if (nums[mid] > target)
//                right = mid - 1;
//            else
//                left = mid + 1;
//        }
//        return -1;
//    }
//};
//
//int main()
//{
//    Solution S;
//    vector<int>V={ - 1, 0, 3, 5, 9, 12 };
//    cout << S.search(V, 9) << endl;
//    system("pause");
//    return 0;
//}

//#include<string.h>
//class Solution {
//public:
//    int maxLengthBetweenEqualCharacters(string s) {
//        int j = s.size() - 1;
//        for (int i = 0; i <= j; i++)
//        {
//            for (int x = j; x > i; x--)
//                if (s[i] == s[x])
//                    return x - (i + 1);
//
//        }
//        return -1;
//    }
//};
//
//int main()
//{
//    Solution S;
//    cout << S.maxLengthBetweenEqualCharacters("mgntdygtxrvxjnwksqhxuxtrv") << endl;
//}



//#include<string>
//class Solution {
//public:
//    int countTime(string time) {
// 
//
//        
//        int h1,h2, m1, m2;
//        h1 = h2 = m1 = m2 = 1;
//
//        if (time.substr(0,1) == "?") h1 = time.substr(1, 1) == "?" ? 3 : stoi(time.substr(1, 1)) >= 4 ? 2 : 3;
//        if (time.substr(1, 1) == "?") h2 = time.substr(0, 1) == "?" ?8: stoi(time.substr(0, 1)) < 2 ?10: stoi(time.substr(0, 1)) ==2?4:8;
//        if (time.substr(3, 1) == "?") m1 = 6;
//        if (time.substr(4, 1) == "?") m2 = 10;
//
//        return h1*h2*m1*m2;
//    }
//};
//
//int main()
//{
//    Solution S;
//    cout << S.countTime("??:??");
//}


//class Solution {
//public:
//    int conut(int num)
//    {
//        int ct = 0;
//        while (num > 0)
//        {
//            num = num / 10;
//                ct++;
//        }
//        return ct;
//    }
//    int alternateDigitSum(int n) {
//        int f = 1;
//        int sum = 0;
//        if (conut(n) % 2 != 0) f = -1;
//        while (n > 0)
//        {
//            sum = f * n % 10 + sum;
//            n = n / 10;
//            f = -f;
//        }
//        return sum;
//    }
//    
//};
//
//int main()
//{
//    Solution S;
//    cout << S.alternateDigitSum(886996);
//}

//删除链表倒数第n个数，在leetcode上无法运行，但是在vs上可以运行
//#include<stack>
//using namespace std;
// struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        stack<ListNode*> S;
//        ListNode* p = head;
//        ListNode* last = nullptr; // 初始化为nullptr
//
//        while (p != NULL) {
//            S.push(p);
//            p = p->next;
//        }
//
//        if (S.size() >= n && !S.empty()) {
//            for (int i = 1; i <= n; i++) {
//                if (n != 1) {
//                    last = S.top();
//                    S.pop();
//                    if (i + 1 == n && !S.empty()) {
//                        p = S.top()->next;
//                        S.pop();
//                    }
//                }
//                else {
//                    p = S.top()->next;
//                    S.pop();
//                    if (!S.empty()) {
//                        last = S.top();
//                    }
//                }
//            }
//
//            if (last != nullptr) {
//                last->next = p;
//            }
//            else {
//                return p;
//            }
//        }
//        return head;
//    }
//};
//
//int main()
//{
//    Solution S;
//    ListNode* head = new ListNode;
//    ListNode* p = head;
//
//    for (int i = 1; i <= 2; i++) {
//        ListNode* St = new ListNode;
//        St->val = i;
//        St->next = NULL;
//        p->next = St;
//        p = St;
//    }
//    p = head->next;
//    p= S.removeNthFromEnd(head, 2);
//    
//    while (p != NULL) {
//        cout << p->val << " -> ";
//        p = p->next;
//    }
//    cout << "NULL" << endl;
//
//
// 
//}