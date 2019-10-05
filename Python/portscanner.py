import os
import argparse
import socket
import signal
import sys

parser = argparse.ArgumentParser(description='Python-powered port scanner')
parser.add_argument('ip', help='IP address to scan')
parser.add_argument('-v', help='be verbose', action="store_true", required=False)
parser.add_argument('-sp', help='Start port', default=1, type=int, required=False)
parser.add_argument('-ep', help='End port', default=1024, type=int, required=False)

args = parser.parse_args()

def signal_handler(signal, frame):
    sys.exit(0)

signal.signal(signal.SIGINT, signal_handler)

class bcolors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'

def banner():
    print("""
                                            _,,ddP\"""Ybb,,_
                                          ,dP"'         `"Yb,
                                        ,d"            /    "b,
                                       d"             /       "b
                                      d'        ,gPPRg,        `b
                                      8        dP'  /`Yb        8
                                      8        8)  o  (8        8
               _                      8        Yb     dP        8
 _ __ __ _  __| | __ _ _ __ ___       Y,        "8ggg8"        ,P
| '__/ _` |/ _` |/ _` | '__/ _ \\      Ya                     aP
| | | (_| | (_| | (_| | | |  __/        "Ya                 aP"
|_|  \__,_|\__,_|\__,_|_|  \___|          "Yb,_         _,dP"
                                            `""YbbgggddP""'
                          by nickxla
                          v0.1      
    """)

def check_ports_args():
    if(args.sp >= 1 and args.sp <= 65535 and args.ep >= 1 and args.ep <= 65535 and args.sp <= args.ep):
        return True
    else:
        print(bcolors.FAIL + '[*] ' + bcolors.ENDC + ' Please enter correct port numbers')
        sys.exit(1)

def check_ports(ip):
    print("[*] Checking ports {} to {}".format(args.sp, args.ep))
    for port in range(args.sp, args.ep + 1):
        try:
            if(args.v):
                sys.stdout.write("[*] Trying port " + str(port) + "\r")
                sys.stdout.flush()
            s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            s.settimeout(5)
            result = s.connect_ex((args.ip, port))
            if result == 0:
                print bcolors.OKGREEN + "[+] " + bcolors.ENDC + " Port " + str(port) + " is open"
            s.close()
        except Exception as e:
            pass

banner()
try:
    socket.inet_aton(args.ip)
    if(args.sp and args.ep):
        check_ports_args()
    check_ports(args.ip)
    # legal
except socket.error:
    print(bcolors.FAIL + '[*] ' + bcolors.ENDC + ' Please enter a correct IP address format')
    # Not legal
