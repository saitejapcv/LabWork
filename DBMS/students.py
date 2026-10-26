import sys
import csv

if(len(sys.argv) > 1):
    query = sys.argv[1]
else:
    sys.exit("Enter a command")

with open('students.csv', 'r') as file:
    data = csv.DictReader(file) 

    data = list(data)

if(query == "SELECT * FROM students"):
    print("RollNo\tName Department CGPA\tAge")

    print("-----------------------------------------------")
    
    for row in data:
        print(
                row['RollNo'],
                row['Name'],
                row['Department'],
                row['CGPA'],
                row['Age'],
                sep='\t'
            )

elif(query == "SELECT * FROM students WHERE CGPA > 8"):
    print("RollNo\tName Department CGPA\tAge")
    
    print("-----------------------------------------------")
    
    for row in data:
        if(float(row['CGPA'])>8):
            print(
                    row['RollNo'],
                    row['Name'],
                    row['Department'],
                    row['CGPA'],
                    row['Age'],
                    sep='\t'
            )
elif(query == "SELECT Name, CGPA FROM students"):
    print("Name\tCGPA")
    
    print("-----------------------------------------------")
    
    for row in data:
        print(
                row['Name'],
                row['CGPA'],
                sep='\t'
            )
else:
    print("Invalid query")

