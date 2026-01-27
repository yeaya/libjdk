#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_XslElement_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_XslElement_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.XslElement
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
								class AttributeValueTemplate;
								class Parser;
								class SymbolTable;
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

class XslElement : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction {
	$class(XslElement, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction)
public:
	XslElement();
	void init$();
	virtual void display(int32_t indent) override;
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual void translateContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	void translateLiteral(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	$String* _prefix = nullptr;
	bool _ignore = false;
	bool _isLiteralName = false;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValueTemplate* _name = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValueTemplate* _namespace = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_XslElement_h_