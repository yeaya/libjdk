#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Number_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Number_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Number
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction
//$ implements com.sun.org.apache.xalan.internal.xsltc.compiler.Closure

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Closure.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <java/lang/Array.h>

#pragma push_macro("LEVEL_ANY")
#undef LEVEL_ANY
#pragma push_macro("LEVEL_MULTIPLE")
#undef LEVEL_MULTIPLE
#pragma push_macro("LEVEL_SINGLE")
#undef LEVEL_SINGLE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionList;
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
								class AttributeValueTemplate;
								class Expression;
								class Parser;
								class Pattern;
								class SymbolTable;
								class VariableRefBase;
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
									class ClassGenerator;
									class MatchGenerator;
									class MethodGenerator;
									class NodeCounterGenerator;
									class Type;
								}
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
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

class Number : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction, public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure {
	$class(Number, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure)
public:
	Number();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addVariable(::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase* variableRef) override;
	void compileConstructor(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen);
	void compileDefault(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	void compileLocals(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeCounterGenerator* nodeCounterGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MatchGenerator* matchGen, ::com::sun::org::apache::bcel::internal::generic::InstructionList* il);
	void compilePatterns(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual $String* getInnerClassName() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure* getParentClosure() override;
	bool hasValue();
	virtual bool inInnerClass() override;
	bool isDefault();
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	static const int32_t LEVEL_SINGLE = 0;
	static const int32_t LEVEL_MULTIPLE = 1;
	static const int32_t LEVEL_ANY = 2;
	static $StringArray* ClassNames;
	static $StringArray* FieldNames;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* _from = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* _count = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _value = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValueTemplate* _lang = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValueTemplate* _format = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValueTemplate* _letterValue = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValueTemplate* _groupingSeparator = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValueTemplate* _groupingSize = nullptr;
	int32_t _level = 0;
	bool _formatNeeded = false;
	$String* _className = nullptr;
	::java::util::List* _closureVars = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LEVEL_ANY")
#pragma pop_macro("LEVEL_MULTIPLE")
#pragma pop_macro("LEVEL_SINGLE")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Number_h_