#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Attribute_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Attribute_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Attribute
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
								class Parser;
								class QName;
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

class Attribute : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction {
	$class(Attribute, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction)
public:
	Attribute();
	void init$();
	virtual void display(int32_t indent) override;
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _name = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Attribute_h_