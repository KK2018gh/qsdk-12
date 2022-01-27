/*
 * Copyright (c) 2021, The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _ADPT_APPE_CTRLPKT_H_
#define _ADPT_APPE_CTRLPKT_H_
sw_error_t
adpt_appe_mgmtctrl_vpgroup_set(a_uint32_t dev_id, a_uint32_t port_id,
	a_uint32_t vpgroup_id);

sw_error_t
adpt_appe_mgmtctrl_vpgroup_get(a_uint32_t dev_id, a_uint32_t port_id,
	a_uint32_t *vpgroup_id);

sw_error_t
adpt_appe_mgmtctrl_tunnel_decap_set(a_uint32_t dev_id, a_uint32_t cpu_code_id,
	a_bool_t enable);

sw_error_t
adpt_appe_mgmtctrl_tunnel_decap_get(a_uint32_t dev_id, a_uint32_t cpu_code_id,
	a_bool_t *enable);
#endif
