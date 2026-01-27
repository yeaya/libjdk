#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_CompareGenerator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_CompareGenerator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.CompareGenerator
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <java/lang/Array.h>

#pragma push_macro("CURRENT_INDEX")
#undef CURRENT_INDEX
#pragma push_macro("DOM_INDEX")
#undef DOM_INDEX
#pragma push_macro("ITERATOR_INDEX")
#undef ITERATOR_INDEX
#pragma push_macro("LAST_INDEX")
#undef LAST_INDEX
#pragma push_macro("LEVEL_INDEX")
#undef LEVEL_INDEX
#pragma push_macro("TRANSLET_INDEX")
#undef TRANSLET_INDEX

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

class CompareGenerator : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator {
	$class(CompareGenerator, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator)
public:
	CompareGenerator();
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator::addLocalVariable;
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator::getInstructionList;
	void init$(int32_t access_flags, ::com::sun::org::apache::bcel::internal::generic::Type* return_type, $Array<::com::sun::org::apache::bcel::internal::generic::Type>* arg_types, $StringArray* arg_names, $String* method_name, $String* class_name, ::com::sun::org::apache::bcel::internal::generic::InstructionList* il, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	int32_t getHandlerIndex();
	int32_t getIteratorIndex();
	virtual int32_t getLocalIndex($String* name) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* loadCurrentNode() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* loadDOM() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* loadIterator() override;
	::com::sun::org::apache::bcel::internal::generic::Instruction* loadLastNode();
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator::setMaxLocals;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* storeCurrentNode() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* storeIterator() override;
	static int32_t DOM_INDEX;
	static int32_t CURRENT_INDEX;
	static int32_t LEVEL_INDEX;
	static int32_t TRANSLET_INDEX;
	static int32_t LAST_INDEX;
	int32_t ITERATOR_INDEX = 0;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _iloadCurrent = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _istoreCurrent = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _aloadDom = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _iloadLast = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _aloadIterator = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _astoreIterator = nullptr;
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
#pragma pop_macro("DOM_INDEX")
#pragma pop_macro("ITERATOR_INDEX")
#pragma pop_macro("LAST_INDEX")
#pragma pop_macro("LEVEL_INDEX")
#pragma pop_macro("TRANSLET_INDEX")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_CompareGenerator_h_