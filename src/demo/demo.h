/*!The Treasure Box Library
 * 
 * TBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * TBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with TBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2009 - 2012, ruki All rights reserved.
 *
 * @author		ruki
 * @file		demo.h
 *
 */
#ifndef TB_DEMO_H
#define TB_DEMO_H

/* ///////////////////////////////////////////////////////////////////////
 * includes
 */
#include "../tbox.h"
#include <stdio.h>
#include <stdlib.h>

/* ///////////////////////////////////////////////////////////////////////
 * macros
 */

// the main decl
#define TB_DEMO_MAIN_DECL(name) 		tb_int_t tb_demo_##name##_main(tb_int_t argc, tb_char_t** argv)

/* ///////////////////////////////////////////////////////////////////////
 * interfaces
 */

// flv
TB_DEMO_MAIN_DECL(flv);

// xml
TB_DEMO_MAIN_DECL(xml_reader);
TB_DEMO_MAIN_DECL(xml_writer);
TB_DEMO_MAIN_DECL(xml_document);

// libc
TB_DEMO_MAIN_DECL(libc_time);
TB_DEMO_MAIN_DECL(libc_wchar);
TB_DEMO_MAIN_DECL(libc_string);
TB_DEMO_MAIN_DECL(libc_stdlib);

// libm
TB_DEMO_MAIN_DECL(libm_float);
TB_DEMO_MAIN_DECL(libm_double);
TB_DEMO_MAIN_DECL(libm_integer);

// asio
TB_DEMO_MAIN_DECL(asio_addr);
TB_DEMO_MAIN_DECL(asio_aiopc);
TB_DEMO_MAIN_DECL(asio_aiopd);
TB_DEMO_MAIN_DECL(asio_aicpc);
TB_DEMO_MAIN_DECL(asio_aicpd);

// math
TB_DEMO_MAIN_DECL(math_rand);
TB_DEMO_MAIN_DECL(math_fixed);

// utils
TB_DEMO_MAIN_DECL(utils_url);
TB_DEMO_MAIN_DECL(utils_crc);
TB_DEMO_MAIN_DECL(utils_md5);
TB_DEMO_MAIN_DECL(utils_sha);
TB_DEMO_MAIN_DECL(utils_bits);
TB_DEMO_MAIN_DECL(utils_dump);
TB_DEMO_MAIN_DECL(utils_option);
TB_DEMO_MAIN_DECL(utils_base32);
TB_DEMO_MAIN_DECL(utils_base64);

// other
TB_DEMO_MAIN_DECL(other_test);
TB_DEMO_MAIN_DECL(other_charset);

// object
TB_DEMO_MAIN_DECL(object_jsn);
TB_DEMO_MAIN_DECL(object_bin);
TB_DEMO_MAIN_DECL(object_xml);
TB_DEMO_MAIN_DECL(object_dump);

// stream
TB_DEMO_MAIN_DECL(stream_tstream);
TB_DEMO_MAIN_DECL(stream_mstream);
TB_DEMO_MAIN_DECL(stream_astream);
TB_DEMO_MAIN_DECL(stream_gstream);
TB_DEMO_MAIN_DECL(stream_gstream_zip);
TB_DEMO_MAIN_DECL(stream_gstream_null);
TB_DEMO_MAIN_DECL(stream_gstream_charset);

// string
TB_DEMO_MAIN_DECL(string_pstring);
TB_DEMO_MAIN_DECL(string_sstring);

// memory
TB_DEMO_MAIN_DECL(memory_check);
TB_DEMO_MAIN_DECL(memory_fpool);
TB_DEMO_MAIN_DECL(memory_gpool);
TB_DEMO_MAIN_DECL(memory_spool);
TB_DEMO_MAIN_DECL(memory_tpool);
TB_DEMO_MAIN_DECL(memory_vpool);
TB_DEMO_MAIN_DECL(memory_rpool);
TB_DEMO_MAIN_DECL(memory_memops);
TB_DEMO_MAIN_DECL(memory_scache);
TB_DEMO_MAIN_DECL(memory_pbuffer);
TB_DEMO_MAIN_DECL(memory_qbuffer);
TB_DEMO_MAIN_DECL(memory_sbuffer);

// network
TB_DEMO_MAIN_DECL(network_dns);
TB_DEMO_MAIN_DECL(network_url);
TB_DEMO_MAIN_DECL(network_ipv4);
TB_DEMO_MAIN_DECL(network_http);
TB_DEMO_MAIN_DECL(network_whois);
TB_DEMO_MAIN_DECL(network_cookies);

// platform
TB_DEMO_MAIN_DECL(platform_file);
TB_DEMO_MAIN_DECL(platform_lock);
TB_DEMO_MAIN_DECL(platform_path);
TB_DEMO_MAIN_DECL(platform_ctime);
TB_DEMO_MAIN_DECL(platform_epool);
TB_DEMO_MAIN_DECL(platform_event);
TB_DEMO_MAIN_DECL(platform_utils);
TB_DEMO_MAIN_DECL(platform_timer);
TB_DEMO_MAIN_DECL(platform_tstore);
TB_DEMO_MAIN_DECL(platform_ltimer);
TB_DEMO_MAIN_DECL(platform_atomic);
TB_DEMO_MAIN_DECL(platform_process);
TB_DEMO_MAIN_DECL(platform_barrier);
TB_DEMO_MAIN_DECL(platform_atomic64);
TB_DEMO_MAIN_DECL(platform_backtrace);
TB_DEMO_MAIN_DECL(platform_directory);
TB_DEMO_MAIN_DECL(platform_exception);
TB_DEMO_MAIN_DECL(platform_semaphore);

// container
TB_DEMO_MAIN_DECL(container_heap);
TB_DEMO_MAIN_DECL(container_hash);
TB_DEMO_MAIN_DECL(container_dlist);
TB_DEMO_MAIN_DECL(container_slist);
TB_DEMO_MAIN_DECL(container_queue);
TB_DEMO_MAIN_DECL(container_stack);
TB_DEMO_MAIN_DECL(container_vector);

// algorithm
TB_DEMO_MAIN_DECL(algorithm_find);
TB_DEMO_MAIN_DECL(algorithm_sort);

#endif


