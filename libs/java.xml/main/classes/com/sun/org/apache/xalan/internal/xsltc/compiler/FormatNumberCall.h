#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_FormatNumberCall_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_FormatNumberCall_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.FormatNumberCall
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Expression;
								class QName;
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

class FormatNumberCall : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall {
	$class(FormatNumberCall, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall)
public:
	FormatNumberCall();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* fname, ::java::util::List* arguments);
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _value = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _format = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _name = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _resolvedQName = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_FormatNumberCall_h_