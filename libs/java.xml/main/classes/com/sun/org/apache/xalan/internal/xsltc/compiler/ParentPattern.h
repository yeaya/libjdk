#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_ParentPattern_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_ParentPattern_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.ParentPattern
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.RelativePathPattern

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Parser;
								class Pattern;
								class StepPattern;
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

class ParentPattern : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern {
	$class(ParentPattern, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern)
public:
	ParentPattern();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* left, ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern* right);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern* getKernelPattern() override;
	virtual bool isWildcard() override;
	virtual void reduceKernelPattern() override;
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* _left = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern* _right = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_ParentPattern_h_