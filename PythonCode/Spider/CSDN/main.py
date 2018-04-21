# coding:utf-8
import threading
import sys
import os
from queue import Queue
import_dir = "\\"

os.path.join(os.path.join(os.path.dirname(__file__),os.pardir),'CSDN')

sys.path.insert(0,import_dir)

file_name = 'spider'

spider = __import__('spider')
domain = __import__('domain')
general = __import__('general')


key_word = input("请输入要查询的关键字: ")
seeds_file = 'seeds.txt'
seed_set = general.file_to_set(seeds_file)
for seed in seed_set:
    seed_domain = domain.get_domain_name(seed)
    folder_name = seed_domain
    queue_file = folder_name + '/queue.txt'
    crawled_file = folder_name + '/crawled.txt'
    thread_num = 8
    queue = Queue()
    spider.Spider(folder_name, seed, seed_domain, key_word)


# 创建工作线程，
def create_workers():
    for _ in range(thread_num):
        t = threading.Thread(target=work)  # target 指定线程要执行的函数
        t.daemon = True
        t.start()


# 线程要做的事情：不断从队列首部获取URL，并进行爬取，将有效URL填到queue.txt中
def work():
    while True:  # 可以在这里设定爬取的深度，设为True，则死循环爬取
        url = queue.get()  # 调用队列对象的get()方法从队头删除并返回一个项目
        spider.Spider.crawl_page(threading.current_thread().name, url)
        queue.task_done()  # 在完成一项工作之后，q.task_done() 函数向任务已经完成的队列发送一个信号


# 主线程工作：从queue.txt中读取URL，并添加到队列中
def crawl():
    queued_links = general.file_to_set(queue_file)
    if len(queued_links) > 0:
        print(str(len(queued_links)) + ' links in the queue')
        for link in queued_links:
            queue.put(link)  # 调用队列对象的put()方法在队尾插入一个项目
        queue.join()  # 阻塞，实际上意味着等到队列为空，queue中的数据均被删除或者处理，再执行别的操作
        crawl()


create_workers()
crawl()
