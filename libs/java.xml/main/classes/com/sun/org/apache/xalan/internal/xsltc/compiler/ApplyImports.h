#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_ApplyImports_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_ApplyImports_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.ApplyImports
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

class ApplyImports : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction {
	$class(ApplyImports, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction)
public:
	ApplyImports();
	void init$();
	virtual void display(int32_t indent) override;
	int32_t getMinPrecedence(int32_t max);
	bool hasWithParams();
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _modeName = nullptr;
	int32_t _precedence = 0;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_ApplyImports_h_