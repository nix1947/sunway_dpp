import socket 
target_host = '127.0.0.1'
target_port = 9000 

# Create a socket object 
client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Connect for 3 way handshake.
client.connect((target_host, target_port))

# Send some data
client.send(b"Hello world")

# Receive some data 
response = client.recv(4096)

print(response.decode())


client.close()
