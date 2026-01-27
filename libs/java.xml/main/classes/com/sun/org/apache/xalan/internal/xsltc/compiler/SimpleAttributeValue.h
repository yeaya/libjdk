#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_SimpleAttributeValue_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_SimpleAttributeValue_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.SimpleAttributeValue
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.AttributeValue

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
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

class SimpleAttributeValue : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue {
	$class(SimpleAttributeValue, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue)
public:
	SimpleAttributeValue();
	void init$($String* value);
	virtual bool contextDependent() override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	$String* _value = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_SimpleAttributeValue_h_