def Permu(lst, N):
    resultLst =[]

    if N == 0:
        return [[]]

    for i in range(N):
        tmp1 = lst[i]
        for tmp2 in Permu(lst[:i] + lst[i+1:], N - 1):
            resultLst.append([tmp1] + tmp2)

    return resultLst
   
N = int(input(""))
permuLst = Permu(list(range(1, N + 1)), N)
for i in permuLst:
    print(' '.join(map(str, i)))