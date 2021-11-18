# https://www.acmicpc.net/problem/9012
def check(str):
    sum = 0
    for j in range(len(str)):
        if str[j] == '(':
            sum += 1
        elif str[j] == ')':
            sum -= 1
            if sum == -1:
                return False
    if sum == 0:
        return True

n = int(input())
for i in range(n):
    str = input()
    if check(str) ==  True: print('YES')
    else: print('NO')
