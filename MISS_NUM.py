t=int(input())
for _ in range(t):
	lst=[int(x) for x in input().split()]
	lst.sort()
	prod=lst[3]
	if(0 in lst):
		sub=lst[0]
		add=lst[2]
		a=(sub+add)//2
		b=add-a
		if(a+b in lst):
			lst.remove(a+b)
			if(a-b in lst):
				lst.remove(a-b)
				lst.remove(prod)
				if(a//b in lst):
					print(a,b)
					continue
		print(-1,-1)
	else:
		div=lst[0]
		add=lst[2]
		sub=lst[1]
		a=(sub+add)//2
		b=add-a	
		if(a+b in lst):
			lst.remove(a+b)
			if(a-b in lst):
				lst.remove(a-b)
				lst.remove(prod)
				if(a//b in lst):
					print(a,b)
					continue
		print(-1,-1)			
		
						