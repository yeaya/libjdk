#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_AttributeSetMethodGenerator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_AttributeSetMethodGenerator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.AttributeSetMethodGenerator
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <java/lang/Array.h>

#pragma push_macro("CURRENT_INDEX")
#undef CURRENT_INDEX
#pragma push_macro("PARAM_START_INDEX")
#undef PARAM_START_INDEX

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Instruction;
							class Type;
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
									class ClassGenerator;
								}
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

class AttributeSetMethodGenerator : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator {
	$class(AttributeSetMethodGenerator, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator)
public:
	AttributeSetMethodGenerator();
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator::addLocalVariable;
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator::getInstructionList;
	void init$($String* methodName, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	virtual int32_t getLocalIndex($String* name) override;
	::com::sun::org::apache::bcel::internal::generic::Instruction* loadParameter(int32_t index);
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator::setMaxLocals;
	::com::sun::org::apache::bcel::internal::generic::Instruction* storeParameter(int32_t index);
	static const int32_t CURRENT_INDEX = 4;
	static const int32_t PARAM_START_INDEX = 5;
	static $StringArray* argNames;
	static $Array<::com::sun::org::apache::bcel::internal::generic::Type>* argTypes;
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

#pragma pop_macro("CURRENT_INDEX")
#pragma pop_macro("PARAM_START_INDEX")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_AttributeSetMethodGenerator_h_