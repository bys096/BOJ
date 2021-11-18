# https://www.acmicpc.net/problem/1406
from sys import stdin

stack_l = list(stdin.readline().strip())
stack_r = []
n = int(input())

for _ in range(n):
    temp = stdin.readline()
    if temp[0] == 'L':
        if not stack_l:
            continue
        stack_r.append(stack_l.pop())
    elif temp[0] == 'D':
        if not stack_r:
            continue
        stack_l.append(stack_r.pop())
    elif temp[0] == 'B':
        if not stack_l:
            continue
        stack_l.pop()
    elif temp[0] == 'P':
        stack_l.append(temp[2])

stack_r.reverse()
stack_l.extend(stack_r)
print(''.join(stack_l))