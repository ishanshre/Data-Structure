class Stack(object):
    def __init__(self, max_num):
        self.__size = max_num
        self.__stackList = [None] * max_num
        self.__top = -1

    def push(self, item):
        if self.is_full():
            print('stack overflow')
        else:
            self.__top += 1
            self.__stackList[self.__top] = item

    def pop(self):
        if self.is_empty():
            print('stack underflow')
        else:
            top = self.__stackList[self.__top]
            self.__stackList[self.__top] = None
            self.__top -= 1
            return top

    def peek(self):
        if not self.is_empty():
            return f"The last element of stack {self.__stackList[self.__top]}"
        else:
            return 'stack is empty'
    
    def is_empty(self) -> bool:
        return self.__top < 0
    
    def is_full(self) -> bool:
        return self.__top >= self.__size - 1

    def __len__(self):
        return self.__top + 1

    def __str__(self):
        ans = "["
        for i in range(self.__top + 1):
            if len(ans) > 1:
                ans += ", "
            ans += str(self.__stackList[i])
        ans += "]"
        return ans
