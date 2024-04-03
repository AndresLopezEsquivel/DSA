from hash_table import HashTable

if __name__ == "__main__":
    h_table = HashTable()
    h_table.set_item("Andrés", 23)
    h_table.set_item("Alejandro", 20)
    h_table.set_item("Isabel", 25)
    h_table.print_table()
    print()
    print(h_table.get_item("Andrés"))
    print(h_table.get_item("Alejandro"))
    print(h_table.get_item("Isabel"))
    print(h_table.get_item("Mike"))
    print("Keys: ")
    print(h_table.keys())
