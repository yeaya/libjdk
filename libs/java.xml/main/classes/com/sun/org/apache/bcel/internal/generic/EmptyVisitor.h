#ifndef _com_sun_org_apache_bcel_internal_generic_EmptyVisitor_h_
#define _com_sun_org_apache_bcel_internal_generic_EmptyVisitor_h_
//$ class com.sun.org.apache.bcel.internal.generic.EmptyVisitor
//$ extends com.sun.org.apache.bcel.internal.generic.Visitor

#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>

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

class EmptyVisitor : public ::com::sun::org::apache::bcel::internal::generic::Visitor {
	$class(EmptyVisitor, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Visitor)
public:
	EmptyVisitor();
	void init$();
	virtual void visitAALOAD(::com::sun::org::apache::bcel::internal::generic::AALOAD* obj) override;
	virtual void visitAASTORE(::com::sun::org::apache::bcel::internal::generic::AASTORE* obj) override;
	virtual void visitACONST_NULL(::com::sun::org::apache::bcel::internal::generic::ACONST_NULL* obj) override;
	virtual void visitALOAD(::com::sun::org::apache::bcel::internal::generic::ALOAD* obj) override;
	virtual void visitANEWARRAY(::com::sun::org::apache::bcel::internal::generic::ANEWARRAY* obj) override;
	virtual void visitARETURN(::com::sun::org::apache::bcel::internal::generic::ARETURN* obj) override;
	virtual void visitARRAYLENGTH(::com::sun::org::apache::bcel::internal::generic::ARRAYLENGTH* obj) override;
	virtual void visitASTORE(::com::sun::org::apache::bcel::internal::generic::ASTORE* obj) override;
	virtual void visitATHROW(::com::sun::org::apache::bcel::internal::generic::ATHROW* obj) override;
	virtual void visitAllocationInstruction(::com::sun::org::apache::bcel::internal::generic::AllocationInstruction* obj) override;
	virtual void visitArithmeticInstruction(::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* obj) override;
	virtual void visitArrayInstruction(::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* obj) override;
	virtual void visitBALOAD(::com::sun::org::apache::bcel::internal::generic::BALOAD* obj) override;
	virtual void visitBASTORE(::com::sun::org::apache::bcel::internal::generic::BASTORE* obj) override;
	virtual void visitBIPUSH(::com::sun::org::apache::bcel::internal::generic::BIPUSH* obj) override;
	virtual void visitBREAKPOINT(::com::sun::org::apache::bcel::internal::generic::BREAKPOINT* obj) override;
	virtual void visitBranchInstruction(::com::sun::org::apache::bcel::internal::generic::BranchInstruction* obj) override;
	virtual void visitCALOAD(::com::sun::org::apache::bcel::internal::generic::CALOAD* obj) override;
	virtual void visitCASTORE(::com::sun::org::apache::bcel::internal::generic::CASTORE* obj) override;
	virtual void visitCHECKCAST(::com::sun::org::apache::bcel::internal::generic::CHECKCAST* obj) override;
	virtual void visitCPInstruction(::com::sun::org::apache::bcel::internal::generic::CPInstruction* obj) override;
	virtual void visitConstantPushInstruction(::com::sun::org::apache::bcel::internal::generic::ConstantPushInstruction* obj) override;
	virtual void visitConversionInstruction(::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* obj) override;
	virtual void visitD2F(::com::sun::org::apache::bcel::internal::generic::D2F* obj) override;
	virtual void visitD2I(::com::sun::org::apache::bcel::internal::generic::D2I* obj) override;
	virtual void visitD2L(::com::sun::org::apache::bcel::internal::generic::D2L* obj) override;
	virtual void visitDADD(::com::sun::org::apache::bcel::internal::generic::DADD* obj) override;
	virtual void visitDALOAD(::com::sun::org::apache::bcel::internal::generic::DALOAD* obj) override;
	virtual void visitDASTORE(::com::sun::org::apache::bcel::internal::generic::DASTORE* obj) override;
	virtual void visitDCMPG(::com::sun::org::apache::bcel::internal::generic::DCMPG* obj) override;
	virtual void visitDCMPL(::com::sun::org::apache::bcel::internal::generic::DCMPL* obj) override;
	virtual void visitDCONST(::com::sun::org::apache::bcel::internal::generic::DCONST* obj) override;
	virtual void visitDDIV(::com::sun::org::apache::bcel::internal::generic::DDIV* obj) override;
	virtual void visitDLOAD(::com::sun::org::apache::bcel::internal::generic::DLOAD* obj) override;
	virtual void visitDMUL(::com::sun::org::apache::bcel::internal::generic::DMUL* obj) override;
	virtual void visitDNEG(::com::sun::org::apache::bcel::internal::generic::DNEG* obj) override;
	virtual void visitDREM(::com::sun::org::apache::bcel::internal::generic::DREM* obj) override;
	virtual void visitDRETURN(::com::sun::org::apache::bcel::internal::generic::DRETURN* obj) override;
	virtual void visitDSTORE(::com::sun::org::apache::bcel::internal::generic::DSTORE* obj) override;
	virtual void visitDSUB(::com::sun::org::apache::bcel::internal::generic::DSUB* obj) override;
	virtual void visitDUP(::com::sun::org::apache::bcel::internal::generic::DUP* obj) override;
	virtual void visitDUP2(::com::sun::org::apache::bcel::internal::generic::DUP2* obj) override;
	virtual void visitDUP2_X1(::com::sun::org::apache::bcel::internal::generic::DUP2_X1* obj) override;
	virtual void visitDUP2_X2(::com::sun::org::apache::bcel::internal::generic::DUP2_X2* obj) override;
	virtual void visitDUP_X1(::com::sun::org::apache::bcel::internal::generic::DUP_X1* obj) override;
	virtual void visitDUP_X2(::com::sun::org::apache::bcel::internal::generic::DUP_X2* obj) override;
	virtual void visitExceptionThrower(::com::sun::org::apache::bcel::internal::generic::ExceptionThrower* obj) override;
	virtual void visitF2D(::com::sun::org::apache::bcel::internal::generic::F2D* obj) override;
	virtual void visitF2I(::com::sun::org::apache::bcel::internal::generic::F2I* obj) override;
	virtual void visitF2L(::com::sun::org::apache::bcel::internal::generic::F2L* obj) override;
	virtual void visitFADD(::com::sun::org::apache::bcel::internal::generic::FADD* obj) override;
	virtual void visitFALOAD(::com::sun::org::apache::bcel::internal::generic::FALOAD* obj) override;
	virtual void visitFASTORE(::com::sun::org::apache::bcel::internal::generic::FASTORE* obj) override;
	virtual void visitFCMPG(::com::sun::org::apache::bcel::internal::generic::FCMPG* obj) override;
	virtual void visitFCMPL(::com::sun::org::apache::bcel::internal::generic::FCMPL* obj) override;
	virtual void visitFCONST(::com::sun::org::apache::bcel::internal::generic::FCONST* obj) override;
	virtual void visitFDIV(::com::sun::org::apache::bcel::internal::generic::FDIV* obj) override;
	virtual void visitFLOAD(::com::sun::org::apache::bcel::internal::generic::FLOAD* obj) override;
	virtual void visitFMUL(::com::sun::org::apache::bcel::internal::generic::FMUL* obj) override;
	virtual void visitFNEG(::com::sun::org::apache::bcel::internal::generic::FNEG* obj) override;
	virtual void visitFREM(::com::sun::org::apache::bcel::internal::generic::FREM* obj) override;
	virtual void visitFRETURN(::com::sun::org::apache::bcel::internal::generic::FRETURN* obj) override;
	virtual void visitFSTORE(::com::sun::org::apache::bcel::internal::generic::FSTORE* obj) override;
	virtual void visitFSUB(::com::sun::org::apache::bcel::internal::generic::FSUB* obj) override;
	virtual void visitFieldInstruction(::com::sun::org::apache::bcel::internal::generic::FieldInstruction* obj) override;
	virtual void visitFieldOrMethod(::com::sun::org::apache::bcel::internal::generic::FieldOrMethod* obj) override;
	virtual void visitGETFIELD(::com::sun::org::apache::bcel::internal::generic::GETFIELD* obj) override;
	virtual void visitGETSTATIC(::com::sun::org::apache::bcel::internal::generic::GETSTATIC* obj) override;
	virtual void visitGOTO(::com::sun::org::apache::bcel::internal::generic::GOTO* obj) override;
	virtual void visitGOTO_W(::com::sun::org::apache::bcel::internal::generic::GOTO_W* obj) override;
	virtual void visitGotoInstruction(::com::sun::org::apache::bcel::internal::generic::GotoInstruction* obj) override;
	virtual void visitI2B(::com::sun::org::apache::bcel::internal::generic::I2B* obj) override;
	virtual void visitI2C(::com::sun::org::apache::bcel::internal::generic::I2C* obj) override;
	virtual void visitI2D(::com::sun::org::apache::bcel::internal::generic::I2D* obj) override;
	virtual void visitI2F(::com::sun::org::apache::bcel::internal::generic::I2F* obj) override;
	virtual void visitI2L(::com::sun::org::apache::bcel::internal::generic::I2L* obj) override;
	virtual void visitI2S(::com::sun::org::apache::bcel::internal::generic::I2S* obj) override;
	virtual void visitIADD(::com::sun::org::apache::bcel::internal::generic::IADD* obj) override;
	virtual void visitIALOAD(::com::sun::org::apache::bcel::internal::generic::IALOAD* obj) override;
	virtual void visitIAND(::com::sun::org::apache::bcel::internal::generic::IAND* obj) override;
	virtual void visitIASTORE(::com::sun::org::apache::bcel::internal::generic::IASTORE* obj) override;
	virtual void visitICONST(::com::sun::org::apache::bcel::internal::generic::ICONST* obj) override;
	virtual void visitIDIV(::com::sun::org::apache::bcel::internal::generic::IDIV* obj) override;
	virtual void visitIFEQ(::com::sun::org::apache::bcel::internal::generic::IFEQ* obj) override;
	virtual void visitIFGE(::com::sun::org::apache::bcel::internal::generic::IFGE* obj) override;
	virtual void visitIFGT(::com::sun::org::apache::bcel::internal::generic::IFGT* obj) override;
	virtual void visitIFLE(::com::sun::org::apache::bcel::internal::generic::IFLE* obj) override;
	virtual void visitIFLT(::com::sun::org::apache::bcel::internal::generic::IFLT* obj) override;
	virtual void visitIFNE(::com::sun::org::apache::bcel::internal::generic::IFNE* obj) override;
	virtual void visitIFNONNULL(::com::sun::org::apache::bcel::internal::generic::IFNONNULL* obj) override;
	virtual void visitIFNULL(::com::sun::org::apache::bcel::internal::generic::IFNULL* obj) override;
	virtual void visitIF_ACMPEQ(::com::sun::org::apache::bcel::internal::generic::IF_ACMPEQ* obj) override;
	virtual void visitIF_ACMPNE(::com::sun::org::apache::bcel::internal::generic::IF_ACMPNE* obj) override;
	virtual void visitIF_ICMPEQ(::com::sun::org::apache::bcel::internal::generic::IF_ICMPEQ* obj) override;
	virtual void visitIF_ICMPGE(::com::sun::org::apache::bcel::internal::generic::IF_ICMPGE* obj) override;
	virtual void visitIF_ICMPGT(::com::sun::org::apache::bcel::internal::generic::IF_ICMPGT* obj) override;
	virtual void visitIF_ICMPLE(::com::sun::org::apache::bcel::internal::generic::IF_ICMPLE* obj) override;
	virtual void visitIF_ICMPLT(::com::sun::org::apache::bcel::internal::generic::IF_ICMPLT* obj) override;
	virtual void visitIF_ICMPNE(::com::sun::org::apache::bcel::internal::generic::IF_ICMPNE* obj) override;
	virtual void visitIINC(::com::sun::org::apache::bcel::internal::generic::IINC* obj) override;
	virtual void visitILOAD(::com::sun::org::apache::bcel::internal::generic::ILOAD* obj) override;
	virtual void visitIMPDEP1(::com::sun::org::apache::bcel::internal::generic::IMPDEP1* obj) override;
	virtual void visitIMPDEP2(::com::sun::org::apache::bcel::internal::generic::IMPDEP2* obj) override;
	virtual void visitIMUL(::com::sun::org::apache::bcel::internal::generic::IMUL* obj) override;
	virtual void visitINEG(::com::sun::org::apache::bcel::internal::generic::INEG* obj) override;
	virtual void visitINSTANCEOF(::com::sun::org::apache::bcel::internal::generic::INSTANCEOF* obj) override;
	virtual void visitINVOKEDYNAMIC(::com::sun::org::apache::bcel::internal::generic::INVOKEDYNAMIC* obj) override;
	virtual void visitINVOKEINTERFACE(::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE* obj) override;
	virtual void visitINVOKESPECIAL(::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL* obj) override;
	virtual void visitINVOKESTATIC(::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC* obj) override;
	virtual void visitINVOKEVIRTUAL(::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL* obj) override;
	virtual void visitIOR(::com::sun::org::apache::bcel::internal::generic::IOR* obj) override;
	virtual void visitIREM(::com::sun::org::apache::bcel::internal::generic::IREM* obj) override;
	virtual void visitIRETURN(::com::sun::org::apache::bcel::internal::generic::IRETURN* obj) override;
	virtual void visitISHL(::com::sun::org::apache::bcel::internal::generic::ISHL* obj) override;
	virtual void visitISHR(::com::sun::org::apache::bcel::internal::generic::ISHR* obj) override;
	virtual void visitISTORE(::com::sun::org::apache::bcel::internal::generic::ISTORE* obj) override;
	virtual void visitISUB(::com::sun::org::apache::bcel::internal::generic::ISUB* obj) override;
	virtual void visitIUSHR(::com::sun::org::apache::bcel::internal::generic::IUSHR* obj) override;
	virtual void visitIXOR(::com::sun::org::apache::bcel::internal::generic::IXOR* obj) override;
	virtual void visitIfInstruction(::com::sun::org::apache::bcel::internal::generic::IfInstruction* obj) override;
	virtual void visitInvokeInstruction(::com::sun::org::apache::bcel::internal::generic::InvokeInstruction* obj) override;
	virtual void visitJSR(::com::sun::org::apache::bcel::internal::generic::JSR* obj) override;
	virtual void visitJSR_W(::com::sun::org::apache::bcel::internal::generic::JSR_W* obj) override;
	virtual void visitJsrInstruction(::com::sun::org::apache::bcel::internal::generic::JsrInstruction* obj) override;
	virtual void visitL2D(::com::sun::org::apache::bcel::internal::generic::L2D* obj) override;
	virtual void visitL2F(::com::sun::org::apache::bcel::internal::generic::L2F* obj) override;
	virtual void visitL2I(::com::sun::org::apache::bcel::internal::generic::L2I* obj) override;
	virtual void visitLADD(::com::sun::org::apache::bcel::internal::generic::LADD* obj) override;
	virtual void visitLALOAD(::com::sun::org::apache::bcel::internal::generic::LALOAD* obj) override;
	virtual void visitLAND(::com::sun::org::apache::bcel::internal::generic::LAND* obj) override;
	virtual void visitLASTORE(::com::sun::org::apache::bcel::internal::generic::LASTORE* obj) override;
	virtual void visitLCMP(::com::sun::org::apache::bcel::internal::generic::LCMP* obj) override;
	virtual void visitLCONST(::com::sun::org::apache::bcel::internal::generic::LCONST* obj) override;
	virtual void visitLDC(::com::sun::org::apache::bcel::internal::generic::LDC* obj) override;
	virtual void visitLDC2_W(::com::sun::org::apache::bcel::internal::generic::LDC2_W* obj) override;
	virtual void visitLDIV(::com::sun::org::apache::bcel::internal::generic::LDIV* obj) override;
	virtual void visitLLOAD(::com::sun::org::apache::bcel::internal::generic::LLOAD* obj) override;
	virtual void visitLMUL(::com::sun::org::apache::bcel::internal::generic::LMUL* obj) override;
	virtual void visitLNEG(::com::sun::org::apache::bcel::internal::generic::LNEG* obj) override;
	virtual void visitLOOKUPSWITCH(::com::sun::org::apache::bcel::internal::generic::LOOKUPSWITCH* obj) override;
	virtual void visitLOR(::com::sun::org::apache::bcel::internal::generic::LOR* obj) override;
	virtual void visitLREM(::com::sun::org::apache::bcel::internal::generic::LREM* obj) override;
	virtual void visitLRETURN(::com::sun::org::apache::bcel::internal::generic::LRETURN* obj) override;
	virtual void visitLSHL(::com::sun::org::apache::bcel::internal::generic::LSHL* obj) override;
	virtual void visitLSHR(::com::sun::org::apache::bcel::internal::generic::LSHR* obj) override;
	virtual void visitLSTORE(::com::sun::org::apache::bcel::internal::generic::LSTORE* obj) override;
	virtual void visitLSUB(::com::sun::org::apache::bcel::internal::generic::LSUB* obj) override;
	virtual void visitLUSHR(::com::sun::org::apache::bcel::internal::generic::LUSHR* obj) override;
	virtual void visitLXOR(::com::sun::org::apache::bcel::internal::generic::LXOR* obj) override;
	virtual void visitLoadClass(::com::sun::org::apache::bcel::internal::generic::LoadClass* obj) override;
	virtual void visitLoadInstruction(::com::sun::org::apache::bcel::internal::generic::LoadInstruction* obj) override;
	virtual void visitLocalVariableInstruction(::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* obj) override;
	virtual void visitMONITORENTER(::com::sun::org::apache::bcel::internal::generic::MONITORENTER* obj) override;
	virtual void visitMONITOREXIT(::com::sun::org::apache::bcel::internal::generic::MONITOREXIT* obj) override;
	virtual void visitMULTIANEWARRAY(::com::sun::org::apache::bcel::internal::generic::MULTIANEWARRAY* obj) override;
	virtual void visitNEW(::com::sun::org::apache::bcel::internal::generic::NEW* obj) override;
	virtual void visitNEWARRAY(::com::sun::org::apache::bcel::internal::generic::NEWARRAY* obj) override;
	virtual void visitNOP(::com::sun::org::apache::bcel::internal::generic::NOP* obj) override;
	virtual void visitPOP(::com::sun::org::apache::bcel::internal::generic::POP* obj) override;
	virtual void visitPOP2(::com::sun::org::apache::bcel::internal::generic::POP2* obj) override;
	virtual void visitPUTFIELD(::com::sun::org::apache::bcel::internal::generic::PUTFIELD* obj) override;
	virtual void visitPUTSTATIC(::com::sun::org::apache::bcel::internal::generic::PUTSTATIC* obj) override;
	virtual void visitPopInstruction(::com::sun::org::apache::bcel::internal::generic::PopInstruction* obj) override;
	virtual void visitPushInstruction(::com::sun::org::apache::bcel::internal::generic::PushInstruction* obj) override;
	virtual void visitRET(::com::sun::org::apache::bcel::internal::generic::RET* obj) override;
	virtual void visitRETURN(::com::sun::org::apache::bcel::internal::generic::RETURN* obj) override;
	virtual void visitReturnInstruction(::com::sun::org::apache::bcel::internal::generic::ReturnInstruction* obj) override;
	virtual void visitSALOAD(::com::sun::org::apache::bcel::internal::generic::SALOAD* obj) override;
	virtual void visitSASTORE(::com::sun::org::apache::bcel::internal::generic::SASTORE* obj) override;
	virtual void visitSIPUSH(::com::sun::org::apache::bcel::internal::generic::SIPUSH* obj) override;
	virtual void visitSWAP(::com::sun::org::apache::bcel::internal::generic::SWAP* obj) override;
	virtual void visitSelect(::com::sun::org::apache::bcel::internal::generic::Select* obj) override;
	virtual void visitStackConsumer(::com::sun::org::apache::bcel::internal::generic::StackConsumer* obj) override;
	virtual void visitStackInstruction(::com::sun::org::apache::bcel::internal::generic::StackInstruction* obj) override;
	virtual void visitStackProducer(::com::sun::org::apache::bcel::internal::generic::StackProducer* obj) override;
	virtual void visitStoreInstruction(::com::sun::org::apache::bcel::internal::generic::StoreInstruction* obj) override;
	virtual void visitTABLESWITCH(::com::sun::org::apache::bcel::internal::generic::TABLESWITCH* obj) override;
	virtual void visitTypedInstruction(::com::sun::org::apache::bcel::internal::generic::TypedInstruction* obj) override;
	virtual void visitUnconditionalBranch(::com::sun::org::apache::bcel::internal::generic::UnconditionalBranch* obj) override;
	virtual void visitVariableLengthInstruction(::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction* obj) override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_EmptyVisitor_h_