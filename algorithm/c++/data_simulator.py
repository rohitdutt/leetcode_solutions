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

def simulateProduct(number):
    product_data={}
    product_data["productId"]="prod"+str(number)
    product_data["itemName"]=fake.word()+" "+fake.word()
    product_data["barcode"]=fake.ean(length=13)
    product_data["pricePerUnit"]=fake.random_int(10,50000)
    product_data["sellPrice"]= product_data["pricePerUnit"] + ((product_data["pricePerUnit"] * 10)/100)
    product_data["profitPerUnit"]= product_data["sellPrice"] - product_data["pricePerUnit"]
    product_data["availableUnit"]=fake.random_int(1,10000)
    product_data_json=json.dumps(product_data)
    url ="http://localhost:8080/api/v1/product-create"
    headers = {'content-type':'application/json'}
    code= requests.post(url,data=product_data_json,headers=headers)
    print(code.text)

    

if __name__=="__main__":     
    for i in range(10000):  
        # simulateCustomer(i)
        simulateProduct(i)