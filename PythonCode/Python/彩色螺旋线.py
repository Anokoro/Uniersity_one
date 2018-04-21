# -*- coding:utf-8 -*-
#绘制彩色螺旋线
import turtle
import time
turtle.pensize(2)
turtle.bgcolor("black")
turtle.speed(10)
class suger:
    colors = ["red","yellow","purple","blue","white"]
    def painter(self):
        for x in range(400):
            turtle.forward(2*x) # 向前移动turtle产地
            turtle.color(self.colors[x % 5])
            turtle.left(123) # turtle左转的度数，棒棒糖
            time.sleep(0.001)

if __name__ =="__main__":
    # turtle.tracer(False) # tracer设置为false,表示不显示已绘制的内容
    suger=suger()
    suger.painter()
    # turtle.tracer(True)

# input()   可以有效解决闪退问题，或者下面的方法
time.sleep(20)