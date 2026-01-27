#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_FunctionAvailableCall_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_FunctionAvailableCall_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionAvailableCall
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

class FunctionAvailableCall : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall {
	$class(FunctionAvailableCall, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall)
public:
	FunctionAvailableCall();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* fname, ::java::util::List* arguments);
	virtual $Object* evaluateAtCompileTime() override;
	bool getResult();
	bool hasMethods();
	bool isInternalNamespace();
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _arg = nullptr;
	$String* _nameOfFunct = nullptr;
	$String* _namespaceOfFunct = nullptr;
	bool _isFunctionAvailable = false;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_FunctionAvailableCall_h_