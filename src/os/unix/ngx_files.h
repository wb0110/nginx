#ifndef _NGX_FILES_H_INCLUDED_
#define _NGX_FILES_H_INCLUDED_


#include <ngx_config.h>

#include <ngx_types.h>
#include <ngx_file.h>


#define NGX_INVALID_FILE         -1
#define NGX_FILE_ERROR           -1



#define ngx_open_file            open
#define ngx_open_file_n          "open()"

#define ngx_close_file           close
#define ngx_close_file_n         "close()"

ssize_t ngx_read_file(ngx_file_t *file, char *buf, size_t size, off_t offset);
#define ngx_read_file_n          "read()"

#define NGX_FILE_RDONLY          O_RDONLY


#define ngx_file_type(file, sb)  stat(file, sb)
#define ngx_file_type_n          "stat()"

#define ngx_stat_fd(fd, sb)      fstat(fd, sb)
#define ngx_stat_fd_n            "fstat()"

#define ngx_is_dir(sb)           (S_ISDIR(sb.st_mode))
#define ngx_is_file(sb)          (S_ISREG(sb.st_mode))
#define ngx_file_size(sb)        sb.st_size
#define ngx_file_mtime(sb)       sb.st_mtime


#endif /* _NGX_FILES_H_INCLUDED_ */
