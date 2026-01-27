#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_LiteralAttribute_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_LiteralAttribute_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.LiteralAttribute
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class AttributeValue;
								class Parser;
								class SymbolTable;
								class SyntaxTreeNode;
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
									class MethodGenerator;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class LiteralAttribute : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction {
	$class(LiteralAttribute, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction)
public:
	LiteralAttribute();
	void init$($String* name, $String* value, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* parent);
	virtual bool contextDependent() override;
	virtual void display(int32_t indent) override;
	$String* getName();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue* getValue();
	bool hasBadChars($String* value);
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	$String* _name = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue* _value = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_LiteralAttribute_h_