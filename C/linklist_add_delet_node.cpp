#include <stdio.h>

struct TWICE{
  int value;
  TWICE *next;
};

int main(){
  int count, i;
  scanf("%d", &count);
  int age;
  TWICE *head = new TWICE(); //取得一個和 TWICE 大小一樣的區塊，然後被給 head 這個指標

  scanf("%d", &age);
  head->value = age; //讀一個數字age進來，配給 head 的 value
  head->next = NULL; //第一個節點結束

  TWICE *current = head; //宣告現在只到哪裡的 current，先把它等於 head
  for( i = 1; i < count; i++){
    scanf("%d", &age);
    current->next = new TWICE();

    current = current->next;
    current->value = age;
    current->next = NULL; //建立節點完後，結束鏈結串列
  };

  //以下準備把linked list裡面的東西都印出來
  printf("Age of TWICE: ");
  current = head; //把current指回 head
  while(true){
    printf("%d ", current->value); //印目前的節點
    current = current->next; //印完後要印下一個節點的內容
    if (current == NULL){ //current為NULL的時候停下來
      break;
    }
  }
  printf("\n");

  int find;
  scanf("%d", &find); //要被刪掉的值

  TWICE *temp, *follow;
  temp = head;

  if (head == NULL){  //head為空的空鏈結
    printf("Not found. \n");
  }

  if(head->value == find){ //第一個節點是要刪除的目標值
    head = head->next;
    delete temp;
  }

  while((temp != NULL) && (temp->value != find)){ //尋找要刪除的目標
    follow = temp;
    temp = temp->next;
  }
  if(temp == NULL){
    printf("Not found. \n");
  }
  else{
    follow->next = temp->next;
    delete temp;
  }

  //做完後再把結果印一遍出來吧！
  printf("Age of TWICE: ");
  current = head; //把current指回 head
  while(true){
    printf("%d ", current->value); //印目前的節點
    current = current->next; //印完後要印下一個節點的內容
    if (current == NULL){ //current為NULL的時候停下來
      break;
    }
  }
  printf("\n");
  return 0;
}
