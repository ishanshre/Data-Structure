from stack import *

stack = Stack(6)

for word in ['May', 'the', 'force', 'be', 'with', 'you']:
    stack.push(word)

print(f"After pushing {len(stack)} words on tje stack, it contains: {stack}")
print(f"Is stack full? {stack.is_full()}")

print(stack.__str__())
print(stack.is_empty())
stack.push('hello')
print(stack.pop())
print(stack.is_full())
print(stack.__str__())
