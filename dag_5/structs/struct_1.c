#include <stdio.h>
#include <string.h>

typedef struct {
    char first_name[50]; 
    char last_name[50]; 
    char city[50]; 
    int birth_year;
} Student;

void print_student(const Student *s){
    printf("%s %s, %s, född %d\n", s->first_name, s->last_name, s->city, s->birth_year);
}
void input_student(Student *s){
    printf("Förnamn: ");
    fgets(s->first_name, sizeof(s->first_name),stdin);
    s->first_name[strcspn(s->first_name, "\n")] = 0;

    printf("Efternamn: ");
    fgets(s->last_name, sizeof(s->last_name),stdin);
    s->last_name[strcspn(s->last_name, "\n")] = 0;

    printf("Stad: ");
    fgets(s->city, sizeof(s->city),stdin);
    s->city[strcspn(s->city, "\n")] = 0;

    printf("Födelseår: ");
    scanf("%d", &s->birth_year);
    getchar();   
}
int main (void){
    Student student1;
    Student student2;

    input_student(&student1);
    input_student(&student2);

    print_student(&student1);
    print_student(&student2);

    return  0;
}


