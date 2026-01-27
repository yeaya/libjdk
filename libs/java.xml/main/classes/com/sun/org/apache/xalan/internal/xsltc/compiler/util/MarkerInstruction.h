#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MarkerInstruction_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MarkerInstruction_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.MarkerInstruction
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction

#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
							class Visitor;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class DataOutputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

class MarkerInstruction : public ::com::sun::org::apache::bcel::internal::generic::Instruction {
	$class(MarkerInstruction, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction)
public:
	MarkerInstruction();
	void init$();
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* copy() override;
	virtual void dump(::java::io::DataOutputStream* out) override;
	virtual int32_t produceStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
};

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MarkerInstruction_h_