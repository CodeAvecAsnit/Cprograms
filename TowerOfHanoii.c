#include <stdio.h>
int towerofHanoi(int n, char s, char d, char a);
int main() {
    int n;
    label_1:
    printf("Enter the number of disks: ");
    scanf ("%d", &n);
    if(n<3){
        printf("You cant play with %d disks \n",n);
        goto label_1;
    }
    printf("The algorithm to solve the game is\n");
    towerofHanoi(n, 'A', 'C', 'B');
    return 0;
}
int towerofHanoi(int n, char s, char d, char a) {
    if (n == 1) {
        printf("Move the disk 1 from %c to %c\n", s, d);
        return;
    }
    towerofHanoi(n-1, s, a, d);
    printf("Move the disk %d from %c to %c\n", n, s, d);
    return towerofHanoi(n-1, a, d, s);
}