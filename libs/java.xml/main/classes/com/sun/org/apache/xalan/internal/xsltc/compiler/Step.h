#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Step_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Step_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Step
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.RelativeLocationPath

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativeLocationPath.h>

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

class Step : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath {
	$class(Step, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath)
public:
	Step();
	void init$(int32_t axis, int32_t nodeType, ::java::util::List* predicates);
	void addPredicates(::java::util::List* predicates);
	virtual int32_t getAxis() override;
	int32_t getNodeType();
	::java::util::List* getPredicates();
	bool hasParentLocationPath();
	bool hasParentPattern();
	bool hasPredicates();
	bool isAbbreviatedDDot();
	bool isAbbreviatedDot();
	bool isPredicate();
	virtual void setAxis(int32_t axis) override;
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	void translatePredicates(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, int32_t predicateIndex);
	void translateStep(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, int32_t predicateIndex);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	int32_t _axis = 0;
	::java::util::List* _predicates = nullptr;
	bool _hadPredicates = false;
	int32_t _nodeType = 0;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Step_h_