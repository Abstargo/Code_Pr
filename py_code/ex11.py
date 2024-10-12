from typing import List

def odd_numbers(number: List) -> List:
    odd: List[int] = []
    for number in numbers:
        if number % 2:
            odd.append(number)

    return odd

if __name__ == '__main__':
    numbers = list(range(10))
    print(odd_numbers(numbers))
