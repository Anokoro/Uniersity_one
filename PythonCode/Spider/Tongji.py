# -*- coding: UTF-8 -*-
from urllib import request
from urllib import parse
import json
stu_id='1552239'
stu_pwd=''

url1="http://xuanke.tongji.edu.cn"

url2="http://xuanke.tongji.edu.cn/tj_login/logout.jsp"
url3="http://xuanke.tongji.edu.cn/index.jsp" #退出回到了这里
url4="http://xuanke.tongji.edu.cn/tj_login/invalid.jsp?flag=unauthorizedPermission"
url5="http://xuanke.tongji.edu.cn/tj_login/frame.jsp" # Location 应该是个header()跳转的，登录进去后的首页
url6="http://ids.tongji.edu.cn"
url7="http://xuanke.tongji.edu.cn/tj_xuankexjgl/score/query/student/cjcx.jsp?qxid=20051013779916&mkid=20051013779901"
headers={'User-Agent':
             'Mozilla/5.0 (Windows NT 10.0; WOW64) '
             'AppleWebKit/537.36 (KHTML, like Gecko) '
             'Chrome/65.0.3325.181 Safari/537.36'
         }
Query_String_Parameters={
    'uid': stu_id,
    'cn': stu_id
}
Transport={
    'Connection':'Keep-Alive',
    'Keep-Alive':{
        'timeout':'15',
        'max':'5000'
    },
    'Transfer-Encoding':'chunked'
}

