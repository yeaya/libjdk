#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_AbsolutePathPattern_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_AbsolutePathPattern_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.AbsolutePathPattern
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.LocationPathPattern

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Parser;
								class RelativePathPattern;
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

class AbsolutePathPattern : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern {
	$class(AbsolutePathPattern, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern)
public:
	AbsolutePathPattern();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern* left);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern* getKernelPattern() override;
	virtual bool isWildcard() override;
	virtual void reduceKernelPattern() override;
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern* _left = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_AbsolutePathPattern_h_