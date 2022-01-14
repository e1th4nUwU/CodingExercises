GUEST_LIST = {
"Randy": "Germany",
"Karla": "France",
"Wendy": "Japan",
"Norman": "England",
"Sam": "Argentina"
}

greeting = lambda name : "Hi! I'm " + ((name + ", and I'm from " + GUEST_LIST.get(name)) if (name in GUEST_LIST) else "a guest") + '.'

print(greeting("Karla"))
