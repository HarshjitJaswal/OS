stack=list(())
def isempty():
    if(len(stack)==0):return 1
    else:return 0
def isfull():
    if(len(stack)==5):return 1
    else:return 0
def push(x):
    if(isfull()):print("OverFlow")
    else:
        print(f"Pushing {x}")
        stack.append(x)
def pop():
    if(isempty()):print("UnderFlow")
    else:
        print(f"Poping ")
        stack.pop()
push(10)
push(20)
push(40)
print(stack)
pop()
pop()
print(stack)
