from sys import stdin
from collections import deque
n = int(input())
q = deque()

for i in range(n):
    cmd = stdin.readline().rstrip().split()

    if cmd[0] == 'pop' :
        if (not q) : print(-1)
        else: print(q.popleft())
    elif cmd[0] == 'size':
        print(len(q))
    elif cmd[0] == 'empty':
        if (not q): print(1)
        else: print(0)
    elif cmd[0] == 'front':
        print(q[0])
    elif cmd[0] == 'back':
        print(q[-1])
    else: q.append(cmd[1])