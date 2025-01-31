inpfile = open('myprog.greet', 'r')

for line in inpfile:
    [command, number] = line.split()
    # Directly execute Greet commands
    for i in range(int(number)):
        print(command)

inpfile.close()
outfile.close()
