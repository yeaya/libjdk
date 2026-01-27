#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_UnsupportedElement_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_UnsupportedElement_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.UnsupportedElement
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.SyntaxTreeNode

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>

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

class UnsupportedElement : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode {
	$class(UnsupportedElement, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode)
public:
	UnsupportedElement();
	void init$($String* uri, $String* prefix, $String* local, bool isExtension);
	virtual void display(int32_t indent) override;
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	void processFallbacks(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser);
	void setErrorMessage(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg* message);
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::java::util::List* _fallbacks = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg* _message = nullptr;
	bool _isExtension = false;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_UnsupportedElement_h_