#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_ApplyTemplates_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_ApplyTemplates_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.ApplyTemplates
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Expression;
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

class ApplyTemplates : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction {
	$class(ApplyTemplates, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction)
public:
	ApplyTemplates();
	void init$();
	virtual void display(int32_t indent) override;
	bool hasWithParams();
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _select = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* _type = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _modeName = nullptr;
	$String* _functionName = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_ApplyTemplates_h_