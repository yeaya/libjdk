#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_OutlineableChunkStart_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_OutlineableChunkStart_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.OutlineableChunkStart
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.util.MarkerInstruction

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MarkerInstruction.h>

#pragma push_macro("OUTLINEABLECHUNKSTART")
#undef OUTLINEABLECHUNKSTART

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

class OutlineableChunkStart : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MarkerInstruction {
	$class(OutlineableChunkStart, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MarkerInstruction)
public:
	OutlineableChunkStart();
	void init$();
	virtual $String* getName() override;
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MarkerInstruction::toString;
	virtual $String* toString() override;
	virtual $String* toString(bool verbose) override;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* OUTLINEABLECHUNKSTART;
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

#pragma pop_macro("OUTLINEABLECHUNKSTART")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_OutlineableChunkStart_h_