import socket 

target_host = '127.0.0.1'
target_port = 9000 


client = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# Connect and send data at same time no need 3 way handshake.
client.sendto(b'ABCDF', (target_host, target_port)) 

# Receive data 
data, addr = client.recvfrom(4096)


print(data.decode('utf-8'))

client.close()





