#ifndef _com_sun_org_apache_bcel_internal_util_BCELFactory_h_
#define _com_sun_org_apache_bcel_internal_util_BCELFactory_h_
//$ class com.sun.org.apache.bcel.internal.util.BCELFactory
//$ extends com.sun.org.apache.bcel.internal.generic.EmptyVisitor

#include <com/sun/org/apache/bcel/internal/generic/EmptyVisitor.h>

#pragma push_macro("CONSTANT_PREFIX")
#undef CONSTANT_PREFIX

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class AllocationInstruction;
							class ArrayInstruction;
							class BranchInstruction;
							class CHECKCAST;
							class ConstantPoolGen;
							class ConstantPushInstruction;
							class FieldInstruction;
							class INSTANCEOF;
							class Instruction;
							class InvokeInstruction;
							class LDC;
							class LDC2_W;
							class LocalVariableInstruction;
							class MethodGen;
							class RET;
							class ReturnInstruction;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintWriter;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class BCELFactory : public ::com::sun::org::apache::bcel::internal::generic::EmptyVisitor {
	$class(BCELFactory, 0, ::com::sun::org::apache::bcel::internal::generic::EmptyVisitor)
public:
	BCELFactory();
	void init$(::com::sun::org::apache::bcel::internal::generic::MethodGen* mg, ::java::io::PrintWriter* out);
	void createConstant(Object$* value);
	virtual void start();
	void updateBranchTargets();
	void updateExceptionHandlers();
	virtual void visitAllocationInstruction(::com::sun::org::apache::bcel::internal::generic::AllocationInstruction* i) override;
	virtual void visitArrayInstruction(::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* i) override;
	virtual void visitBranchInstruction(::com::sun::org::apache::bcel::internal::generic::BranchInstruction* bi) override;
	virtual void visitCHECKCAST(::com::sun::org::apache::bcel::internal::generic::CHECKCAST* i) override;
	virtual void visitConstantPushInstruction(::com::sun::org::apache::bcel::internal::generic::ConstantPushInstruction* i) override;
	virtual void visitFieldInstruction(::com::sun::org::apache::bcel::internal::generic::FieldInstruction* i) override;
	virtual void visitINSTANCEOF(::com::sun::org::apache::bcel::internal::generic::INSTANCEOF* i) override;
	bool visitInstruction(::com::sun::org::apache::bcel::internal::generic::Instruction* i);
	virtual void visitInvokeInstruction(::com::sun::org::apache::bcel::internal::generic::InvokeInstruction* i) override;
	virtual void visitLDC(::com::sun::org::apache::bcel::internal::generic::LDC* i) override;
	virtual void visitLDC2_W(::com::sun::org::apache::bcel::internal::generic::LDC2_W* i) override;
	virtual void visitLocalVariableInstruction(::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* i) override;
	virtual void visitRET(::com::sun::org::apache::bcel::internal::generic::RET* i) override;
	virtual void visitReturnInstruction(::com::sun::org::apache::bcel::internal::generic::ReturnInstruction* i) override;
	static $String* CONSTANT_PREFIX;
	::com::sun::org::apache::bcel::internal::generic::MethodGen* _mg = nullptr;
	::java::io::PrintWriter* _out = nullptr;
	::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* _cp = nullptr;
	::java::util::Map* branch_map = nullptr;
	::java::util::List* branches = nullptr;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CONSTANT_PREFIX")

#endif // _com_sun_org_apache_bcel_internal_util_BCELFactory_h_