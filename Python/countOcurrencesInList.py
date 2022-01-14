get_indices = lambda lst, el:[i for i, x in enumerate(lst) if x == el]

print(get_indices(['a', 'a', 'b', 'a', 'b', 'a'], 'a'))
