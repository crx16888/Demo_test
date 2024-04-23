class Animal:
    name = "ck"
    def speak(self):
        pass  #父类确定有哪些方法，具体的方法实现由子类自行决定；此处即为抽象类和抽象方法

class Dog(Animal):
    def speak(self):
        print("you are a dog")

class Cat(Animal):
    def speak(self):
        print("you are a cat")

animal = Animal()
def speak1(animal):
    animal.speak()

dog = Dog()
cat = Cat()
speak1(dog)#我们不传入父类对象，传入子类对象也是可以的
speak1(cat)#多态：同样的行为我们传入不同的运行对象获得不同的运行状态