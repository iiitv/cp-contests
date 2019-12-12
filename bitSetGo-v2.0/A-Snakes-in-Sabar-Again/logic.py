def bin_search(arr, x, l, r):
	mid = (l+r)//2
	# print("Mid =", mid)
	if r < l:
		return -1
	if arr[mid] == x:
		return mid
	if x < arr[mid]:
		return bin_search(arr, x, l, mid - 1)
	else:
		return bin_search(arr, x, mid + 1, r)

for _ in range(int(input())):
	l, m, n = map(int, input().split())
	a = list(input().split())
	b = list(map(int, input().split()))
	c = list(map(int, input().split()))
	# print(a,b,c,sep='\n')
	p, q, r = input().split();
	q = int(q)
	r = int(r)
	ap = bin_search(a, p, 0, l-1)
	aq = bin_search(b, q, 0, m-1)
	ar = bin_search(c, r, 0, n-1)
	# print(ap, aq, ar)
	if ap == -1 or aq == -1 or ar == -1:
		print('DOST HI SAANP HAI')
	else:
		print('SNAKE FOUND')
