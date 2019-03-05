print("Bipartite Checker")
print("   BY FORSTSAW\n\n")
print("Edge : (Node = Edge-1)")
v = int(input())

from collections import OrderedDict
od = OrderedDict()
for i in range(v-1):
    a,b = list(map(int,input().split()))
    if a not in od:
        od[a] = [b]
    if b not in od:
        od[b] = [a]
    if a in od and b not in od[a]:
        
        od[a].append(b)
    if b in od and a not in od[b]:
        od[b].append(a)
        
    
    

print(od)
check = ""
temp = -2
color = [[i,-1] for i in range(1,max(od)+1)]
colors = [[i,-1] for i in range(1,max(od)+1)]
color[0] = [1,0]
colors[0] = [1,0]
for i in od:
    c = od[i]
    for j in c:
        #check if the number dont have the color and check the parent so it cant be similar(cant update)
        if color[j-1][1] == -1 and color[i-1][1] == 0: 
            color[j-1] = [j,1]
        elif color[j-1][1] == -1 and color[i-1][1] == 1:
            color[j-1] = [j,0]

        #check again but its not similar because this checker will update the colors if they found cycle graph
        if color[i-1][1] != -1: 
            if color[i-1][1] == 0:
                temp = 1
                if color[j-1][1] == temp:
                
                    check = "BIPARTITE"
                else:
                    
                    check = "NOT BIPARTITE"
                    break
            elif color[i-1][1] == 1:
                temp = 0
                if color[j-1][1] == temp:
                
                    check = "BIPARTITE"
                else:
                    
                    check = "NOT BIPARTITE"
                    break

            
            
                
                
                
                
        


print("CHECKER = THIS GRAPH IS ",check)
            
print("COLOR : ",color)

"""
not bipartite
9
1 2
1 3
2 4
2 5
3 6
6 5
5 7
7 8

A--B--C
|  |
|  |
D  |
|  f--G
| /  /
E/ H/



bipartite
7
1 2
1 3
2 4
3 4
2 5
3 5
5 6
"""

    









                
            
            
        
            
    
    
    
