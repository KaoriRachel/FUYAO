import time

import requests
import json

url = "http://192.168.1.129:8084/function/exp09Register"

headers = {
    'Content-Type': 'application/json'
}

payloads = []

with open('./movies.json', 'r') as movies_file:
    movies = json.load(movies_file)
    for idx, movie in enumerate(movies):
        payloads.append(json.dumps({
            'req_id': idx,
            'title': movie['title'],
            'movie_id': str(movie['id'])
        }))

cnt = 0

for payload in payloads:
    cnt = cnt + 1
    response = requests.request("POST", url, headers=headers, data=payload)
    if response.status_code != 200:
        print("post request failed! payload:" + payload)

    if cnt % 20 == 0:
        time.sleep(1)
