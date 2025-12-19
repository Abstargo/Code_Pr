import pprint
message = 'It was a bright cold day in Aril, and the clocks were striking thrirteen.'
count = {}

for character in message:
    count.setdefault(character, 0)
    count[character] = count[character] + 1

pprint.pprint(count)
