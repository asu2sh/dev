import time

while True:
    local_time = time.localtime()
    result = time.strftime('%I:%M:%S %p', local_time)
    print(result, "\r", end="")
    time.sleep(1)