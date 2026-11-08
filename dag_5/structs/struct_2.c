#include <stdio.h>
#include <string.h>

typedef struct {
    char first_name[50]; 
    char last_name[50]; 
    char city[50]; 
    int birth_year;
} Student;

// Varför const Student *?
// * : vi skickar bara adressen (8 bytes) i stället för att kopiera hela studenten (154 bytes)
// const : lovar att print_student bara tittar på studenten och inte ändrar den

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
    Student students[10];
    int count = 0;
    char anwser;

    do {
        printf("--- Student %d ---\n", count + 1);
        input_student(&students[count]);
        count++;
        if(count == 10) {
            printf("Max 10 studenter!\n");
            break;
        }
        printf("Vill du mata in en till? (j/n) ");
        scanf(" %c", &anwser);
        getchar();
    }while (anwser == 'j');

    for (int i = 0; i < count; i++){
        print_student(&students[i]);
    }
    int oldest = 0;
    for(int i = 0; i < count; i++){
        if (students[i].birth_year < students[oldest].birth_year) {
            oldest = i;
        }
    }
    printf("Den äldsta studenten är: %s %s\n", students[oldest].first_name, students[oldest].last_name);

    return  0;
}

