#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_LocationPathPattern_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_LocationPathPattern_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.LocationPathPattern
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
								class StepPattern;
								class SymbolTable;
								class Template;
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

class LocationPathPattern : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern {
	$class(LocationPathPattern, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern)
public:
	LocationPathPattern();
	void init$();
	virtual int32_t getAxis();
	virtual double getDefaultPriority();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern* getKernelPattern() {return nullptr;}
	virtual double getPriority() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* getTemplate() override;
	virtual bool isWildcard() {return false;}
	virtual bool noSmallerThan(::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern* other);
	virtual void reduceKernelPattern() {}
	virtual void setTemplate(::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* template$);
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* _template = nullptr;
	int32_t _importPrecedence = 0;
	double _priority = 0.0;
	int32_t _position = 0;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_LocationPathPattern_h_