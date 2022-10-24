# Output
#### Sequential
```
Enter total number of blocks in the disk:50
Enter starting block and length of file:13 6
File Allocated
Do you want to continue?(1.yes/0.No):1
Enter starting block and length of file:15 2
File Not Allocated
Do you want to continue?(1.yes/0.No):1
Enter starting block and length of file:0 3
File Allocated
Do you want to continue?(1.yes/0.No):1
Enter starting block and length of file:3 1
File Allocated
Do you want to continue?(1.yes/0.No):1
Enter starting block and length of file:3 2
File Not Allocated
Do you want to continue?(1.yes/0.No):0

```
#### Indexed
```
Enter total number of blocks in the disk:50
Enter index of file:5
Enter number of blocks for 5:3
Enter index of  each blocks for 5:0 1 2
File Allocated
5----->0
5----->1
5----->2
Do you want to continue?(1.yes/0.No):1
Enter index of file:45
Enter number of blocks for 45:5
Enter index of  each blocks for 45:34 12 10 4 6
File Allocated
45----->34
45----->12
45----->10
45----->4
45----->6
Do you want to continue?(1.yes/0.No):1
Enter index of file:4
4 is already allocated
Do you want to continue?(1.yes/0.No):1
Enter index of file:34
34 is already allocated
Do you want to continue?(1.yes/0.No):0
```
