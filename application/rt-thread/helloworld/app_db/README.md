app_db/
├── SConscript              # 编译脚本
├── med_db_common.h         # 公共定义：结构体、枚举、宏
├── db_manager.h            # 数据库管理头文件
├── db_manager.c            # 数据库管理实现（打开、建表、关闭）
├── db_thread.h             # 工作线程+消息队列头文件
└── db_thread.c             # 工作线程+消息队列实现