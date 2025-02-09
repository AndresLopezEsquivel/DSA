# A zero-based max-heap
class MaxHeap:
    def __init__(self):
        self.heap = []

    def print_heap(self):
        print(self.heap)

    def _left_child(self, index):
        # Returns the index of the left child of a parent
        # The parent's index in given by the index parameter
        return 2 * index + 1

    def _right_child(self, index):
        # Returns the index of the right child of a parent
        # The parent's index is given by the index parameter
        return 2 * index + 2

    def _parent(self, index):
        # Returns the index of the parent of a child.
        # The child's index is given by the index parameter.
        # The child can be either a left of right child
        return (index - 1) // 2

    def _swap(self, index_1, index_2):
        # Swaps the values given by index_1 and index_2 parameters
        self.heap[index_1], self.heap[index_2] = self.heap[index_2], self.heap[index_1]

    def _sink_down(self, index):
        # Sinks down a fiven leaf until it is not lower than it childs
        idx = index
        max_idx = index
        last_idx = len(self.heap) - 1
        while True:
            l_idx = self._left_child(idx)
            r_idx = self._right_child(idx)

            if (l_idx <= last_idx) and (self.heap[max_idx] < self.heap[l_idx]):
                max_idx = l_idx

            if (r_idx <= last_idx) and (self.heap[max_idx] < self.heap[r_idx]):
                max_idx = r_idx

            if max_idx == idx:
                break

            self._swap(max_idx, idx)
            idx = max_idx

    def insert(self, value):
        # Appends a value to the list representing the heap
        # and then bubbles up the new value until an ancestor
        # is greater than it
        self.heap.append(value)
        curr_idx = len(self.heap) - 1
        while True:
            if curr_idx == 0:
                break

            parent_idx = self._parent(curr_idx)
            parent_val = self.heap[parent_idx]
            curr_val = self.heap[curr_idx]

            if curr_val <= parent_val:
                break

            self._swap(curr_idx, parent_idx)
            curr_idx = parent_idx

    def remove(self):
        # Returns and removes the item at the top of the heap.
        # It also rearranges the heap after removing was made.
        if(len(self.heap) == 0):
            return None

        if(len(self.heap) == 1):
            return self.heap.pop()

        top = self.heap[0]
        # The last leaf will be placed at the top
        # so the heap can still be a complete tree
        # After this, the new top will sink down
        self.heap[0] = self.heap.pop()
        self._sink_down(0)
        return top
