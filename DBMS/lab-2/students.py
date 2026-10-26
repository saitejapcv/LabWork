import sys
import csv

# If the user didnt give any arguments then exit the program.
if(len(sys.argv) > 1):
    query = sys.argv[1]
else:
    sys.exit("Enter a command")
    
# Opening students.csv in read mode as file
with open('students.csv', 'r') as file:
    # Using Dictreader of csv module to read the csv data to get data in dictionarys
    data = csv.DictReader(file) 
    # Converting the data into list of dictionaries
    data = list(data)

# ----------- First SQL Command --------------
if(query == "SELECT * FROM Student WHERE Dept = 'CSE' AND Year = 3"):
    # Printing the headings
    print("RollNo\tName Dept\t Year\tCGPA")

    print("-----------------------------------------------")
    
    # iterating through all the rows(dictionaries) in the data(list of dictionaries)
    for row in data:
        # if the Entity has attribute Dept as CSE and Year as 3 then it will print it
        if row["Dept"] == "CSE" and int(row['Year']) == 3:
            print(
                row['RollNo'],
                row['Name'],
                row['Dept'],
                row['Year'],
                row['CGPA'],
                sep='\t'
            )
    

# --------------- Second SQL Command ------------------
elif(query == "INSERT INTO Student VALUES (111, 'JK', 'CSE', 2, 8.6)"):
    
    print("-----------------------------------------------")
    
    # Creating a dictionary for the new entity
    row = {'RollNo': 111, 'Name': 'JK', 'Dept': 'CSE', 'Year': 2, 'CGPA': 8.6}
    # Creating a list for fieldnames
    fieldnames=['RollNo', 'Name', 'Dept', 'Year', 'CGPA']
    
    # Opening students.csv in append mode as file
    with open('students.csv', 'a') as file:
        # Creating a writer using DictWriter of csv module
    	writer = csv.DictWriter(file, fieldnames=fieldnames)
    	
    	# using writerow function we are appending a row
    	writer.writerow(row)
    print("Inserted")
    	
# ------------------- Third SQL command ---------------
elif(query == "SELECT * FROM Student WHERE Dept = 'CSE'"):
    # Printing the headings
    print("RollNo\tName Dept\t Year\tCGPA")

    print("-----------------------------------------------")
    
    # iterating through all the rows(dictionaries) in the data(list of dictionaries)
    for row in data:
        # if the Entity has attribute Dept as CSE then it will print it
        if row["Dept"] == "CSE":
            print(
                row['RollNo'],
                row['Name'],
                row['Dept'],
                row['Year'],
                row['CGPA'],
                sep='\t'
            )
# if the command given by the user didin't match the user command then we print "Invalid query"
else:
    print("Invalid query")

