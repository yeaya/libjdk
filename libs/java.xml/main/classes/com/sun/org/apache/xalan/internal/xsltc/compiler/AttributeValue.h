#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_AttributeValue_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_AttributeValue_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.AttributeValue
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Expression

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Parser;
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

class AttributeValue : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression {
	$class(AttributeValue, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression)
public:
	AttributeValue();
	void init$();
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue* create(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* parent, $String* text, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser);
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_AttributeValue_h_