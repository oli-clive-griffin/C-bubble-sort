int bubble_sort(int list[])
{

  int swap_streak = 1;

  int list_length = sizeof list[0] / sizeof list;

  do
  {
      swap_streak = 0;
      
      for (int i = 0; i < list_length  - i ; i++)
      {
          if (list[i] > list[i + 1])
          {
              int temp = list[i + 1];
              list[i + 1] = list[i];
              list[i] = temp;
              swap_streak++;
          }
      }
  } while (swap_streak > 0);
}