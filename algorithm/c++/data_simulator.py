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
    customer_data["country"]=fake.country() 
    customer_data["shippingAdress"]=fake.address()
    customer_data["date"]=str(fake.date_of_birth())
    # url ="http://localhost:8080/api/v1/customer-create"
    # customer_data_json=json.dumps(customer_data)
    # headers = {'content-type':'application/json'}
    # code= requests.post(url,data=customer_data_json,headers=headers)
    # print(code)
    # print(code.text)
    print(customer_data)


def simulateProduct(number):
    product_data={}
    product_data["productId"]="prod"+str(number)
    product_data["itemName"]=fake.word()+" "+fake.word()
    product_data["barcode"]=fake.ean(length=13)
    product_data["pricePerUnit"]=fake.random_int(10,50000)
    product_data["sellPrice"]= product_data["pricePerUnit"] + ((product_data["pricePerUnit"] * 10)/100)
    product_data["profitPerUnit"]= product_data["sellPrice"] - product_data["pricePerUnit"]
    product_data["availableUnit"]=fake.random_int(1,10000)
    #product_data["reviews"]=simulateReview(product_data["productId"])
    product_data_json=json.dumps(product_data)
    url ="http://localhost:8080/api/v1/product-create"
    headers = {'content-type':'application/json'}
    code= requests.post(url,data=product_data_json,headers=headers)
    print(code.text)


def getProduct(productId):
    product = requests.get("http://localhost:8080/api/v1/product-id/"+productId)
    return product.json()


def getCustomer(customerId):
    customer = requests.get("http://localhost:8080/api/v1/customer-id/"+customerId)
    return customer.json()


def simulateReview(number):
    productId="prod"+str(number)
    for i in range(fake.random_int(1,40)):
        review_data={}
        review_data["reviewId"]=productId + " rev" + str(i)
        review_data["customerId"]="cust"+str(fake.random_int(0,4999))
        review_data["dateOfReview"]=str(fake.date_of_birth())
        review_data["review"]=fake.text()
        review_data["rating"]=fake.random_int(1,10)
        review_data["product"]=getProduct(productId)
        review_data_json=json.dumps(review_data)
        url ="http://localhost:8080/api/v1/review-create"
        headers = {'content-type':'application/json'}
        code= requests.post(url,data=review_data_json,headers=headers)
        print(code.text)


def simulateOrderSummary(amountList,number,i):
    orderSummaryData={}
    orderStatus = ["toBeShipped", "inTransit", "Delivered"]
    paymentMode = ["UPI", "Card", "CashOnDelivery"]
    customer = getCustomer("cust"+str(fake.random_int(0,4999)))
    orderSummaryData["orderId"]="ordSum "+str(number)
    orderSummaryData["orderDate"]=str(fake.date_of_birth())
    amount=+amountList[1]
    orderSummaryData["amount"]=amount
    actualAmount=+amountList[0]
    orderSummaryData["actualAmount"]=actualAmount
    orderSummaryData["profitAmount"] = amount - actualAmount
    orderSummaryData["shippingAddress"] = customer["shippingAddress"]
    orderSummaryData["contactNumber"]=customer["mobileNo"]
    orderSummaryData["pincode"]=customer["pincode"]
    orderSummaryData["orderStatus"]=orderStatus[fake.random_int(0,2)]
    orderSummaryData["paymentMode"]=paymentMode[fake.random_int(0,2)]
    if orderSummaryData["paymentMode"] == "CashOnDelivery":
        orderSummaryData["paymentStatus"]="toBePaid"
    else:
        orderSummaryData["paymentStatus"]="paid"
    orderSummaryData["customerId"]=customer
    if i == 4:
        print(orderSummaryData)
        # review_data_json=json.dumps(review_data)
        # url ="http://localhost:8080/api/v1/review-create"
        # headers = {'content-type':'application/json'}
        # code= requests.post(url,data=review_data_json,headers=headers)
        # print(code.text)
    return orderSummaryData


def simulateOrderDetails(number):
    actual_amount=0
    amount=0
    orderDetailsList=[]
    amountList=[]
    orderDetailsData={}
    for i in range(5):
        product=getProduct("prod"+str(fake.random_int(0,4999)))
        orderDetailsData["itemName"]=product["itemName"]
        orderDetailsData["quantity"]=fake.random_int(1,5)
        orderDetailsData["amount"]= ( orderDetailsData["quantity"] * product["sellPrice"] )
        orderDetailsData["orderDate"]=str(fake.date_of_birth())
        orderDetailsData["product"]=product
        actual_amount=product["pricePerUnit"]*orderDetailsData["quantity"]
        amount=product["sellPrice"]*orderDetailsData["quantity"]
        amountList.append(actual_amount)
        amountList.append(amount)
        orderSummary =simulateOrderSummary(amountList,number,i)
        orderDetailsData["transactionId"] = orderSummary["orderId"] +" ordSum"+str(number)
        orderDetailsData["orderId"] = orderSummary
        orderDetailsList.append(orderDetailsData)
    for j in orderDetailsList:
        print(j)
        # review_data_json=json.dumps(review_data)
        # url ="http://localhost:8080/api/v1/review-create"
        # headers = {'content-type':'application/json'}
        # code= requests.post(url,data=review_data_json,headers=headers)
        # print(code.text)
    # print(orderDetailsData)


def simulateUser(number):
    userData={}
    roles=["USER","ADMIN"]
    userData["userId"]="user"+str(number)
    userData["customerId"]="cust"
    userData["password"]=fake.word()+"@"+str(fake.random_int(0,999))
    userData["role"]=roles[fake.random_int(0,1)]
    print(userData)


if __name__=="__main__":     
    for i in range(5): 
        # simulateCustomer(i)
        simulateProduct(i)
        # simulateReview(i)
        # simulateOrderDetails("Ord1")
        # simulateOrderDetails(0)
        # simulateUser(3)