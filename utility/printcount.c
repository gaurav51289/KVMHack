#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */

extern int cmpe283_exception_nmi;
extern int cmpe283_external_interrupt;
extern int cmpe283_triple_fault;
extern int cmpe283_nmi_window;
extern int cmpe283_io_instruction;
extern int cmpe283_cr_access;
extern int cmpe283_dr_access;
extern int cmpe283_cpuid;
extern int cmpe283_msr_read;
extern int cmpe283_msr_write;
extern int cmpe283_pending_interrupt;
extern int cmpe283_hlt;
extern int cmpe283_invd;
extern int cmpe283_invlpg;
extern int cmpe283_rdpmc;
extern int cmpe283_vmcall;
extern int cmpe283_vmclear;
extern int cmpe283_vmlaunch;
extern int cmpe283_vmptrld;
extern int cmpe283_vmptrst;
extern int cmpe283_vmread;
extern int cmpe283_vmresume;
extern int cmpe283_vmwrite;
extern int cmpe283_vmoff;
extern int cmpe283_vmon;
extern int cmpe283_tpr_below_threshold;
extern int cmpe283_apic_access;
extern int cmpe283_apic_write;
extern int cmpe283_eoi_induced;
extern int cmpe283_wbinvd;
extern int cmpe283_xsetbv;
extern int cmpe283_task_switch;
extern int cmpe283_mce_during_vmentry;
extern int cmpe283_ept_violation;
extern int cmpe283_ept_misconfig;
extern int cmpe283_pause_instruction;
extern int cmpe283_mwait_instruction;
extern int cmpe283_monitor_trap_flag;
extern int cmpe283_monitor_instruction;
extern int cmpe283_invept;
extern int cmpe283_invvpid;
extern int cmpe283_xsaves;
extern int cmpe283_xrstors;
extern int cmpe283_pml_full;
extern int cmpe283_pcommit;

int init_module(void)
{

	printk("\ncmpe283_EXCEPTION_NMI:");
	printk("%d",cmpe283_exception_nmi);

	printk("\ncmpe283_EXTERNAL_INTERRUPT:");
	printk("%d",cmpe283_external_interrupt);

	printk("\ncmpe283_TRIPLE_FAULT:");
	printk("%d",cmpe283_triple_fault);

	printk("\ncmpe283_NMI_WINDOW:");
	printk("%d",cmpe283_nmi_window);

	printk("\ncmpe283_IO_INSTRUCTION:");
	printk("%d",cmpe283_io_instruction);

	printk("\ncmpe283_CR_ACCESS:");
	printk("%d",cmpe283_cr_access);

	printk("\ncmpe283_DR_ACCESS:");
	printk("%d",cmpe283_dr_access);

	printk("\ncmpe283_CPUID:");
	printk("%d",cmpe283_cpuid);

	printk("\ncmpe283_MSR_READ:");
	printk("%d",cmpe283_msr_read);

	printk("\ncmpe283_MSR_WRITE:");
	printk("%d",cmpe283_msr_write);

	printk("\ncmpe283_PENDING_INTERRUPT:");
	printk("%d",cmpe283_pending_interrupt);

	printk("\ncmpe283_HLT:");
	printk("%d",cmpe283_hlt);

	printk("\ncmpe283_INVD:");
	printk("%d",cmpe283_invd);

	printk("\ncmpe283_INVLPG:");
	printk("%d",cmpe283_invlpg);

	printk("\ncmpe283_RDPMC:");
	printk("%d",cmpe283_rdpmc);

	printk("\ncmpe283_VMCALL:");
	printk("%d",cmpe283_vmcall);

	printk("\ncmpe283_VMCLEAR:");
	printk("%d",cmpe283_vmclear);

	printk("\ncmpe283_VMLAUNCH:");
	printk("%d",cmpe283_vmlaunch);

	printk("\ncmpe283_VMPTRLD:");
	printk("%d",cmpe283_vmptrld);

	printk("\ncmpe283_VMPTRST:");
	printk("%d",cmpe283_vmptrst);

	printk("\ncmpe283_VMREAD:");
	printk("%d",cmpe283_vmread);

	printk("\ncmpe283_VMRESUME:");
	printk("%d",cmpe283_vmresume);

	printk("\ncmpe283_VMWRITE:");
	printk("%d",cmpe283_vmwrite);

	printk("\ncmpe283_VMOFF:");
	printk("%d",cmpe283_vmoff);

	printk("\ncmpe283_VMON:");
	printk("%d",cmpe283_vmon);

	printk("\ncmpe283_TPR_BELOW_THRESHOLD:");
	printk("%d",cmpe283_tpr_below_threshold);

	printk("\ncmpe283_APIC_ACCESS:");
	printk("%d",cmpe283_apic_access);

	printk("\ncmpe283_APIC_WRITE:");
	printk("%d",cmpe283_apic_write);

	printk("\ncmpe283_EOI_INDUCED:");
	printk("%d",cmpe283_eoi_induced);

	printk("\ncmpe283_WBINVD:");
	printk("%d",cmpe283_wbinvd);

	printk("\ncmpe283_XSETBV:");
	printk("%d",cmpe283_xsetbv);

	printk("\ncmpe283_TASK_SWITCH:");
	printk("%d",cmpe283_task_switch);

	printk("\ncmpe283_MCE_DURING_VMENTRY:");
	printk("%d",cmpe283_mce_during_vmentry);

	printk("\ncmpe283_EPT_VIOLATION:");
	printk("%d",cmpe283_ept_violation);

	printk("\ncmpe283_EPT_MISCONFIG:");
	printk("%d",cmpe283_ept_misconfig);

	printk("\ncmpe283_PAUSE_INSTRUCTION:");
	printk("%d",cmpe283_pause_instruction);

	printk("\ncmpe283_MWAIT_INSTRUCTION:");
	printk("%d",cmpe283_mwait_instruction);

	printk("\ncmpe283_MONITOR_TRAP_FLAG:");
	printk("%d",cmpe283_monitor_trap_flag);

	printk("\ncmpe283_MONITOR_INSTRUCTION:");
	printk("%d",cmpe283_monitor_instruction);

	printk("\ncmpe283_INVEPT:");
	printk("%d",cmpe283_invept);

	printk("\ncmpe283_INVVPID:");
	printk("%d",cmpe283_invvpid);

	printk("\ncmpe283_XSAVES:");
	printk("%d",cmpe283_xsaves);

	printk("\ncmpe283_XRSTORS:");
	printk("%d",cmpe283_xrstors);

	printk("\ncmpe283_PML_FULL:");
	printk("%d",cmpe283_pml_full);

	printk("\ncmpe283_PCOMMIT:");
	printk("%d",cmpe283_pcommit);

	return 0;
}

void cleanup_module(void)
{
}
