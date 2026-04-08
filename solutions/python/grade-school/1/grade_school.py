class School:
    def __init__(self):
        self.students = {}
        self.added_students = []
        
    def add_student(self, name, grade):
        if name not in self.roster():
            if grade not in self.students:
                self.students[grade] = [name]
            else:
                self.students[grade].append(name)
            self.added_students.append(True)
        else:
            self.added_students.append(False)
        
    def roster(self):
        roster = [name for grade in sorted(self.students) 
                  for name in sorted(self.students[grade])]
        return roster

    def grade(self, grade_number):
        if grade_number in self.students:
            students_in_grade = [name for name in
                             sorted(self.students[grade_number])]
        else:
            return []
        return students_in_grade

    def added(self):
        return self.added_students