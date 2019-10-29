#!/usr/bin/env python3

#How to generate class structure tree
# @python

class Person:
    
    def __init__(self, name):
        self.name = name
    
    def get_name(self):
        return self.name

    def isEmployee(self):
        return False


class Employee(Person):

    def isEmployee(self):
        return True


def class_tree(obj, indent):
    
    print(" " * indent + "- " + obj.__name__)
    for parent in obj.__bases__:
        class_tree(parent, indent + 3)

def generate_tree(obj):
    print("Class tree for".format(obj.name))
    class_tree(obj.__class__, 3)


person1 = Person("King")
person2 = Employee("Jkingz")
person3 = Employee("Rule")

generate_tree(person1)
print("\n")
generate_tree(person2)
print("\n")
generate_tree(person3)
