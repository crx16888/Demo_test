class phone:
    __current_v = 0
    current_i = 1
    def __keep_single_core(self):
        print("cpu以单核运行")
    def call_by_5g(self):
        if self.__current_v >= 1:
            print("5g通话已开启")
        else:
            self.__keep_single_core()

class nfc:
    nfc_type = "五代"
    producer = "HM"
    def read_card(self):
        print(f"读卡{self.nfc_type},{self.producer}")

# phone1 = phone()
# print(phone1.current_i)
# phone1.call_by_5g()

#继承
# class phone2022(phone): #老的类的所有的东西都继承给新的
#     face_id = True
#     def call_by_6g(self):
#         print("2022最新6g通话")

# phone2 = phone2022()
# phone2.call_by_6g()
# phone2.call_by_5g()

#多继承 
# class my_phone(phone,nfc):
#     pass #补全语法，表示这里是空的啥也没有

# phone3 = my_phone()
# phone3.call_by_5g()
# phone3.read_card()

#复写父类的属性和方法，注意子类不能继承父类私有的属性和方法
class my_phone(phone,nfc):
    producer = "ITHM"
    def __keep_single_core(self):
        print("cpu以单核运行,确保省电") 
    def print2(self):
        self.__keep_single_core()  

phone3 = my_phone()
phone3.print2()
phone3.read_card()
