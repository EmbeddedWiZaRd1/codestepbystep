Consider the following function:

void mystery2(int list[], int length) {
    for (int i = 0; i < length - 1; i++) {
        if (i % 2 == 0) {
            list[i]++;
        } else {
            list[i]--;
        }
    }
}

{6, 3} -> {7,3}
{2, 4, 6}->{3,3,6}
{1, 2, 3, 4} -> {2,1,4,4}
{2, 2, 2, 2, 2}->{3,1,3,1,2}
{7, 3, 2, 0, 5, 1} -> {8,2,3,-1,6,1}
 