#ifndef _com_sun_org_apache_bcel_internal_generic_Visitor_h_
#define _com_sun_org_apache_bcel_internal_generic_Visitor_h_
//$ interface com.sun.org.apache.bcel.internal.generic.Visitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class AALOAD;
							class AASTORE;
							class ACONST_NULL;
							class ALOAD;
							class ANEWARRAY;
							class ARETURN;
							class ARRAYLENGTH;
							class ASTORE;
							class ATHROW;
							class AllocationInstruction;
							class ArithmeticInstruction;
							class ArrayInstruction;
							class BALOAD;
							class BASTORE;
							class BIPUSH;
							class BREAKPOINT;
							class BranchInstruction;
							class CALOAD;
							class CASTORE;
							class CHECKCAST;
							class CPInstruction;
							class ConstantPushInstruction;
							class ConversionInstruction;
							class D2F;
							class D2I;
							class D2L;
							class DADD;
							class DALOAD;
							class DASTORE;
							class DCMPG;
							class DCMPL;
							class DCONST;
							class DDIV;
							class DLOAD;
							class DMUL;
							class DNEG;
							class DREM;
							class DRETURN;
							class DSTORE;
							class DSUB;
							class DUP;
							class DUP2;
							class DUP2_X1;
							class DUP2_X2;
							class DUP_X1;
							class DUP_X2;
							class ExceptionThrower;
							class F2D;
							class F2I;
							class F2L;
							class FADD;
							class FALOAD;
							class FASTORE;
							class FCMPG;
							class FCMPL;
							class FCONST;
							class FDIV;
							class FLOAD;
							class FMUL;
							class FNEG;
							class FREM;
							class FRETURN;
							class FSTORE;
							class FSUB;
							class FieldInstruction;
							class FieldOrMethod;
							class GETFIELD;
							class GETSTATIC;
							class GOTO;
							class GOTO_W;
							class GotoInstruction;
							class I2B;
							class I2C;
							class I2D;
							class I2F;
							class I2L;
							class I2S;
							class IADD;
							class IALOAD;
							class IAND;
							class IASTORE;
							class ICONST;
							class IDIV;
							class IFEQ;
							class IFGE;
							class IFGT;
							class IFLE;
							class IFLT;
							class IFNE;
							class IFNONNULL;
							class IFNULL;
							class IF_ACMPEQ;
							class IF_ACMPNE;
							class IF_ICMPEQ;
							class IF_ICMPGE;
							class IF_ICMPGT;
							class IF_ICMPLE;
							class IF_ICMPLT;
							class IF_ICMPNE;
							class IINC;
							class ILOAD;
							class IMPDEP1;
							class IMPDEP2;
							class IMUL;
							class INEG;
							class INSTANCEOF;
							class INVOKEDYNAMIC;
							class INVOKEINTERFACE;
							class INVOKESPECIAL;
							class INVOKESTATIC;
							class INVOKEVIRTUAL;
							class IOR;
							class IREM;
							class IRETURN;
							class ISHL;
							class ISHR;
							class ISTORE;
							class ISUB;
							class IUSHR;
							class IXOR;
							class IfInstruction;
							class InvokeInstruction;
							class JSR;
							class JSR_W;
							class JsrInstruction;
							class L2D;
							class L2F;
							class L2I;
							class LADD;
							class LALOAD;
							class LAND;
							class LASTORE;
							class LCMP;
							class LCONST;
							class LDC;
							class LDC2_W;
							class LDIV;
							class LLOAD;
							class LMUL;
							class LNEG;
							class LOOKUPSWITCH;
							class LOR;
							class LREM;
							class LRETURN;
							class LSHL;
							class LSHR;
							class LSTORE;
							class LSUB;
							class LUSHR;
							class LXOR;
							class LoadClass;
							class LoadInstruction;
							class LocalVariableInstruction;
							class MONITORENTER;
							class MONITOREXIT;
							class MULTIANEWARRAY;
							class NEW;
							class NEWARRAY;
							class NOP;
							class POP;
							class POP2;
							class PUTFIELD;
							class PUTSTATIC;
							class PopInstruction;
							class PushInstruction;
							class RET;
							class RETURN;
							class ReturnInstruction;
							class SALOAD;
							class SASTORE;
							class SIPUSH;
							class SWAP;
							class Select;
							class StackConsumer;
							class StackInstruction;
							class StackProducer;
							class StoreInstruction;
							class TABLESWITCH;
							class TypedInstruction;
							class UnconditionalBranch;
							class VariableLengthInstruction;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class Visitor : public ::java::lang::Object {
	$interface(Visitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void visitAALOAD(::com::sun::org::apache::bcel::internal::generic::AALOAD* obj) {}
	virtual void visitAASTORE(::com::sun::org::apache::bcel::internal::generic::AASTORE* obj) {}
	virtual void visitACONST_NULL(::com::sun::org::apache::bcel::internal::generic::ACONST_NULL* obj) {}
	virtual void visitALOAD(::com::sun::org::apache::bcel::internal::generic::ALOAD* obj) {}
	virtual void visitANEWARRAY(::com::sun::org::apache::bcel::internal::generic::ANEWARRAY* obj) {}
	virtual void visitARETURN(::com::sun::org::apache::bcel::internal::generic::ARETURN* obj) {}
	virtual void visitARRAYLENGTH(::com::sun::org::apache::bcel::internal::generic::ARRAYLENGTH* obj) {}
	virtual void visitASTORE(::com::sun::org::apache::bcel::internal::generic::ASTORE* obj) {}
	virtual void visitATHROW(::com::sun::org::apache::bcel::internal::generic::ATHROW* obj) {}
	virtual void visitAllocationInstruction(::com::sun::org::apache::bcel::internal::generic::AllocationInstruction* obj) {}
	virtual void visitArithmeticInstruction(::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* obj) {}
	virtual void visitArrayInstruction(::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* obj) {}
	virtual void visitBALOAD(::com::sun::org::apache::bcel::internal::generic::BALOAD* obj) {}
	virtual void visitBASTORE(::com::sun::org::apache::bcel::internal::generic::BASTORE* obj) {}
	virtual void visitBIPUSH(::com::sun::org::apache::bcel::internal::generic::BIPUSH* obj) {}
	virtual void visitBREAKPOINT(::com::sun::org::apache::bcel::internal::generic::BREAKPOINT* obj) {}
	virtual void visitBranchInstruction(::com::sun::org::apache::bcel::internal::generic::BranchInstruction* obj) {}
	virtual void visitCALOAD(::com::sun::org::apache::bcel::internal::generic::CALOAD* obj) {}
	virtual void visitCASTORE(::com::sun::org::apache::bcel::internal::generic::CASTORE* obj) {}
	virtual void visitCHECKCAST(::com::sun::org::apache::bcel::internal::generic::CHECKCAST* obj) {}
	virtual void visitCPInstruction(::com::sun::org::apache::bcel::internal::generic::CPInstruction* obj) {}
	virtual void visitConstantPushInstruction(::com::sun::org::apache::bcel::internal::generic::ConstantPushInstruction* obj) {}
	virtual void visitConversionInstruction(::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* obj) {}
	virtual void visitD2F(::com::sun::org::apache::bcel::internal::generic::D2F* obj) {}
	virtual void visitD2I(::com::sun::org::apache::bcel::internal::generic::D2I* obj) {}
	virtual void visitD2L(::com::sun::org::apache::bcel::internal::generic::D2L* obj) {}
	virtual void visitDADD(::com::sun::org::apache::bcel::internal::generic::DADD* obj) {}
	virtual void visitDALOAD(::com::sun::org::apache::bcel::internal::generic::DALOAD* obj) {}
	virtual void visitDASTORE(::com::sun::org::apache::bcel::internal::generic::DASTORE* obj) {}
	virtual void visitDCMPG(::com::sun::org::apache::bcel::internal::generic::DCMPG* obj) {}
	virtual void visitDCMPL(::com::sun::org::apache::bcel::internal::generic::DCMPL* obj) {}
	virtual void visitDCONST(::com::sun::org::apache::bcel::internal::generic::DCONST* obj) {}
	virtual void visitDDIV(::com::sun::org::apache::bcel::internal::generic::DDIV* obj) {}
	virtual void visitDLOAD(::com::sun::org::apache::bcel::internal::generic::DLOAD* obj) {}
	virtual void visitDMUL(::com::sun::org::apache::bcel::internal::generic::DMUL* obj) {}
	virtual void visitDNEG(::com::sun::org::apache::bcel::internal::generic::DNEG* obj) {}
	virtual void visitDREM(::com::sun::org::apache::bcel::internal::generic::DREM* obj) {}
	virtual void visitDRETURN(::com::sun::org::apache::bcel::internal::generic::DRETURN* obj) {}
	virtual void visitDSTORE(::com::sun::org::apache::bcel::internal::generic::DSTORE* obj) {}
	virtual void visitDSUB(::com::sun::org::apache::bcel::internal::generic::DSUB* obj) {}
	virtual void visitDUP(::com::sun::org::apache::bcel::internal::generic::DUP* obj) {}
	virtual void visitDUP2(::com::sun::org::apache::bcel::internal::generic::DUP2* obj) {}
	virtual void visitDUP2_X1(::com::sun::org::apache::bcel::internal::generic::DUP2_X1* obj) {}
	virtual void visitDUP2_X2(::com::sun::org::apache::bcel::internal::generic::DUP2_X2* obj) {}
	virtual void visitDUP_X1(::com::sun::org::apache::bcel::internal::generic::DUP_X1* obj) {}
	virtual void visitDUP_X2(::com::sun::org::apache::bcel::internal::generic::DUP_X2* obj) {}
	virtual void visitExceptionThrower(::com::sun::org::apache::bcel::internal::generic::ExceptionThrower* obj) {}
	virtual void visitF2D(::com::sun::org::apache::bcel::internal::generic::F2D* obj) {}
	virtual void visitF2I(::com::sun::org::apache::bcel::internal::generic::F2I* obj) {}
	virtual void visitF2L(::com::sun::org::apache::bcel::internal::generic::F2L* obj) {}
	virtual void visitFADD(::com::sun::org::apache::bcel::internal::generic::FADD* obj) {}
	virtual void visitFALOAD(::com::sun::org::apache::bcel::internal::generic::FALOAD* obj) {}
	virtual void visitFASTORE(::com::sun::org::apache::bcel::internal::generic::FASTORE* obj) {}
	virtual void visitFCMPG(::com::sun::org::apache::bcel::internal::generic::FCMPG* obj) {}
	virtual void visitFCMPL(::com::sun::org::apache::bcel::internal::generic::FCMPL* obj) {}
	virtual void visitFCONST(::com::sun::org::apache::bcel::internal::generic::FCONST* obj) {}
	virtual void visitFDIV(::com::sun::org::apache::bcel::internal::generic::FDIV* obj) {}
	virtual void visitFLOAD(::com::sun::org::apache::bcel::internal::generic::FLOAD* obj) {}
	virtual void visitFMUL(::com::sun::org::apache::bcel::internal::generic::FMUL* obj) {}
	virtual void visitFNEG(::com::sun::org::apache::bcel::internal::generic::FNEG* obj) {}
	virtual void visitFREM(::com::sun::org::apache::bcel::internal::generic::FREM* obj) {}
	virtual void visitFRETURN(::com::sun::org::apache::bcel::internal::generic::FRETURN* obj) {}
	virtual void visitFSTORE(::com::sun::org::apache::bcel::internal::generic::FSTORE* obj) {}
	virtual void visitFSUB(::com::sun::org::apache::bcel::internal::generic::FSUB* obj) {}
	virtual void visitFieldInstruction(::com::sun::org::apache::bcel::internal::generic::FieldInstruction* obj) {}
	virtual void visitFieldOrMethod(::com::sun::org::apache::bcel::internal::generic::FieldOrMethod* obj) {}
	virtual void visitGETFIELD(::com::sun::org::apache::bcel::internal::generic::GETFIELD* obj) {}
	virtual void visitGETSTATIC(::com::sun::org::apache::bcel::internal::generic::GETSTATIC* obj) {}
	virtual void visitGOTO(::com::sun::org::apache::bcel::internal::generic::GOTO* obj) {}
	virtual void visitGOTO_W(::com::sun::org::apache::bcel::internal::generic::GOTO_W* obj) {}
	virtual void visitGotoInstruction(::com::sun::org::apache::bcel::internal::generic::GotoInstruction* obj) {}
	virtual void visitI2B(::com::sun::org::apache::bcel::internal::generic::I2B* obj) {}
	virtual void visitI2C(::com::sun::org::apache::bcel::internal::generic::I2C* obj) {}
	virtual void visitI2D(::com::sun::org::apache::bcel::internal::generic::I2D* obj) {}
	virtual void visitI2F(::com::sun::org::apache::bcel::internal::generic::I2F* obj) {}
	virtual void visitI2L(::com::sun::org::apache::bcel::internal::generic::I2L* obj) {}
	virtual void visitI2S(::com::sun::org::apache::bcel::internal::generic::I2S* obj) {}
	virtual void visitIADD(::com::sun::org::apache::bcel::internal::generic::IADD* obj) {}
	virtual void visitIALOAD(::com::sun::org::apache::bcel::internal::generic::IALOAD* obj) {}
	virtual void visitIAND(::com::sun::org::apache::bcel::internal::generic::IAND* obj) {}
	virtual void visitIASTORE(::com::sun::org::apache::bcel::internal::generic::IASTORE* obj) {}
	virtual void visitICONST(::com::sun::org::apache::bcel::internal::generic::ICONST* obj) {}
	virtual void visitIDIV(::com::sun::org::apache::bcel::internal::generic::IDIV* obj) {}
	virtual void visitIFEQ(::com::sun::org::apache::bcel::internal::generic::IFEQ* obj) {}
	virtual void visitIFGE(::com::sun::org::apache::bcel::internal::generic::IFGE* obj) {}
	virtual void visitIFGT(::com::sun::org::apache::bcel::internal::generic::IFGT* obj) {}
	virtual void visitIFLE(::com::sun::org::apache::bcel::internal::generic::IFLE* obj) {}
	virtual void visitIFLT(::com::sun::org::apache::bcel::internal::generic::IFLT* obj) {}
	virtual void visitIFNE(::com::sun::org::apache::bcel::internal::generic::IFNE* obj) {}
	virtual void visitIFNONNULL(::com::sun::org::apache::bcel::internal::generic::IFNONNULL* obj) {}
	virtual void visitIFNULL(::com::sun::org::apache::bcel::internal::generic::IFNULL* obj) {}
	virtual void visitIF_ACMPEQ(::com::sun::org::apache::bcel::internal::generic::IF_ACMPEQ* obj) {}
	virtual void visitIF_ACMPNE(::com::sun::org::apache::bcel::internal::generic::IF_ACMPNE* obj) {}
	virtual void visitIF_ICMPEQ(::com::sun::org::apache::bcel::internal::generic::IF_ICMPEQ* obj) {}
	virtual void visitIF_ICMPGE(::com::sun::org::apache::bcel::internal::generic::IF_ICMPGE* obj) {}
	virtual void visitIF_ICMPGT(::com::sun::org::apache::bcel::internal::generic::IF_ICMPGT* obj) {}
	virtual void visitIF_ICMPLE(::com::sun::org::apache::bcel::internal::generic::IF_ICMPLE* obj) {}
	virtual void visitIF_ICMPLT(::com::sun::org::apache::bcel::internal::generic::IF_ICMPLT* obj) {}
	virtual void visitIF_ICMPNE(::com::sun::org::apache::bcel::internal::generic::IF_ICMPNE* obj) {}
	virtual void visitIINC(::com::sun::org::apache::bcel::internal::generic::IINC* obj) {}
	virtual void visitILOAD(::com::sun::org::apache::bcel::internal::generic::ILOAD* obj) {}
	virtual void visitIMPDEP1(::com::sun::org::apache::bcel::internal::generic::IMPDEP1* obj) {}
	virtual void visitIMPDEP2(::com::sun::org::apache::bcel::internal::generic::IMPDEP2* obj) {}
	virtual void visitIMUL(::com::sun::org::apache::bcel::internal::generic::IMUL* obj) {}
	virtual void visitINEG(::com::sun::org::apache::bcel::internal::generic::INEG* obj) {}
	virtual void visitINSTANCEOF(::com::sun::org::apache::bcel::internal::generic::INSTANCEOF* obj) {}
	virtual void visitINVOKEDYNAMIC(::com::sun::org::apache::bcel::internal::generic::INVOKEDYNAMIC* obj) {}
	virtual void visitINVOKEINTERFACE(::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE* obj) {}
	virtual void visitINVOKESPECIAL(::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL* obj) {}
	virtual void visitINVOKESTATIC(::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC* obj) {}
	virtual void visitINVOKEVIRTUAL(::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL* obj) {}
	virtual void visitIOR(::com::sun::org::apache::bcel::internal::generic::IOR* obj) {}
	virtual void visitIREM(::com::sun::org::apache::bcel::internal::generic::IREM* obj) {}
	virtual void visitIRETURN(::com::sun::org::apache::bcel::internal::generic::IRETURN* obj) {}
	virtual void visitISHL(::com::sun::org::apache::bcel::internal::generic::ISHL* obj) {}
	virtual void visitISHR(::com::sun::org::apache::bcel::internal::generic::ISHR* obj) {}
	virtual void visitISTORE(::com::sun::org::apache::bcel::internal::generic::ISTORE* obj) {}
	virtual void visitISUB(::com::sun::org::apache::bcel::internal::generic::ISUB* obj) {}
	virtual void visitIUSHR(::com::sun::org::apache::bcel::internal::generic::IUSHR* obj) {}
	virtual void visitIXOR(::com::sun::org::apache::bcel::internal::generic::IXOR* obj) {}
	virtual void visitIfInstruction(::com::sun::org::apache::bcel::internal::generic::IfInstruction* obj) {}
	virtual void visitInvokeInstruction(::com::sun::org::apache::bcel::internal::generic::InvokeInstruction* obj) {}
	virtual void visitJSR(::com::sun::org::apache::bcel::internal::generic::JSR* obj) {}
	virtual void visitJSR_W(::com::sun::org::apache::bcel::internal::generic::JSR_W* obj) {}
	virtual void visitJsrInstruction(::com::sun::org::apache::bcel::internal::generic::JsrInstruction* obj) {}
	virtual void visitL2D(::com::sun::org::apache::bcel::internal::generic::L2D* obj) {}
	virtual void visitL2F(::com::sun::org::apache::bcel::internal::generic::L2F* obj) {}
	virtual void visitL2I(::com::sun::org::apache::bcel::internal::generic::L2I* obj) {}
	virtual void visitLADD(::com::sun::org::apache::bcel::internal::generic::LADD* obj) {}
	virtual void visitLALOAD(::com::sun::org::apache::bcel::internal::generic::LALOAD* obj) {}
	virtual void visitLAND(::com::sun::org::apache::bcel::internal::generic::LAND* obj) {}
	virtual void visitLASTORE(::com::sun::org::apache::bcel::internal::generic::LASTORE* obj) {}
	virtual void visitLCMP(::com::sun::org::apache::bcel::internal::generic::LCMP* obj) {}
	virtual void visitLCONST(::com::sun::org::apache::bcel::internal::generic::LCONST* obj) {}
	virtual void visitLDC(::com::sun::org::apache::bcel::internal::generic::LDC* obj) {}
	virtual void visitLDC2_W(::com::sun::org::apache::bcel::internal::generic::LDC2_W* obj) {}
	virtual void visitLDIV(::com::sun::org::apache::bcel::internal::generic::LDIV* obj) {}
	virtual void visitLLOAD(::com::sun::org::apache::bcel::internal::generic::LLOAD* obj) {}
	virtual void visitLMUL(::com::sun::org::apache::bcel::internal::generic::LMUL* obj) {}
	virtual void visitLNEG(::com::sun::org::apache::bcel::internal::generic::LNEG* obj) {}
	virtual void visitLOOKUPSWITCH(::com::sun::org::apache::bcel::internal::generic::LOOKUPSWITCH* obj) {}
	virtual void visitLOR(::com::sun::org::apache::bcel::internal::generic::LOR* obj) {}
	virtual void visitLREM(::com::sun::org::apache::bcel::internal::generic::LREM* obj) {}
	virtual void visitLRETURN(::com::sun::org::apache::bcel::internal::generic::LRETURN* obj) {}
	virtual void visitLSHL(::com::sun::org::apache::bcel::internal::generic::LSHL* obj) {}
	virtual void visitLSHR(::com::sun::org::apache::bcel::internal::generic::LSHR* obj) {}
	virtual void visitLSTORE(::com::sun::org::apache::bcel::internal::generic::LSTORE* obj) {}
	virtual void visitLSUB(::com::sun::org::apache::bcel::internal::generic::LSUB* obj) {}
	virtual void visitLUSHR(::com::sun::org::apache::bcel::internal::generic::LUSHR* obj) {}
	virtual void visitLXOR(::com::sun::org::apache::bcel::internal::generic::LXOR* obj) {}
	virtual void visitLoadClass(::com::sun::org::apache::bcel::internal::generic::LoadClass* obj) {}
	virtual void visitLoadInstruction(::com::sun::org::apache::bcel::internal::generic::LoadInstruction* obj) {}
	virtual void visitLocalVariableInstruction(::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* obj) {}
	virtual void visitMONITORENTER(::com::sun::org::apache::bcel::internal::generic::MONITORENTER* obj) {}
	virtual void visitMONITOREXIT(::com::sun::org::apache::bcel::internal::generic::MONITOREXIT* obj) {}
	virtual void visitMULTIANEWARRAY(::com::sun::org::apache::bcel::internal::generic::MULTIANEWARRAY* obj) {}
	virtual void visitNEW(::com::sun::org::apache::bcel::internal::generic::NEW* obj) {}
	virtual void visitNEWARRAY(::com::sun::org::apache::bcel::internal::generic::NEWARRAY* obj) {}
	virtual void visitNOP(::com::sun::org::apache::bcel::internal::generic::NOP* obj) {}
	virtual void visitPOP(::com::sun::org::apache::bcel::internal::generic::POP* obj) {}
	virtual void visitPOP2(::com::sun::org::apache::bcel::internal::generic::POP2* obj) {}
	virtual void visitPUTFIELD(::com::sun::org::apache::bcel::internal::generic::PUTFIELD* obj) {}
	virtual void visitPUTSTATIC(::com::sun::org::apache::bcel::internal::generic::PUTSTATIC* obj) {}
	virtual void visitPopInstruction(::com::sun::org::apache::bcel::internal::generic::PopInstruction* obj) {}
	virtual void visitPushInstruction(::com::sun::org::apache::bcel::internal::generic::PushInstruction* obj) {}
	virtual void visitRET(::com::sun::org::apache::bcel::internal::generic::RET* obj) {}
	virtual void visitRETURN(::com::sun::org::apache::bcel::internal::generic::RETURN* obj) {}
	virtual void visitReturnInstruction(::com::sun::org::apache::bcel::internal::generic::ReturnInstruction* obj) {}
	virtual void visitSALOAD(::com::sun::org::apache::bcel::internal::generic::SALOAD* obj) {}
	virtual void visitSASTORE(::com::sun::org::apache::bcel::internal::generic::SASTORE* obj) {}
	virtual void visitSIPUSH(::com::sun::org::apache::bcel::internal::generic::SIPUSH* obj) {}
	virtual void visitSWAP(::com::sun::org::apache::bcel::internal::generic::SWAP* obj) {}
	virtual void visitSelect(::com::sun::org::apache::bcel::internal::generic::Select* obj) {}
	virtual void visitStackConsumer(::com::sun::org::apache::bcel::internal::generic::StackConsumer* obj) {}
	virtual void visitStackInstruction(::com::sun::org::apache::bcel::internal::generic::StackInstruction* obj) {}
	virtual void visitStackProducer(::com::sun::org::apache::bcel::internal::generic::StackProducer* obj) {}
	virtual void visitStoreInstruction(::com::sun::org::apache::bcel::internal::generic::StoreInstruction* obj) {}
	virtual void visitTABLESWITCH(::com::sun::org::apache::bcel::internal::generic::TABLESWITCH* obj) {}
	virtual void visitTypedInstruction(::com::sun::org::apache::bcel::internal::generic::TypedInstruction* obj) {}
	virtual void visitUnconditionalBranch(::com::sun::org::apache::bcel::internal::generic::UnconditionalBranch* obj) {}
	virtual void visitVariableLengthInstruction(::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction* obj) {}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_Visitor_h_