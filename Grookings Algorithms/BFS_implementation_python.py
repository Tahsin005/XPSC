from collections import deque

graph = {}
graph["you"] = ["alice", "bob", "claire"]
graph["bob"] = ["anuj", "peggy"]
graph["alice"] = ["peggy"]
graph["claire"] = ["thom", "jonny"]
graph["anuj"] = []
graph["peggy"] = []
graph["thom"] = []
graph["jonny"] = []


def person_is_seller(name):
    return name[-1] == 'm'

def bfs():
    search_queue = deque()
    
    search_queue += graph["you"]
    
    while search_queue:
        person = search_queue.pop()
        
        if person_is_seller(person):
            print(person + " is a mango seller")
            return True
        else:
            search_queue += graph[person]    
    return False

print(bfs())
    





