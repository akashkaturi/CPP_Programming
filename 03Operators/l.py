import subprocess

shell_command = "cat ~/.bash_history"

rslt=subprocess.check_output(shell_command, shell=True).decode()
print(rslt)