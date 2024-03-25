#include <stdio.h>
int main() 
{
  int score = 0;
  int num_throws;
  char goal1, goal2;
  char gate;
  printf("Vendos numrin e hedhjeve: ");
  scanf("%d", &num_throws);
  for (int i = 0; i < num_throws; i++) {
    printf("Zgjidhni porten per hedhjen e pare (x1 or x3): ");
    scanf(" %c", &goal1);
    printf("Zgjidhni porten per hedhjen e dyte (x1 or x3): ");
    scanf(" %c", &goal2);
    if (goal1 == goal2) {
      gate = 'C';
    } else {
      gate = 'D';
    }
    if (gate == 'D') {
      score++;
    }
  }
  printf("Piket jane: %d\n", score);
  return 0;
}

