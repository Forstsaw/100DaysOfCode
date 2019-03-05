print("Depth First Search")
print("   By ForstSaw\n\n")




print("Register Node in one line: ")
vertex = [i.upper() for i in input().split()]
#vertex = ["A","B","C","D","E"] #for debug


leng_node = len(vertex)
connected = [[i,input("Node {} connected to :  ".format(i)).upper().split()]for i in vertex ]
#connected = [['A', ['B', 'C']], ['B', ['A', 'E']], ['C', ['A', 'E',"D"]], ['D', ['C']], ['E', ['B', 'C']]]

start = str(input("Starting Node: ").upper()) #you can start from anywhere

visited = [start]
stack = [start]
temp = 0
while True:
    
    
    for i in connected:
        check = False
        if i[0] == start:
            
            for j in range(len(i[1])):
                if i[1][j] not in visited:
                    
                    stack.append(i[1][j])
                    visited.append(i[1][j])
                    check =  True
                if check == True:
                    break      
    

    leng = len(stack)-1
    start = stack[leng]
    
    
    if temp == start:
        #filo  = first in last out
        #if they found all destination already visited then start removing
        #example Node C : B E ,B and E already visited then removing c or last index
        stack.pop()
    if len(visited) == leng_node: #if all node already visited then stop looping
        break
    else:
        temp = start
    
    
    
            
print(visited)


"""
Example 2:
A--B--C
|  |
|  |
D  |
|  f--G
| /  /
E/ H/

RESULT = ['A', 'B', 'C', 'F', 'E', 'D', 'G', 'H']
vertex = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H']
connected = [['A', ['B', 'D']], ['B', ['A', 'C', 'F']], ['C', ['B']],
['D', ['A', 'E']], ['E', ['D', 'F']],
['F', ['B', 'E', 'G']], ['G', ['F', 'H']], ['H', ['G']]]
Register Node in one line
a b c d e f g h
Node A connected to : 
b d
Node B connected to : 
a c f
Node C connected to : 
b
Node D connected to : 
a e
Node E connected to : 
d f
Node F connected to : 
b e g
Node G connected to : 
f h
Node H connected to : 
g
Starting Node: a

"""









            
