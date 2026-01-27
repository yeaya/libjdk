#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_NodeCounterGenerator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_NodeCounterGenerator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.NodeCounterGenerator
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.util.ClassGenerator

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <java/lang/Array.h>

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
								class Stylesheet;
							}
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

class NodeCounterGenerator : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator {
	$class(NodeCounterGenerator, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator)
public:
	NodeCounterGenerator();
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator::addMethod;
	void init$($String* className, $String* superClassName, $String* fileName, int32_t accessFlags, $StringArray* interfaces, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* stylesheet);
	virtual bool isExternal() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* loadTranslet() override;
	void setTransletIndex(int32_t index);
	::com::sun::org::apache::bcel::internal::generic::Instruction* _aloadTranslet = nullptr;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_NodeCounterGenerator_h_