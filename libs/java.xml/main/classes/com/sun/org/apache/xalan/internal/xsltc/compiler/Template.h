#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Template_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Template_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Template
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionList;
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
								class Param;
								class Parser;
								class Pattern;
								class QName;
								class Stylesheet;
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

class Template : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement {
	$class(Template, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement)
public:
	Template();
	void init$();
	virtual void addDependency(::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement* other) override;
	void addParameter(::com::sun::org::apache::xalan::internal::xsltc::compiler::Param* param);
	int32_t compareTo(Object$* template$);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionList* compile(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	void disable();
	bool disabled();
	virtual void display(int32_t indent) override;
	virtual ::java::util::List* getDependencies() override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getModeName();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getName();
	::java::util::List* getParameters();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* getPattern();
	int32_t getPosition();
	double getPriority();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* getStylesheet() override;
	bool hasParams();
	bool isNamed();
	bool isSimpleNamedTemplate();
	bool isSimplified();
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	void parseSimplified(::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* stylesheet, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser);
	bool resolveNamedTemplates(::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* other, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser);
	void setName(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* qname);
	void setSimplified();
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _name = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _mode = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* _pattern = nullptr;
	double _priority = 0.0;
	int32_t _position = 0;
	bool _disabled = false;
	bool _compiled = false;
	bool _simplified = false;
	bool _isSimpleNamedTemplate = false;
	::java::util::List* _parameters = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* _stylesheet = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Template_h_