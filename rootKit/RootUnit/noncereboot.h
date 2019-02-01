//
//  noncereboot.h
//  noncereboot1131UI
//
//  Created by Pwn20wnd on 6/30/18.
//  Copyright © 2018 Pwn20wnd. All rights reserved.
//

#ifndef noncereboot_h
#define noncereboot_h

#include <stdio.h>

enum {
    ERR_NOERR = 0,
    ERR_VERSION = -1,
    ERR_EXPLOIT = -2,
    ERR_UNSUPPORTED = -3,
    ERR_TFP0 = -4,
    ERR_POST_EXPLOITATION = -5,
};

int start_noncereboot(mach_port_t tfp0);
uint64_t return_kern_base(void);
void init_kern_base(void);
uint64_t read_our_proc(void);
uint64_t read_ker_proc(void);
unsigned long long read_find_zone_ref_offset();

#endif /* noncereboot_h */
