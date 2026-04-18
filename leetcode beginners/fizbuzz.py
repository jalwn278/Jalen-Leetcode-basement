class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        answer = []
        for i in range(1,n+1):
            if i % 15 == 0:
                answer.append("FizzBuzz")
            elif i % 5 == 0:
                answer.append("Buzz")
            elif i % 3 == 0:
                answer.append("Fizz")
            else:
                answer.append(str(i))
        
        return answer

# the difference between c and python is that i already malloc my array some bunch of memory so i should let my array[i] = "value"
# however when i use python, i don't need to malloc so my array isn't being built so i should append value into the array and create more bunch of memory