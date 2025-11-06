  /*
NAME:TRACY NEKESA
REG NO:PA106/G/28737/25.
Description:A programme that cointains student details and reads student details from the binary file
*/
    #include <stdio.h>
    #include <string.h>

    // Definition  of the structure 
    typedef struct {
        int registrationNo;
        char name[50];
        float marks;
    } Student;
int main(){
    //Variable definition with the student details
    Student s1 = {453, "Shawn", 85.5};
    Student s2 = {102, "Joshua", 92.0};
    Student s3  ={578,"Frank",78.0};

    FILE *fptr;
    fptr = fopen("results.dat","wb");
    if (fptr == NULL){
        perror("Error opening file for writing \n");
        return 1;
    }//Use of fwrite to write the details of the students  because its a binary file
    fwrite(&s1, sizeof(Student), 1,fptr );
    fwrite(&s2, sizeof(Student), 1, fptr);
    fwrite(&s3, sizeof(Student), 1, fptr);
    
   fclose(fptr);
   Student sRead1, sRead2,sRead3;

    FILE *display = fopen("results.dat", "rb");
    if (display == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    fread(&sRead1, sizeof(Student), 1, display);
    fread(&sRead2, sizeof(Student), 1, display);
    fread(&sRead3, sizeof(Student), 1, display);
    


    fclose(display);

    printf("\nStudent 1 read: Name=%s, Marks=%.2f\n", sRead1.name, sRead1.marks);
    printf("\nStudent 2 read:  Name=%s, Marks=%.2f\n",  sRead3.name, sRead3.marks);
    printf("\nStudent 3 read:  Name=%s, Marks=%.2f\n",  sRead2.name, sRead2.marks);
    return 0;
}
   
