#json负责不同编程语言中的数据传递和交互,如py和cpp交互

import json
data = [ {"name":"老王","age":18}, {"name":"张三","age":20} ]

data = json.dumps(data,ensure_ascii=False) #将py数据转换为json数据格式
print(type(data))
print(data)
data = json.loads(data) #将json数据转换为py数据格式
print(type(data))
print(data)
