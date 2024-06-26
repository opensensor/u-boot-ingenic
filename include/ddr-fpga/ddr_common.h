#ifndef __DDR_COMMON_H__
#define __DDR_COMMON_H__

#include <ddr/ddr_chips.h>
#include <ddr/ddr_params.h>

#if defined(CONFIG_JZ4775)
#include <asm/ddr_dwc.h>
#include <ddr/ddrc.h>
#include <ddr/ddrp_dwc.h>
#elif defined(CONFIG_JZ4780)
#include <asm/ddr_dwc.h>
#include <ddr/ddrc.h>
#include <ddr/ddrp_dwc.h>
#elif defined(CONFIG_M200)
#include <asm/ddr_dwc.h>
#include <ddr/ddrc.h>
#include <ddr/ddrp_dwc.h>
#elif defined(CONFIG_T10)
#include <asm/ddr_dwc.h>
#include <ddr/ddrc.h>
#include <ddr/ddrp_dwc.h>
#elif defined(CONFIG_T5)
#include <asm/ddr_dwc.h>
#include <ddr/ddrc.h>
#include <ddr/ddrp_dwc.h>
#elif defined(CONFIG_T15G)
#include <asm/ddr_dwc.h>
#include <ddr/ddrc.h>
#include <ddr/ddrp_dwc.h>
#elif defined(CONFIG_T30)
#include <asm/ddr_dwc.h>
#include <ddr/ddrc.h>
#include <ddr/ddrp_dwc.h>
#elif defined(CONFIG_T21)
#include <asm/ddr_dwc.h>
#include <ddr/ddrc.h>
#include <ddr/ddrp_dwc.h>
#elif defined(CONFIG_T31)
#include <asm/ddr_dwc.h>
#include <ddr/ddrc.h>
#include <ddr/ddrp_dwc.h>
#elif defined(CONFIG_T32)
#include <asm/ddr_dwc.h>
#include <ddr/ddrc.h>
#include <ddr/ddrp_dwc.h>
#endif


#endif /* __DDR_COMMON_H__ */
