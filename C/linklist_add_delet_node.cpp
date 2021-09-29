#include <stdio.h>

struct TWICE{
  int value;
  TWICE *next;
};

int main(){
  int count, i;
  scanf("%d", &count);
  int age;
  TWICE *head = new TWICE(); //���o�@�өM TWICE �j�p�@�˪��϶��A�M��Q�� head �o�ӫ���

  scanf("%d", &age);
  head->value = age; //Ū�@�ӼƦrage�i�ӡA�t�� head �� value
  head->next = NULL; //�Ĥ@�Ӹ`�I����

  TWICE *current = head; //�ŧi�{�b�u����̪� current�A���⥦���� head
  for( i = 1; i < count; i++){
    scanf("%d", &age);
    current->next = new TWICE();

    current = current->next;
    current->value = age;
    current->next = NULL; //�إ߸`�I����A�����쵲��C
  };

  //�H�U�ǳƧ�linked list�̭����F�賣�L�X��
  printf("Age of TWICE: ");
  current = head; //��current���^ head
  while(true){
    printf("%d ", current->value); //�L�ثe���`�I
    current = current->next; //�L����n�L�U�@�Ӹ`�I�����e
    if (current == NULL){ //current��NULL���ɭ԰��U��
      break;
    }
  }
  printf("\n");

  int find;
  scanf("%d", &find); //�n�Q�R������

  TWICE *temp, *follow;
  temp = head;

  if (head == NULL){  //head���Ū����쵲
    printf("Not found. \n");
  }

  if(head->value == find){ //�Ĥ@�Ӹ`�I�O�n�R�����ؼЭ�
    head = head->next;
    delete temp;
  }

  while((temp != NULL) && (temp->value != find)){ //�M��n�R�����ؼ�
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

  //������A�⵲�G�L�@�M�X�ӧa�I
  printf("Age of TWICE: ");
  current = head; //��current���^ head
  while(true){
    printf("%d ", current->value); //�L�ثe���`�I
    current = current->next; //�L����n�L�U�@�Ӹ`�I�����e
    if (current == NULL){ //current��NULL���ɭ԰��U��
      break;
    }
  }
  printf("\n");
  return 0;
}
