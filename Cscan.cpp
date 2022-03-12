import copy

queue = [143, 86, 1470, 913, 1774, 948, 1509, 1022, 1750, 130];

prev = None
total = 0
for i in queue:
    if prev is not None:
        total += abs(i-prev)
        prev = i
    else:
        prev = i
print "a. FCFS:", total



q = copy.copy(queue)
def find_nearest(n):
    nearest = None
    for i in q:
        if nearest is None:
            nearest = i
        elif abs(i-n) < abs(nearest-n):
            nearest = i
    return nearest

curr = q.pop(0)
total = 0
seq = [curr]
while len(q)>0:
    nxt = find_nearest(curr)
    seq.append(nxt)
    total += abs(nxt - curr)
    q.remove(nxt)
    curr = nxt
print "b. SSTF:", total, seq



q = copy.copy(queue)
total = 0
direction = 1
curr = q.pop(0)
seq = [curr]
while len(q)>0:
    curr += direction
    total += 1
    if curr in q:
        q.remove(curr)
        seq.append(curr)
    if curr == 4999:
        direction = -1
    if curr == 0:
        direction = 1
print "c. SCAN:", total, seq


q = copy.copy(queue)
total = 0
direction = 1
curr = q.pop(0)
seq = [curr]
while len(q)>0:
    curr += direction
    total += 1
    if curr in q:
        q.remove(curr)
        seq.append(curr)
    if len(q) == 0:
        break
    if max(q) < curr:
        direction = -1
    if min(q) > curr:
        direction = 1
print "d. LOOK:", total, seq


# C-SCAN
q = copy.copy(queue)
total = 0
curr = q.pop(0)
seq = [curr]
while len(q)>0:
    curr += 1
    total += 1
    if curr in q:
        q.remove(curr)
        seq.append(curr)
    if curr == 4999:
        curr = 0
        total += 4999
print "e. C-SCAN:", total, seq


# C-LOOK
q = copy.copy(queue)
total = 0
curr = q.pop(0)
seq = [curr]
while len(q)>0:
    curr += 1
    total += 1
    if curr in q:
        q.remove(curr)
        seq.append(curr)
    if len(q) == 0:
        break
    if max(q) < curr:
        tmp = curr
        curr = min(q) -1
        total += abs(tmp - curr) -2
print "f. C-LOOK:", total, seq