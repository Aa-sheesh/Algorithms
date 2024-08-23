int* gradingStudents(int grades_count, int* grades, int* result_count) {
    for(int i=0; i<grades_count;i++){
        if(grades[i]>=38){
            int nextMultipleOf5=((grades[i]/5)+1)*5;
            if(nextMultipleOf5-grades[i]<3){
                grades[i]=nextMultipleOf5;
            }
        }
    }
    *result_count=grades_count;
    return grades;
}