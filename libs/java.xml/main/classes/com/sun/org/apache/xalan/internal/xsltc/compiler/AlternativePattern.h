#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_AlternativePattern_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_AlternativePattern_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.AlternativePattern
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Pattern

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>

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

class AlternativePattern : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern {
	$class(AlternativePattern, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern)
public:
	AlternativePattern();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* left, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* right);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* getLeft();
	virtual double getPriority() override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* getRight();
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* _left = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* _right = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_AlternativePattern_h_