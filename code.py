import requests

url = "https://prod-14.centralindia.logic.azure.com/workflows/972955afd22848b28deee775973f2de2/triggers/request/paths/invoke?api-version=2016-10-01&sp=%2Ftriggers%2Frequest%2Frun&sv=1.0&sig=eAxdOb22-hbUsk7ECS_nhbafv7ZI0K-n4PP_Eh2Kuy0"

payload={}
files=[
  ('file',('code.py',open('/home/akash/Documents/01_100_days of coding/cpp_programming/code.py','rb'),'application/octet-stream'))
]
headers = {
  'Name': 'S2F0dXJpIEFrYXNoCg==',
  'Email': 'a3oxMzIxQHNybWlzdC5lZHUuaW4K',
  'College': 'U1JNSVNUIFJBTUFQVVJBTQo=',
  'StudentId': 'RA1811027020050',
  'Password': 'YmFqYWoxMjM0Cg==',
  'DOB': 'MDktMTAtMjAwMAo=',
  'FileName': 'code.py'
}

response = requests.request("PUT", url, headers=headers, data=payload, files=files)

print(response.text)
