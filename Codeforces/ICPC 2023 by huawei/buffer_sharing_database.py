import sys

# For Abstracting Tenant 
class Tenant(object):
    def __init__(self, id, pages):
        self.id = id
        self.pages = pages

    def add_page(self, page):
        self.pages.add()

class Pages(object):
    def __init__(self, id):
        self.id = id