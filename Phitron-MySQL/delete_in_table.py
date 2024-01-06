import mysql.connector

DB_name = 'TEST_DB'

DB_connection = mysql.connector.connect(
    host = "localhost",
    user = 'root',
    passwd = 'passward',
    database = DB_name
)
# cursor in...
my_cursor = DB_connection.cursor()

query = """
        DELETE
        FROM STUDENT
        WHERE ROLL = 111;
        """

# execute selected query
my_cursor.execute(query)
DB_connection.commit() # commit updates

print('delete successfull')

