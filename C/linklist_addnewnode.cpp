#include <stdio.h>
struct TWICE{
  int value;
  TWICE *next;
};
int main(){
  int count = 5, i;
  //scanf("%d", &count); //指定能有幾個節點
    
  TWICE *head = new TWICE(); //取得一個和 TWICE 大小一樣的區塊，然後配給 head 這個指標
  int age;
  scanf("%d", &age);
  //建立第一個節點
  head->value = age; //讀一個數字age進來，配給 head 的 value
  head->next = NULL; //第一個節點結束
  //建立後續的節點
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
  return 0;
}
