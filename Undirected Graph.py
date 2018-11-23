print("Undirected Graph")
print("  by ForstSaw\n\n\n")
class Graph:
    #joining them into 1 list
    def addNode(self,original,destination):
        self.ori = original
        self.dest = destination
        c = [self.ori,self.dest]
        return c

#How many Vertices or Node in the graph
vertex = int(input("Vertices: "))
connect = [] #joining them all 
g = Graph()
for i in range(vertex):
    a = input("Origin: ") # 1
    b = input("Destination: ") #2
    c = g.addNode(a,b) #ex 1-2 then 1-3 then 2-3 ,this make a triangle
    connect.append(c)
    
print()
print("Connected Node")
print(connect)




while True:
    qu = input("Check Path of Node: ")
    if qu == "-1":
        print("Done")
        break
    temp = []

    #check who is connected to your node
    for i in connect:
        if qu == i[0]:
            temp.append(i[1])
        elif qu == i[1]:
            temp.append(i[0])
            
                
    
    print("Vertice that connected")
    print(temp)
            
    





