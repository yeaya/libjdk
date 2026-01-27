#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_DecimalFormatting_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_DecimalFormatting_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.DecimalFormatting
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>

#pragma push_macro("DFS_CLASS")
#undef DFS_CLASS
#pragma push_macro("DFS_SIG")
#undef DFS_SIG

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

class DecimalFormatting : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement {
	$class(DecimalFormatting, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement)
public:
	DecimalFormatting();
	void init$();
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	static void translateDefaultDFS(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	static $String* DFS_CLASS;
	static $String* DFS_SIG;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _name = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DFS_CLASS")
#pragma pop_macro("DFS_SIG")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_DecimalFormatting_h_