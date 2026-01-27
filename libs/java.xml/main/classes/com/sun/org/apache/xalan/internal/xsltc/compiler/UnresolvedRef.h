#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_UnresolvedRef_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_UnresolvedRef_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.UnresolvedRef
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.VariableRefBase

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase.h>

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
									class ErrorMsg;
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

class UnresolvedRef : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase {
	$class(UnresolvedRef, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase)
public:
	UnresolvedRef();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getName();
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase::reportError;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg* reportError();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase* resolve(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable);
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _variableName = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase* _ref = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_UnresolvedRef_h_