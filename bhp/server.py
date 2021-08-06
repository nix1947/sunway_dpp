import socket 
import threading

ip = '0.0.0.0'
port = 9000 

def main():
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server.bind((ip, port))

    # Queued max 5 request 
    server.listen(5)
    print("Server listening on port {}:{}".format(ip, port))

    while True:
        client, address = server.accept()

        print("[*] Accepted connection from {}:{}".format(address[0], address[1]))

        
        def handle_client(client_socket, address):
             with client_socket as sock:
                request = sock.recv(1024)
                print("[*] Data received from {} is: {}".format(address, request.decode('utf-8')))
                sock.send(b'ACK')

        client_handler = threading.Thread(target=handle_client, args=(client, address,))

        client_handler.start()

if __name__ == '__main__':
    main()

