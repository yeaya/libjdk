#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_TypeCheckError_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_TypeCheckError_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
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
									class ErrorMsg;
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
								namespace util {

class TypeCheckError : public ::java::lang::Exception {
	$class(TypeCheckError, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	TypeCheckError();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* node);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg* error);
	void init$($String* code, Object$* param);
	void init$($String* code, Object$* param1, Object$* param2);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg* getErrorMsg();
	virtual $String* getMessage() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x2D0CE7BDD3F033B0;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg* _error = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* _node = nullptr;
	TypeCheckError(const TypeCheckError& e);
	virtual void throw$() override;
	inline TypeCheckError* operator ->() {
		return (TypeCheckError*)throwing$;
	}
};

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_TypeCheckError_h_