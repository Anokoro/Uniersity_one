# _*_ coding:utf-8 _*_
# 这个脚本用来解析html代码，将一行代码，解析成带有缩进的正规格式代码
# I : html.txt
# P : parser.py
# O : result.txt
from bs4 import  BeautifulSoup
code=open("html.txt","r").read()
soup=BeautifulSoup(code,"html.parser")
result = soup.prettify()
open("result.txt","w").write(result)