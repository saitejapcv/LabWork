import psycopg

connection = psycopg.connect(
	dbname = "lab_7",
	user = "postgres",
	password = "509",
	host = "localhost",
	port = "5432"
)

cursor = connection.cursor()

print("Connected to PostgreSQL")

cursor.execute("""
	CREATE VIEW CSE_Students_View AS 
	SELECT student_id, Student_name, year, cgpa
	FROM Students 
	WHERE dept_id = 10;
""")

print("\n CSE_STUDENTS_VIEW created.")

cursor.execute("""
	SELECT * FROM CSE_Students_View ORDER BY student_id;
""")

for row in cursor.fetchall():
	print(row)

cursor.execute("""
	UPDATE CSE_Students_View
	SET cgpa = 8.95
	WHERE student_id = 1001;
""")

print("\n Updated cgpa of student with student_id 1001 as 8.95")

print("\nVIEW")

cursor.execute("""
	SELECT * FROM CSE_Students_View ORDER BY student_id;
""")

for row in cursor.fetchall():
	print(row)

print("\nTable")

cursor.execute("""
	SELECT student_id, student_name, year, cgpa FROM Students;
""")

for row in cursor.fetchall():
	print(row)

cursor.execute("""
	CREATE VIEW Student_Enrollment_View AS 
	SELECT * FROM Enrollments;
""")

print("\nCreated view Student_Enrollment_View")

cursor.execute("""
	SELECT * FROM Student_Enrollment_View;
""")

for row in cursor.fetchall():
	print(row)

cursor.execute("""
	DELETE FROM Student_Enrollment_View
	WHERE enrollment_id = 9002;
""")

print("\nDeleted row with enrollemtn_id = 9002")

cursor.execute("""
	SELECT * FROM Student_Enrollment_View;
""")

for row in cursor.fetchall():
	print(row)

cursor.execute("""
	DROP VIEW CSE_Students_View;
""")

cursor.execute("""
	DROP VIEW Student_Enrollment_View;
""")

print("\nDeleted all views")

connection.commit()

print("\nAll operations completed successfully")

cursor.close()
connection.close()
		
		
