T = int(input(""))

for i in range(T):
    s = input("")
    s_lst = []
    flag = False
    for ch in s:
        if ch == '(':
            s_lst += ch
        else:
            if len(s_lst) == 0:
                flag = True
                break
            else:
                s_lst.pop()
    if flag:
        print("NO")
    else:
        if len(s_lst) == 0:
            print("YES")
        else:
            print("NO")
    