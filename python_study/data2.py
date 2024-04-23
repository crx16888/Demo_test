from pyecharts.charts import Line
from pyecharts.options import TitleOpts #从选项模块中导入标题选项类
line = Line()
line.add_xaxis(["中国","美国","英国"])
line.add_yaxis("GDP",[40,20,10])
#为折线图设置全局变量
line.set_global_opts(TitleOpts(title = "GDP展示",pos_left="center",pos_bottom="1%")
                     )
line.render()#如果run不行就debug