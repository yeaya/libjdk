#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_CallTemplate_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_CallTemplate_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.CallTemplate
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <java/lang/Array.h>

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
								class SyntaxTreeNode;
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

class CallTemplate : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction {
	$class(CallTemplate, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction)
public:
	CallTemplate();
	void init$();
	void buildParameterList();
	virtual void display(int32_t indent) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* getCalleeTemplate();
	bool hasWithParams();
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _name = nullptr;
	$Array<::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode>* _parameters = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Template* _calleeTemplate = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_CallTemplate_h_