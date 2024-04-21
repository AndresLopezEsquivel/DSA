from max_heap import MaxHeap

if __name__ == "__main__":
    h = MaxHeap()
    h.insert(95)
    h.insert(75)
    h.insert(80)
    h.insert(55)
    h.insert(60)
    h.insert(50)
    h.insert(65)
    h.print_heap()
    h.remove()
    h.print_heap()
    h.remove()
    h.print_heap()

    # Expected output:
    # [95, 75, 80, 55, 60, 50, 65]
    # [80, 75, 65, 55, 60, 50]
    # [75, 60, 65, 55, 50]
