#include<libsel4_zig_wrapper.h>
#include<sel4/sel4.h>


//MessageInfo_t
//CapRights_t
//CNode_CapData
//
//Main problem is seL4_CallWithMRs() uses MessageInfo_t which basically invalidates the use of zig translation with at least 50 locations in libsel4

 seL4_Error zig_seL4_X86_PDPT_Map(seL4_X86_PDPT _service, seL4_X64_PML4 pml4, seL4_Word vaddr, seL4_X86_VMAttributes attr){
    return seL4_X86_PDPT_Map(_service, pml4, vaddr, attr);
}
 seL4_Error zig_seL4_X86_PDPT_Unmap(seL4_X86_PDPT _service){
    return seL4_X86_PDPT_Unmap(_service);
}
 seL4_Error zig_seL4_X86_PageDirectory_Map(seL4_X86_PageDirectory _service, seL4_CPtr vspace, seL4_Word vaddr, seL4_X86_VMAttributes attr){
    return seL4_X86_PageDirectory_Map(_service, vspace, vaddr, attr);
}
 seL4_Error zig_seL4_X86_PageDirectory_Unmap(seL4_X86_PageDirectory _service){
    return seL4_X86_PageDirectory_Unmap(_service);
}
#if defined(CONFIG_ARCH_IA32)
 seL4_Error zig_seL4_X86_PageDirectory_GetStatusBits(seL4_X86_PageDirectory _service, seL4_Word vaddr){
    return seL4_X86_PageDirectory_GetStatusBits(_service, vaddr);
}
#endif
 seL4_Error zig_seL4_X86_PageTable_Map(seL4_X86_PageTable _service, seL4_CPtr vspace, seL4_Word vaddr, seL4_X86_VMAttributes attr){
    return seL4_X86_PageTable_Map(_service, vspace, vaddr, attr);
}
 seL4_Error zig_seL4_X86_PageTable_Unmap(seL4_X86_PageTable _service){
    return seL4_X86_PageTable_Unmap(_service);
}
#if defined(CONFIG_IOMMU)
 seL4_Error zig_seL4_X86_IOPageTable_Map(seL4_X86_IOPageTable _service, seL4_X86_IOSpace iospace, seL4_Word ioaddr){
    return seL4_X86_IOPageTable_Map(_service, iospace, ioaddr);
}
#endif
#if defined(CONFIG_IOMMU)
 seL4_Error zig_seL4_X86_IOPageTable_Unmap(seL4_X86_IOPageTable _service){
    return seL4_X86_IOPageTable_Unmap(_service);
}
#endif
 seL4_Error zig_seL4_X86_Page_Map(seL4_X86_Page _service, seL4_CPtr vspace, seL4_Word vaddr, zig_seL4_CapRights_t rights, seL4_X86_VMAttributes attr){
    return seL4_X86_Page_Map(_service, vspace, vaddr, rights.caprights, attr);
}
 seL4_Error zig_seL4_X86_Page_Unmap(seL4_X86_Page _service){
    return seL4_X86_Page_Unmap(_service);
}
#if defined(CONFIG_IOMMU)
 seL4_Error zig_seL4_X86_Page_MapIO(seL4_X86_Page _service, seL4_X86_IOSpace iospace, zig_seL4_CapRights_t rights, seL4_Word ioaddr){
    return seL4_X86_Page_MapIO(_service, iospace, rights.caprights, ioaddr)
}
#endif
 seL4_X86_Page_GetAddress_t zig_seL4_X86_Page_GetAddress(seL4_X86_Page _service){
    return seL4_X86_Page_GetAddress(_service);
}
#if defined(CONFIG_VTX)
 seL4_Error zig_seL4_X86_Page_MapEPT(seL4_X86_Page _service, seL4_X86_EPTPML4 vspace, seL4_Word vaddr, zig_seL4_CapRights_t rights, seL4_X86_VMAttributes attr){
    return seL4_X86_Page_MapEPT(_service, vspace, vaddr, rights.caprights, attr);
}
#endif
 seL4_Error zig_seL4_X86_ASIDControl_MakePool(seL4_X86_ASIDControl _service, seL4_Untyped untyped, seL4_CNode root, seL4_Word index, seL4_Uint8 depth){
    return seL4_X86_ASIDControl_MakePool(_service, untyped, root, index, depth);
}
 seL4_Error zig_seL4_X86_ASIDPool_Assign(seL4_X86_ASIDPool _service, seL4_CPtr vspace){
    return seL4_X86_ASIDPool_Assign(_service, vspace);
}
 seL4_Error zig_seL4_X86_IOPortControl_Issue(seL4_X86_IOPortControl _service, seL4_Word first_port, seL4_Word last_port, seL4_CNode root, seL4_Word index, seL4_Uint8 depth){
    return seL4_X86_IOPortControl_Issue(_service, first_port, last_port, root, index, depth);
}
 seL4_X86_IOPort_In8_t zig_seL4_X86_IOPort_In8(seL4_X86_IOPort _service, seL4_Uint16 port){
    return seL4_X86_IOPort_In8(_service, port);
}
 seL4_X86_IOPort_In16_t zig_seL4_X86_IOPort_In16(seL4_X86_IOPort _service, seL4_Uint16 port){
    return seL4_X86_IOPort_In16(_service, port);
}
 seL4_X86_IOPort_In32_t zig_seL4_X86_IOPort_In32(seL4_X86_IOPort _service, seL4_Uint16 port){
    return zig_seL4_X86_IOPort_In32(_service, port);
}
 seL4_Error zig_seL4_X86_IOPort_Out8(seL4_X86_IOPort _service, seL4_Word port, seL4_Word data){
    return seL4_X86_IOPort_Out8(_service, port, data);
}
 seL4_Error zig_seL4_X86_IOPort_Out16(seL4_X86_IOPort _service, seL4_Word port, seL4_Word data){
    return seL4_X86_IOPort_Out16(_service, port, data);
}
 seL4_Error zig_seL4_X86_IOPort_Out32(seL4_X86_IOPort _service, seL4_Word port, seL4_Word data){
    return seL4_X86_IOPort_Out32(_service, port, data);
}
 seL4_Error zig_seL4_IRQControl_GetIOAPIC(seL4_IRQControl _service, seL4_CNode root, seL4_Word index, seL4_Uint8 depth, seL4_Word ioapic, seL4_Word pin, seL4_Word level, seL4_Word polarity, seL4_Word vector){
    return seL4_IRQControl_GetIOAPIC(_service, root, index, depth, ioapic, pin, level, polarity, vector);
}
 seL4_Error zig_seL4_IRQControl_GetMSI(seL4_IRQControl _service, seL4_CNode root, seL4_Word index, seL4_Uint8 depth, seL4_Word pci_bus, seL4_Word pci_dev, seL4_Word pci_func, seL4_Word handle, seL4_Word vector){
    return seL4_IRQControl_GetMSI(_service, root, index, depth, pci_bus, pci_dev, pci_func, handle, vector);
}
#if defined(CONFIG_VTX)
 seL4_Error zig_seL4_TCB_SetEPTRoot(seL4_TCB _service, seL4_X86_EPTPML4 eptpml4){
    return seL4_TCB_SetEPTRoot(_service, eptpml4);
}
#endif
#if defined(CONFIG_VTX)
 seL4_Error zig_seL4_X86_VCPU_SetTCB(seL4_X86_VCPU _service, seL4_TCB tcb){
    return seL4_X86_VCPU_SetTCB(_service, tcb);
}
#endif
#if defined(CONFIG_VTX)
 seL4_Error zig_seL4_X86_VCPU_ReadVMCS(seL4_X86_VCPU _service, seL4_Word field){
    return seL4_X86_VCPU_ReadVMCS(_service, field);
}
#endif
#if defined(CONFIG_VTX)
 seL4_Error zig_seL4_X86_VCPU_WriteVMCS(seL4_X86_VCPU _service, seL4_Word field, seL4_Word value){
    return seL4_X86_VCPU_WriteVMCS(_service, field, value);
}
#endif
#if defined(CONFIG_VTX)
 seL4_Error zig_seL4_X86_VCPU_EnableIOPort(seL4_X86_VCPU _service, seL4_X86_IOPort ioPort, seL4_Word low, seL4_Word high){
    return seL4_X86_VCPU_EnableIOPort(_service, ioPort, low, high);
}
#endif
#if defined(CONFIG_VTX)
 seL4_Error zig_seL4_X86_VCPU_DisableIOPort(seL4_X86_VCPU _service, seL4_Word low, seL4_Word high){
    return seL4_X86_VCPU_DisableIOPort(_service, low, high);
}
#endif
#if defined(CONFIG_VTX)
 seL4_Error zig_seL4_X86_VCPU_WriteRegisters(seL4_X86_VCPU _service, seL4_VCPUContext *regs){
    return seL4_X86_VCPU_WriteRegisters(_service, regs);
}
#endif
#if defined(CONFIG_VTX)
 seL4_Error zig_seL4_X86_EPTPDPT_Map(seL4_X86_EPTPDPT _service, seL4_X86_EPTPML4 eptpml4, seL4_Word gpa, seL4_X86_VMAttributes attr){
    return seL4_X86_EPTPDPT_Map(_service, eptpml4, gpa, attr);
}
#endif
#if defined(CONFIG_VTX)
 seL4_Error zig_seL4_X86_EPTPDPT_Unmap(seL4_X86_EPTPDPT _service){
    return seL4_X86_EPTPDPT_Unmap(_service);
}
#endif
#if defined(CONFIG_VTX)
 seL4_Error zig_seL4_X86_EPTPD_Map(seL4_X86_EPTPD _service, seL4_X86_EPTPML4 eptpml4, seL4_Word gpa, seL4_X86_VMAttributes attr){
    return seL4_X86_EPTPD_Map(_service, eptpml4, gpa, attr);
}
#endif
#if defined(CONFIG_VTX)
 seL4_Error zig_seL4_X86_EPTPD_Unmap(seL4_X86_EPTPD _service){
    return seL4_X86_EPTPD_Unmap(_service);
}
#endif
#if defined(CONFIG_VTX)
 seL4_Error zig_seL4_X86_EPTPT_Map(seL4_X86_EPTPT _service, seL4_X86_EPTPML4 eptpml4, seL4_Word gpa, seL4_X86_VMAttributes attr){
    return seL4_X86_EPTPT_Map(_service, eptpml4, gpa, attr);
}
#endif
#if defined(CONFIG_VTX)
 seL4_Error zig_seL4_X86_EPTPT_Unmap(seL4_X86_EPTPT _service){
    return seL4_X86_EPTPT_Unmap(_service);
}
#endif
 seL4_Error zig_seL4_Untyped_Retype(seL4_Untyped _service, seL4_Word type, seL4_Word size_bits, seL4_CNode root, seL4_Word node_index, seL4_Word node_depth, seL4_Word node_offset, seL4_Word num_objects){
    return seL4_Untyped_Retype(_service, type, size_bits, root, node_index, node_depth, node_offset, num_objects);
}
 seL4_Error zig_seL4_TCB_ReadRegisters(seL4_TCB _service, seL4_Bool suspend_source, seL4_Uint8 arch_flags, seL4_Word count, seL4_UserContext *regs){
    return seL4_TCB_ReadRegisters(_service, suspend_source, arch_flags, count, regs);
}
 seL4_Error zig_seL4_TCB_WriteRegisters(seL4_TCB _service, seL4_Bool resume_target, seL4_Uint8 arch_flags, seL4_Word count, seL4_UserContext *regs){
    return seL4_TCB_WriteRegisters(_service, resume_target, arch_flags, count, regs);
}
 seL4_Error zig_seL4_TCB_CopyRegisters(seL4_TCB _service, seL4_TCB source, seL4_Bool suspend_source, seL4_Bool resume_target, seL4_Bool transfer_frame, seL4_Bool transfer_integer, seL4_Uint8 arch_flags){
    return seL4_TCB_CopyRegisters(_service, source, suspend_source, resume_target, transfer_frame, transfer_integer, arch_flags);
}
#if !defined(CONFIG_KERNEL_MCS)
 seL4_Error zig_seL4_TCB_Configure(seL4_TCB _service, seL4_Word fault_ep, seL4_CNode cspace_root, seL4_Word cspace_root_data, seL4_CPtr vspace_root, seL4_Word vspace_root_data, seL4_Word buffer, seL4_CPtr bufferFrame){
    return seL4_TCB_Configure(_service, fault_ep, cspace_root, cspace_root_data, vspace_root, vspace_root_data, buffer, bufferFrame);
}
#endif
#if defined(CONFIG_KERNEL_MCS)
 seL4_Error zig_seL4_TCB_Configure(seL4_TCB _service, seL4_CNode cspace_root, seL4_Word cspace_root_data, seL4_CPtr vspace_root, seL4_Word vspace_root_data, seL4_Word buffer, seL4_CPtr bufferFrame){
    return seL4_TCB_Configure(_service, cspace_root, cspace_root_data, vspace_root, vspace_root_data, buffer, bufferFrame);
}
#endif
 seL4_Error zig_seL4_TCB_SetPriority(seL4_TCB _service, seL4_TCB authority, seL4_Word priority){
    return seL4_TCB_SetPriority(_service, authority, priority);
}
 seL4_Error zig_seL4_TCB_SetMCPriority(seL4_TCB _service, seL4_TCB authority, seL4_Word mcp){
    return seL4_TCB_SetMCPriority(_service, authority, mcp);
}
#if !defined(CONFIG_KERNEL_MCS)
 seL4_Error zig_seL4_TCB_SetSchedParams(seL4_TCB _service, seL4_TCB authority, seL4_Word mcp, seL4_Word priority){
    return seL4_TCB_SetSchedParams(_service, authority, mcp, priority);
}
#endif
#if defined(CONFIG_KERNEL_MCS)
 seL4_Error zig_seL4_TCB_SetSchedParams(seL4_TCB _service, seL4_TCB authority, seL4_Word mcp, seL4_Word priority, seL4_CPtr sched_context, seL4_CPtr fault_ep){
    return seL4_TCB_SetSchedParams(_service, authority, mcp, priority, sched_context, fault_ep);
}
#endif
#if defined(CONFIG_KERNEL_MCS)
 seL4_Error zig_seL4_TCB_SetTimeoutEndpoint(seL4_TCB _service, seL4_CPtr timeout_fault_ep){
    return seL4_TCB_SetTimeoutEndpoint(_service, timeout_fault_ep);
}
#endif
 seL4_Error zig_seL4_TCB_SetIPCBuffer(seL4_TCB _service, seL4_Word buffer, seL4_CPtr bufferFrame){
    return seL4_TCB_SetIPCBuffer(_service, buffer, bufferFrame);
}
#if !defined(CONFIG_KERNEL_MCS)
 seL4_Error zig_seL4_TCB_SetSpace(seL4_TCB _service, seL4_Word fault_ep, seL4_CNode cspace_root, seL4_Word cspace_root_data, seL4_CPtr vspace_root, seL4_Word vspace_root_data){
    return seL4_TCB_SetSpace(_service, fault_ep, cspace_root, cspace_root_data, vspace_root, vspace_root_data);
}
#endif
#if defined(CONFIG_KERNEL_MCS)
 seL4_Error zig_seL4_TCB_SetSpace(seL4_TCB _service, seL4_CPtr fault_ep, seL4_CNode cspace_root, seL4_Word cspace_root_data, seL4_CPtr vspace_root, seL4_Word vspace_root_data){
    return seL4_TCB_SetSpace(_service, fault_ep, cspace_root, cspace_root_data, vspace_root, vspace_root_data);
}
#endif
 seL4_Error zig_seL4_TCB_Suspend(seL4_TCB _service){
    return seL4_TCB_Suspend(_service);
}
 seL4_Error zig_seL4_TCB_Resume(seL4_TCB _service){
    return seL4_TCB_Resume(_service);
}
 seL4_Error zig_seL4_TCB_BindNotification(seL4_TCB _service, seL4_CPtr notification){
    return seL4_TCB_BindNotification(_service, notification);
}
 seL4_Error zig_seL4_TCB_UnbindNotification(seL4_TCB _service){
    return seL4_TCB_UnbindNotification(_service);
}
#if (!defined CONFIG_KERNEL_MCS) && CONFIG_MAX_NUM_NODES > 1
 seL4_Error zig_seL4_TCB_SetAffinity(seL4_TCB _service, seL4_Word affinity){
    return seL4_TCB_SetAffinity(_service, affinity);
}
#endif
#if defined(CONFIG_HARDWARE_DEBUG_API)
 seL4_Error zig_seL4_TCB_SetBreakpoint(seL4_TCB _service, seL4_Uint16 bp_num, seL4_Word vaddr, seL4_Word type, seL4_Word size, seL4_Word rw){
    return seL4_TCB_SetBreakpoint(_service, bp_num, vaddr, type, size, rw);
}
#endif
#if defined(CONFIG_HARDWARE_DEBUG_API)
 seL4_Error zig_seL4_TCB_GetBreakpoint(seL4_TCB _service, seL4_Uint16 bp_num){
    return seL4_TCB_GetBreakpoint(_service, bp_num);
}
#endif
#if defined(CONFIG_HARDWARE_DEBUG_API)
 seL4_Error zig_seL4_TCB_UnsetBreakpoint(seL4_TCB _service, seL4_Uint16 bp_num){
    return seL4_TCB_UnsetBreakpoint(_service, bp_num);
}
#endif
#if defined(CONFIG_HARDWARE_DEBUG_API)
 seL4_Error zig_seL4_TCB_ConfigureSingleStepping(seL4_TCB _service, seL4_Uint16 bp_num, seL4_Word num_instructions){
    return seL4_TCB_ConfigureSingleStepping(_service, bp_num, num_instructions);
}
#endif
 seL4_Error zig_seL4_TCB_SetTLSBase(seL4_TCB _service, seL4_Word tls_base){
    return seL4_TCB_SetTLSBase(_service, tls_base);
}
 seL4_Error zig_seL4_CNode_Revoke(seL4_CNode _service, seL4_Word index, seL4_Uint8 depth){
    return seL4_CNode_Revoke(_service, index, depth);
}
 seL4_Error zig_seL4_CNode_Delete(seL4_CNode _service, seL4_Word index, seL4_Uint8 depth){
    return seL4_CNode_Delete(_service, index, depth);
}
 seL4_Error zig_seL4_CNode_CancelBadgedSends(seL4_CNode _service, seL4_Word index, seL4_Uint8 depth){
    return seL4_CNode_CancelBadgedSends(_service, index, depth);
}
 seL4_Error zig_seL4_CNode_Copy(seL4_CNode _service, seL4_Word dest_index, seL4_Uint8 dest_depth, seL4_CNode src_root, seL4_Word src_index, seL4_Uint8 src_depth, zig_seL4_CapRights_t rights){
    return seL4_CNode_Copy(_service, dest_index, dest_depth, src_root, src_index, src_depth, rights.caprights);
}
 seL4_Error zig_seL4_CNode_Mint(seL4_CNode _service, seL4_Word dest_index, seL4_Uint8 dest_depth, seL4_CNode src_root, seL4_Word src_index, seL4_Uint8 src_depth, zig_seL4_CapRights_t rights, seL4_Word badge){
    return seL4_CNode_Mint(_service, dest_index, dest_depth, src_root, src_index, src_depth, rights.caprights, badge);
}
 seL4_Error zig_seL4_CNode_Move(seL4_CNode _service, seL4_Word dest_index, seL4_Uint8 dest_depth, seL4_CNode src_root, seL4_Word src_index, seL4_Uint8 src_depth){
    return seL4_CNode_Move(_service, dest_index, dest_depth, src_root, src_index, src_depth);
}
 seL4_Error zig_seL4_CNode_Mutate(seL4_CNode _service, seL4_Word dest_index, seL4_Uint8 dest_depth, seL4_CNode src_root, seL4_Word src_index, seL4_Uint8 src_depth, seL4_Word badge){
    return seL4_CNode_Mutate(_service, dest_index, dest_depth, src_root, src_index, src_depth, badge);
}
 seL4_Error zig_seL4_CNode_Rotate(seL4_CNode _service, seL4_Word dest_index, seL4_Uint8 dest_depth, seL4_Word dest_badge, seL4_CNode pivot_root, seL4_Word pivot_index, seL4_Uint8 pivot_depth, seL4_Word pivot_badge, seL4_CNode src_root, seL4_Word src_index, seL4_Uint8 src_depth){
    return seL4_CNode_Rotate(_service, dest_index, dest_depth, dest_badge, pivot_root, pivot_index, pivot_depth, pivot_badge, src_root, src_index, src_depth);
}
#if !defined(CONFIG_KERNEL_MCS)
 seL4_Error zig_seL4_CNode_SaveCaller(seL4_CNode _service, seL4_Word index, seL4_Uint8 depth){
    return seL4_CNode_SaveCaller(_service, index, depth);
}
#endif
 seL4_Error zig_seL4_IRQControl_Get(seL4_IRQControl _service, seL4_Word irq, seL4_CNode root, seL4_Word index, seL4_Uint8 depth){
    return seL4_IRQControl_Get(_service, irq, root, index, depth);
}
 seL4_Error zig_seL4_IRQHandler_Ack(seL4_IRQHandler _service){
    return seL4_IRQHandler_Ack(_service);
}
 seL4_Error zig_seL4_IRQHandler_SetNotification(seL4_IRQHandler _service, seL4_CPtr notification){
    return seL4_IRQHandler_SetNotification(_service, notification);
}
 seL4_Error zig_seL4_IRQHandler_Clear(seL4_IRQHandler _service){
    return seL4_IRQHandler_Clear(_service);
}
 seL4_Error zig_seL4_DomainSet_Set(seL4_DomainSet _service, seL4_Uint8 domain, seL4_TCB thread){
    return seL4_DomainSet_Set(_service, domain, thread);
}
#if defined(CONFIG_KERNEL_MCS)
 seL4_Error zig_seL4_SchedControl_ConfigureFlags(seL4_SchedControl _service, seL4_SchedContext schedcontext, seL4_Time budget, seL4_Time period, seL4_Word extra_refills, seL4_Word badge, seL4_Word flags){
    return seL4_SchedControl_ConfigureFlags(_service, schedcontext, budget, period, extra_refills, badge, flags);
}
#endif
#if defined(CONFIG_KERNEL_MCS)
 seL4_Error zig_seL4_SchedContext_Bind(seL4_SchedContext _service, seL4_CPtr cap){
    return seL4_SchedContext_Bind(_service, cap);
}
#endif
#if defined(CONFIG_KERNEL_MCS)
 seL4_Error zig_seL4_SchedContext_Unbind(seL4_SchedContext _service){
    return seL4_SchedContext_Unbind(_service);
}
#endif
#if defined(CONFIG_KERNEL_MCS)
 seL4_Error zig_seL4_SchedContext_UnbindObject(_service, cap){
    return seL4_SchedContext_UnbindObject(_service, cap);
}
#endif
#if defined(CONFIG_KERNEL_MCS)
 seL4_Error zig_seL4_SchedContext_Consumed(seL4_SchedContext _service){
    return seL4_SchedContext_Consumed(_service);
}
#endif
#if defined(CONFIG_KERNEL_MCS)
 seL4_Error zig_seL4_SchedContext_YieldTo(seL4_SchedContext _service){
    return seL4_SchedContext_YieldTo(_service);
}
#endif

