#include <stdio.h>
struct TWICE{
  int value;
  TWICE *next;
};
int main(){
  int count = 5, i;
  //scanf("%d", &count); //���w�঳�X�Ӹ`�I
    
  TWICE *head = new TWICE(); //���o�@�өM TWICE �j�p�@�˪��϶��A�M��t�� head �o�ӫ���
  int age;
  scanf("%d", &age);
  //�إ߲Ĥ@�Ӹ`�I
  head->value = age; //Ū�@�ӼƦrage�i�ӡA�t�� head �� value
  head->next = NULL; //�Ĥ@�Ӹ`�I����
  //�إ߫��򪺸`�I
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
  return 0;
}
