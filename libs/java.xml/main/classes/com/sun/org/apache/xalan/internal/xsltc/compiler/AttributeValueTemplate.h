#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_AttributeValueTemplate_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_AttributeValueTemplate_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.AttributeValueTemplate
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.AttributeValue

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue.h>

#pragma push_macro("DELIMITER")
#undef DELIMITER
#pragma push_macro("IN_EXPR")
#undef IN_EXPR
#pragma push_macro("IN_EXPR_DQUOTES")
#undef IN_EXPR_DQUOTES
#pragma push_macro("IN_EXPR_SQUOTES")
#undef IN_EXPR_SQUOTES
#pragma push_macro("OUT_EXPR")
#undef OUT_EXPR

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
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

class AttributeValueTemplate : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue {
	$class(AttributeValueTemplate, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue)
public:
	AttributeValueTemplate();
	void init$($String* value, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* parent);
	void parseAVTemplate($String* text, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser);
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	static const int32_t OUT_EXPR = 0;
	static const int32_t IN_EXPR = 1;
	static const int32_t IN_EXPR_SQUOTES = 2;
	static const int32_t IN_EXPR_DQUOTES = 3;
	static $String* DELIMITER;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DELIMITER")
#pragma pop_macro("IN_EXPR")
#pragma pop_macro("IN_EXPR_DQUOTES")
#pragma pop_macro("IN_EXPR_SQUOTES")
#pragma pop_macro("OUT_EXPR")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_AttributeValueTemplate_h_