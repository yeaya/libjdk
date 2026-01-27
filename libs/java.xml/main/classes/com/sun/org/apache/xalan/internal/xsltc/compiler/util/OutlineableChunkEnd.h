#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_OutlineableChunkEnd_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_OutlineableChunkEnd_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.OutlineableChunkEnd
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.util.MarkerInstruction

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MarkerInstruction.h>

#pragma push_macro("OUTLINEABLECHUNKEND")
#undef OUTLINEABLECHUNKEND

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Instruction;
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

class OutlineableChunkEnd : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MarkerInstruction {
	$class(OutlineableChunkEnd, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MarkerInstruction)
public:
	OutlineableChunkEnd();
	void init$();
	virtual $String* getName() override;
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MarkerInstruction::toString;
	virtual $String* toString() override;
	virtual $String* toString(bool verbose) override;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* OUTLINEABLECHUNKEND;
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

#pragma pop_macro("OUTLINEABLECHUNKEND")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_OutlineableChunkEnd_h_