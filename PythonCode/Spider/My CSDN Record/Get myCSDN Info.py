# coding:utf-8
# 写于 2018-3-30
# python版本：2.7
# 功能： 统计个人的CSDN的文章的阅读量信息
# 使用方法： 直接将开始的URL变量修改为自己的个人文章列表的主页，运行即可
import urllib
import re
import time
URL="https://blog.csdn.net/qq_34175893?viewmode=list"
html_text=urllib.urlopen(URL).read()

# 去掉html文档中的空格换行等字符
p=re.compile('\s+')
html_text=re.sub(p,'',html_text)

#print  html_text
results=re.findall(r"<spanclass=\"link_title\"><ahref.*?>(.*?)</a>.*?"
                   r"\"link_postdate\">(.*?)</span>.*?"
                   r"阅读</a>\((.*?)\).*?"
                   r"评论</a>\((.*?)\)",html_text,re.S)

for result in results:
    print "%-36s\t\t%s \t  阅读次数 %s 评论次数 %s"%(result[0][0:29],result[1],result[2],result[3])

results=re.findall(r"<divclass=\"gradeAndbadgegradewidths\"title=\"(.*?)\"",html_text,re.S)
#now_time = time.asctime(time.localtime(time.time()))
now_time = time.ctime() #获取时间的方法
record_info="日期： %s 访问量：%s   积分: %s  排名：%s\n"%(now_time,results[0],results[1],results[2])
print "\n%s"%record_info
file=open("My CSDN Record/record.txt","a")
if(file):
    print '打开%s成功'%file.name
    file.write(record_info) #write方法没有返回值，所以也无须进行判断，直接打印输入成功了
    print '记录成功'