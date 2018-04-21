#coding=utf-8

#urllib模块提供了读取Web页面数据的接口
import urllib
#re模块主要包含了正则表达式
import re
#定义一个getHtml()函数
def getHtml(url):
    page = urllib.urlopen(url)  #urllib.urlopen()方法用于打开一个URL地址
    html = page.read() #read()方法用于读取URL上的数据
    p = re.compile('\s+')
    html = re.sub(p, '', html)
    #print html
    return html

def getImg(html,i):
    reg = r'<imgsrc="(.+?.png)">'    #正则表达式，得到图片地址
    imgre = re.compile(reg)     #re.compile() 可以把正则表达式编译成一个正则表达式对象.
    imglist = re.findall(imgre,html)      #re.findall() 方法读取html 中包含 imgre（正则表达式）的    数据
    #把筛选的图片地址通过for循环遍历并保存到本地
    #核心是urllib.urlretrieve()方法,直接将远程数据下载到本地，图片通过x依次递增命名
    for imgurl in imglist:
        print imgurl
        # urlretrieve()方法直接将远程数据下载到本地
        urllib.urlretrieve(imgurl,'getPhotos/photos/%s.png' % i)
        break
for i in range(72584,80000,1):
    html = getHtml("https://act.mathor.com/active/mcm_result/%d"%i)
    getImg(html,i)
    print i