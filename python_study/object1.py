# class student:
#     name = "none"
#     gender = "none"
#     def say_hi(self):
#         print(f"hi hello,{self.name}")
#     def say_hi2(self,msg):
#         print(f"hi hello,{self.name},{msg}")#msg是外部传入的，直接用就行了，不用self
# stu_1 = student()
# stu_1.name = "crx"
# stu_1.gender = 0
# stu_1.say_hi()
# stu_1.say_hi2("ck")


class student:
    name = "none"
    gender = "none"
    age = 0
    def __init__(self,name,gender,age):
        self.name = name
        self.gender = gender
        self.age = age
        print(f"你的名字是{self.name},你的性别是{self.gender}")
    def __str__(self):
        return f"name={self.name},gender={self.gender}"
    def __lt__(self,other):
        return self.age<other.age  #有了这些内置方法以后，当我们输出对象，它会自动输出这些值
stu_1 = student("crx",0,0)
print(stu_1)
stu_2 = student("ck",0,2)
print(stu_1>stu_2)
