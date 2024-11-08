# A. Robin Helps

    time limit per test: 1 second
    memory limit per test: 256 megabyte

The heroic outlaw Robin Hood is famous for taking from the rich and giving to the poor.

Robin encounters **n** people starting from the **1**-st and ending with the **n**-th. The **i**-th person has ai gold. If ai≥k, Robin will take all **a<sub>i</sub>** gold, and if **a<sub>i</sub>**=**0**, Robin will give **1** gold if he has any. Robin starts with **0** gold.

Find out how many people Robin gives gold to.

## Input

The first line of the input contains a single integer **t (1 ≤ t ≤ 10<sup>4</sup>)** — the number of test cases.

The first line of each test case contains two integers **n**
, **k** **(1 ≤ n ≤50,1 ≤k ≤ 100)** — the number of people and the threshold at which Robin Hood takes the gold.

The second line of each test case contains **n** integers **a<sub>1</sub>,a<sub>2</sub>,…,a<sub>n</sub>(0 ≤ a<sub>i</sub> ≤ 100)** — the gold of each person.

## Output

For each test case, output a single integer, the number of people that will get gold from Robin Hood.

### Example

#### input

    4
    2 2
    2 0
    3 2
    3 0 0
    6 2
    0 3 0 0 0 0
    2 5
    5 4

#### Output

    1
    2
    3
    0

### Note

In the first test case, Robin takes **2** gold from the first person and gives **1** gold to the second person.

In the second test case, Robin takes **3** gold and gives **1** gold to each of the next **2** people.

In the third test case, Robin takes **3** gold and so only gives **1** gold to 3 other people.
