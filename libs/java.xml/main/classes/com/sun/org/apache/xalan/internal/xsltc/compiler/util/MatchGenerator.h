#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MatchGenerator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MatchGenerator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.MatchGenerator
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <java/lang/Array.h>

#pragma push_macro("CURRENT_INDEX")
#undef CURRENT_INDEX

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

class MatchGenerator : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator {
	$class(MatchGenerator, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator)
public:
	MatchGenerator();
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator::addLocalVariable;
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator::getInstructionList;
	void init$(int32_t access_flags, ::com::sun::org::apache::bcel::internal::generic::Type* return_type, $Array<::com::sun::org::apache::bcel::internal::generic::Type>* arg_types, $StringArray* arg_names, $String* method_name, $String* class_name, ::com::sun::org::apache::bcel::internal::generic::InstructionList* il, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	int32_t getHandlerIndex();
	int32_t getIteratorIndex();
	virtual int32_t getLocalIndex($String* name) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* loadCurrentNode() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* loadDOM() override;
	void setDomIndex(int32_t domIndex);
	void setIteratorIndex(int32_t iteratorIndex);
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator::setMaxLocals;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* storeCurrentNode() override;
	static int32_t CURRENT_INDEX;
	int32_t _iteratorIndex = 0;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _iloadCurrent = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _istoreCurrent = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _aloadDom = nullptr;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MatchGenerator_h_