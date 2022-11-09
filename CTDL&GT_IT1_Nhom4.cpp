#include <stdio.h>
#include <stdlib.h>
 
struct SoNguyen {
    int data;
    struct SoNguyen * next;
};
 
typedef struct SoNguyen SoNguyen;
 
SoNguyen * CreateNewSoNguyen(int data) {
    SoNguyen * newSoNguyen = (SoNguyen *) malloc (sizeof(SoNguyen));
    newSoNguyen -> data = data;
    return newSoNguyen;
}
 
void Display(SoNguyen * tail) {
    SoNguyen * current = tail;
    if (tail != NULL) {
        do {
            current = current -> next;
            printf(" %d -> ", current -> data);
        } while (current != tail);
    }
}
 
int Length(SoNguyen * tail) {
    SoNguyen * current = tail;
    int i = 1;
    if (tail == NULL) {
        return 0;
    } else {
        current = current -> next;
        while (current != tail) {
            i++;
            current = current -> next;
        }
    }
    return i;
}
 
SoNguyen * InsertAtHead(SoNguyen * tail, int data) {
    SoNguyen * newSoNguyen = CreateNewSoNguyen(data);
    if (tail == NULL) {
        tail = newSoNguyen;
        newSoNguyen -> next = newSoNguyen;
    } else {
        newSoNguyen -> next = tail -> next;
        tail -> next = newSoNguyen;
    }
    return tail;
}
 
SoNguyen * InsertAtEnd(SoNguyen * tail, int data) {
    // simply insert at head and return the next SoNguyen pointed by tail
    return InsertAtHead(tail, data) -> next;
}
 
SoNguyen * InsertAtArbitrary(SoNguyen * tail, int data, int location) {
    int len = Length(tail), i;
    if (location < 1 || location > len + 1) {
        printf("\nInvalid location to enter data\n");
    } else {
        if (tail == NULL) return InsertAtHead(tail, data);
        SoNguyen * newSoNguyen = CreateNewSoNguyen(data), * current = tail;
        for (i = 1; i != location; i++) current = current -> next;
        newSoNguyen -> next = current -> next;
        current -> next = newSoNguyen;
        if (location == len + 1) tail = newSoNguyen;
    }
    return tail;
}
 
 SoNguyen * CheckSquareNumber(SoNguyen * tail, int data) {
    int i;
    scanf("%d", &i);
    int len = sqrt(i);
    for(int i = 0; i<n; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &[i]);
    }
    int dem = 0;for(int i=0;i<n;i++){
        if(([i]) == true){
            dem++;}
    } return tail;
 }

SoNguyen *Insertab(SoNguyen * tail, int data) {
     int arr(10);
   int i, total = 0;
   int size = sizeof arr / sizeof arr[0];
   printf("In tat ca phan tu cua mang: \n");
   for(i = 0; i < size; i++) {
       printf("%d ", arr[i]);
    }
   for(i = 0; i < size; i++) {
      total = total + arr[i];
    }
   printf("\nGia tri trung binh cua mang la: %f", (float) total / size);
    return tail;
}

SoNguyen *FloatTBC(SoNguyen * tail, int data) {
    void TBC(int x, int &n, int a)
{
    int sum = 0; int count = 0;

    for(int i = 1; i < n; i+=2)
    {
        if(i % 1 == i)
        {
            ++count;
            sum += i;
        }
    }
    float(sum/count)== a;
} 
}

int main() {
    SoNguyen * cll = NULL;
    int option, data, location;
    while (1) {
        Display(cll);
        printf("\nlength = %d\n", Length(cll));
        printf("\n\nMENU OF CHOICE\n1. Insert at head\n2. Insert at end\n3. Insert at arbitrary location\n4. CheckSquareNumber\n5. Insert ab\n6. Float TBC\n7. Exit\n");
        printf("Your choice: ");
        scanf("%d", &option);
 
        if (option == 1) {
            printf("Enter data to be inserted: ");
            scanf("%d", &data);
            cll = InsertAtHead(cll, data);
        } else if (option == 2) {
            printf("Enter data to be inserted at end: ");
            scanf("%d", &data);
            cll = InsertAtEnd(cll, data);
        } else if (option == 3) {
            printf("Enter data to be inserted: ");
            scanf("%d", &data);
            printf("Enter location to be inserted into: ");
            scanf("%d", &location);
            cll = InsertAtArbitrary(cll, data, location);
        } else if (option == 4) {
            printf("Enter data to be CheckSquare: ");
        } else if (option == 5) {
            printf("Enter data to be ab: ");
        } else if (option == 6) {
            printf("Enter data to be TBC: ");
        } else if (option == 7) {
            break;
        }
    }
    return 0;
}