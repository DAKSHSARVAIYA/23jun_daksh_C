class LectureDetails:
    def __init__(self):
        self.lecturer_details = []

    def assign_initial_values(self, lecturer_name, subject_name, course_name):
        self.lecturer_details.append({
            'Lecturer Name': lecturer_name,
            'Subject Name': subject_name,
            'Course Name': course_name
        })

    def add_lecture_details(self, lecturer_name, subject_name, course_name):
        self.lecturer_details.append({
            'Lecturer Name': lecturer_name,
            'Subject Name': subject_name,
            'Course Name': course_name
        })

    def display(self):
        print("Lecturer Details:")
        for idx, lecturer in enumerate(self.lecturer_details, start=1):
            print(f"Lecturer {idx}:")
            print(f"Name: {lecturer['Lecturer Name']}")
            print(f"Subject: {lecturer['Subject Name']}")
            print(f"Course: {lecturer['Course Name']}")
            print()


