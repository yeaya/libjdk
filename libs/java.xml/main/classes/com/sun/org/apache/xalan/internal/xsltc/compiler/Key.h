#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Key_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Key_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Key
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>

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
								class Pattern;
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

class Key : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement {
	$class(Key, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement)
public:
	Key();
	void init$();
	$String* getName();
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	void traverseNodeSet(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, int32_t buildKeyIndex);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _name = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern* _match = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _use = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* _useType = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Key_h_