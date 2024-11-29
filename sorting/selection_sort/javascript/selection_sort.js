function swap(array, xp, yp) {
  [array[xp], array[yp]] = [array[yp], array[xp]]
}

function selectionSort(array) {
  let min;
  let i, j; // variables to iterate the array

  for(i = 0; i < array.length - 1; i++) {
    min = i;
    for(j = i+1; j < array.length; j++) {
      if(array[j] < array[min]) min = j;
    }

    if(min != i) {
      swap(array, min, i)
    }
  }
}

// Tests
const testArray = [64, 25, 12, 22, 11, 0, 4, 7, 88];
console.log("Original array ->", testArray);

selectionSort(testArray);
console.log("Sorted array ->", testArray);
