//#include<iostream>
//
//#include<string>
//using namespace std;
//
//string Complement(string code) // �Զ����Ƹ���������
//{
//    string t = '1' + code;
//    // �Ƿ��λ
//    bool flag = false;
//
//    // ������
//    for (int i = t.size() - 1; i >= 1; --i)
//    {
//        if (t[i] == '.') continue;
//        if (t[i] == '0') t[i] = '1';
//        else t[i] = '0';
//    }
//    // cout << "����Ϊ��" + t << endl;
//    // �ټ�1
//
//    for (int i = t.size() - 1; i >= 1; --i)
//    {
//        // cout << "����Ϊ��" + t << endl;
//        if (t[i] == '.') continue;
//        if (i == t.size() - 1) // �󷴼�1
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
//            if (flag == true) // �н�λ
//            {
//                if (t[i] == '0') // ����Ҫ��λ
//                {
//                    flag = false;
//                    t[i] = '1';
//                }
//                else        // ��Ҫ��λ
//                {
//                    flag = true;
//                    t[i] = '0';
//                }
//            }
//
//        }
//    }
//    // cout << "����Ϊ��" + t << endl;
//    return t;
//}
//
//string Add(string x, string y) // �������
//{
//    bool flag = false; // �ж��Ƿ��λ
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
//        else if (x[i] != y[i]) // ������ͬ
//        {
//            if (flag) // �н�λ
//            {
//                flag = true;
//                res += '0';
//            }
//            else // û�н�λ
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
//string Jude(string res) // �ж��Ƿ����
//{
//    if (res[0] == res[1]) return "δ���";
//    else if (res[0] == '1') return "�����";
//    else return "�����";
//}
//
//int main()
//{
//
//    string x, y;
//    string res = "";
//    cout << "����x:";
//    cin >> x;
//    cout << "����y:";
//    cin >> y;
//    string tx = x;
//    string ty = y;
//    if (x[0] == '-') // ����Ǹ��� ��ô���Ĳ������Ҫ��һ��
//    {
//        tx = Complement(x.substr(1));
//    }
//    else tx = '0' + x;
//    if (y[0] == '-')// ����Ǹ��� ��ô���Ĳ������Ҫ��һ��
//    {
//        ty = Complement(y.substr(1));
//    }
//    else ty = '0' + y;
//
//     res = Add(tx, ty);    // �ⲿ��Ϊ����[x+y]�����
//     cout << "\n[x + y]��=" + res + '\n';
//     cout << "������Ϊ��" + Jude(res) + '\n';
//
//
//    if (y[0] == '-')  // // �ⲿ��Ϊ����[x-y]�����
//    {
//        y[0] = '0';
//        res = Add(tx, y);
//    }
//    else res = Add(tx, Complement(y));
//    cout << "[x - y]��=" + res + '\n';
//    cout << "������Ϊ��" + Jude(res) + '\n';
//    return 0;
//}
