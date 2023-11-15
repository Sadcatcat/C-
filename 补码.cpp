//#include<iostream>
//
//#include<string>
//using namespace std;
//
//string Complement(string code) // 对二进制浮点数求补码
//{
//    string t = '1' + code;
//    // 是否进位
//    bool flag = false;
//
//    // 先求反码
//    for (int i = t.size() - 1; i >= 1; --i)
//    {
//        if (t[i] == '.') continue;
//        if (t[i] == '0') t[i] = '1';
//        else t[i] = '0';
//    }
//    // cout << "反码为：" + t << endl;
//    // 再加1
//
//    for (int i = t.size() - 1; i >= 1; --i)
//    {
//        // cout << "补码为：" + t << endl;
//        if (t[i] == '.') continue;
//        if (i == t.size() - 1) // 求反加1
//        {
//            if (t[i] == '1')
//            {
//                flag = true;
//                t[i] = '0';
//            }
//            else t[i] = '1';
//        }
//        else
//        {
//            if (flag == true) // 有进位
//            {
//                if (t[i] == '0') // 不需要进位
//                {
//                    flag = false;
//                    t[i] = '1';
//                }
//                else        // 需要进位
//                {
//                    flag = true;
//                    t[i] = '0';
//                }
//            }
//
//        }
//    }
//    // cout << "补码为：" + t << endl;
//    return t;
//}
//
//string Add(string x, string y) // 补码相加
//{
//    bool flag = false; // 判断是否进位
//    string res = "";
//    for (int i = x.size() - 1; i >= 0; --i)
//    {
//        // cout << "res :" + res << " ";
//        // if (flag) cout << "true\n";
//        // else cout << "false\n";
//
//        if (x[i] == '.')
//        {
//
//            res += '.';
//            continue;
//        }
//        if (x[i] == y[i] && x[i] == '1')
//        {
//            if (flag) res += '1';
//            else res += '0';
//            flag = true;
//        }
//        else if (x[i] == y[i] && x[i] == '0')
//        {
//            if (flag)
//            {
//                res += '1';
//                flag = false;
//            }
//            else res += '0';
//        }
//        else if (x[i] != y[i]) // 两个不同
//        {
//            if (flag) // 有进位
//            {
//                flag = true;
//                res += '0';
//            }
//            else // 没有进位
//            {
//                flag = false;
//                res += '1';
//            }
//        }
//    }
//    reverse(res.begin(), res.end());
//    return res;
//}
//
//string Jude(string res) // 判断是否溢出
//{
//    if (res[0] == res[1]) return "未溢出";
//    else if (res[0] == '1') return "负溢出";
//    else return "正溢出";
//}
//
//int main()
//{
//
//    string x, y;
//    string res = "";
//    cout << "输入x:";
//    cin >> x;
//    cout << "输入y:";
//    cin >> y;
//    string tx = x;
//    string ty = y;
//    if (x[0] == '-') // 如果是负数 那么它的补码就需要变一下
//    {
//        tx = Complement(x.substr(1));
//    }
//    else tx = '0' + x;
//    if (y[0] == '-')// 如果是负数 那么它的补码就需要变一下
//    {
//        ty = Complement(y.substr(1));
//    }
//    else ty = '0' + y;
//
//     res = Add(tx, ty);    // 这部分为计算[x+y]的情况
//     cout << "\n[x + y]补=" + res + '\n';
//     cout << "溢出情况为：" + Jude(res) + '\n';
//
//
//    if (y[0] == '-')  // // 这部分为计算[x-y]的情况
//    {
//        y[0] = '0';
//        res = Add(tx, y);
//    }
//    else res = Add(tx, Complement(y));
//    cout << "[x - y]补=" + res + '\n';
//    cout << "溢出情况为：" + Jude(res) + '\n';
//    return 0;
//}