seL4_Uint32 zig_seL4_DebugCapIdentify(seL4_CPtr cap){
    return seL4_DebugCapIdentify(cap);
}
void zig_seL4_DebugDumpScheduler(){
    seL4_DebugDumpScheduler();
}

void zig_seL4_Reply(zig_seL4_MessageInfo_t info){
    seL4_Reply(info.msginfo);
}

zig_seL4_MessageInfo_t zig_seL4_Recv(seL4_CPtr w, seL4_Word *sender){
    zig_seL4_MessageInfo_t t = {.msginfo = seL4_Recv(w, sender), .dummy = {0}};
    return t;
}

seL4_Uint64 zig_seL4_MessageInfo_get_length(zig_seL4_MessageInfo_t arg){
    return seL4_MessageInfo_get_length(arg.msginfo);
}

void zig_seL4_Send(seL4_CPtr slot, zig_seL4_MessageInfo_t info) {
    seL4_Send(slot, info.msginfo);
}
zig_seL4_MessageInfo_t zig_seL4_ReplyRecv(seL4_CPtr dest, zig_seL4_MessageInfo_t info, seL4_Word *sender) {
    zig_seL4_MessageInfo_t t = {.msginfo = seL4_ReplyRecv(dest, info.msginfo, sender), .dummy = {0}};
    return t;

}
