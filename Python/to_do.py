list_task = []
available = ['a', 'b', 'c', 'x']
choice = raw_input('[a] add task [b] view tasks [c] remove task [x] exit: ')

while choice != 'x':
    if choice == 'a':
        task = raw_input('add task: ')
        list_task.append(task)
        choice = raw_input('[a] add task [b] view tasks [c] remove task [x] exit: ')
    
    if choice == 'b':
        print list_task
        choice = raw_input('[a] add task [b] view tasks [c] remove task [x] exit: ')

    if choice == 'c':
        print list_task
        item = raw_input('Enter the task to be removed: ')
        list_task.remove(item)
        choice = raw_input('[a] add task [b] view tasks [c] remove task [x] exit: ')

    if choice not in available:
        choice = raw_input('[a] add task [b] view tasks [c] remove task [x] exit: ')
