
message = input("Enter the message")
key = int(input("Enter the key value"))

#Function declaration in python commented by Abir
def encrypt(message,key):
       cypher = ""
       for i in message:
              if i.isupper():
                     cypher += chr((ord(i)+key)%26 +65)
              elif i.islower():
                     cypher += chr((ord(i)+key)%26 +97)
              else:
                     cypher +=""
       return cypher
print("encrypted message is:",encrypt(message,key))

ec = encrypt(message,key)
print(ec)
#I have commented here(Abir Paul)
                     





