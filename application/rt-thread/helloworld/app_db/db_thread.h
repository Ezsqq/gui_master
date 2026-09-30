#ifndef __DB_THREAD_H__
#define __DB_THREAD_H__

#include <rtthread.h>
#include "transducer_dao.h"
#include "surgery_template_dao.h"

void db_service_init(void);
int  db_async_add_transducer(const transducer_t *rec);
int  db_async_update_transducer(const transducer_t *rec);
void db_set_refresh_callback(void (*cb)(void));
int db_async_del_transducer(int *ids, int count);

/* 手术模板异步接口 */
int  db_async_add_surgery_template(const surgery_template_t *rec);
int  db_async_update_surgery_template(const surgery_template_t *rec);
int  db_async_del_surgery_template(int id);
#endif
