#Write a function that takes an IP address and returns the domain name using PTR DNS records.
import socket
get_domain = lambda domain: socket.gethostbyaddr(domain)[0]
print(get_domain("93.3.19.156"))
