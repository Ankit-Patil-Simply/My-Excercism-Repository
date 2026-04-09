class School:
    def __init__(self):
        self.students = {}
        self.added_students = []
        
    def add_student(self, name, grade):
        added = True
        if name not in self.roster():
            if grade not in self.students:
                self.students[grade] = [name]
            else:
                self.students[grade].append(name)
        else:
            added = False
        self.added_students.append(added)
        
    def roster(self):
        return [name for grade in sorted(self.students)
                for name in sorted(self.students[grade])]

    def grade(self, grade_number):
        if grade_number in self.students:
            return sorted(self.students[grade_number])
        else:
            return []

    def added(self):
        return self.added_students