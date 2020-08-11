import requests
from faker import Faker
import json 

fake=Faker('en_IN')
def simulateCustomer(number):
    customer_data ={}
    customer_data["customerId"]="cust"+str(number)
    customer_data["name"]=fake.name()
    customer_data["email"]=fake.email()
    customer_data["mobileNo"]=fake.phone_number()
    customer_data["city"]=fake.city()
    customer_data["pincode"]=fake.random_int(100000,999999)
    customer_data["country"]="India"
    customer_data["shippingAdress"]=fake.address()
    customer_data["date"]=str(fake.date_of_birth())
    url ="http://localhost:8080/api/v1/customer-create"
    customer_data_json=json.dumps(customer_data)
    # customerJson= String customer="{\"customerId\":""+customerId+"",\"name\":""+name+"",\"email\":""+email+"",\"mobileNo\":""+mobleNo+"",\"city\":""+city+"",\"pincode\":""+pincode+"",\"country\":""+country+"",\"shippingAddress\":""+shippingAdress+"",\"date\":""+date+""}";
    headers = {'content-type':'application/json'}
    code= requests.post(url,data=customer_data_json,headers=headers)
    print(code.text)

if __name__=="__main__":     
    for i in range(5000):  
        simulateCustomer(i)
    