#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_RtMethodGenerator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_RtMethodGenerator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.RtMethodGenerator
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <java/lang/Array.h>

#pragma push_macro("HANDLER_INDEX")
#undef HANDLER_INDEX

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
							class Instruction;
							class InstructionList;
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

class RtMethodGenerator : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator {
	$class(RtMethodGenerator, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator)
public:
	RtMethodGenerator();
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator::addLocalVariable;
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator::getInstructionList;
	void init$(int32_t access_flags, ::com::sun::org::apache::bcel::internal::generic::Type* return_type, $Array<::com::sun::org::apache::bcel::internal::generic::Type>* arg_types, $StringArray* arg_names, $String* method_name, $String* class_name, ::com::sun::org::apache::bcel::internal::generic::InstructionList* il, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	int32_t getIteratorIndex();
	virtual int32_t getLocalIndex($String* name) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* loadHandler() override;
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator::setMaxLocals;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* storeHandler() override;
	static const int32_t HANDLER_INDEX = 2;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _astoreHandler = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _aloadHandler = nullptr;
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

#pragma pop_macro("HANDLER_INDEX")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_RtMethodGenerator_h_