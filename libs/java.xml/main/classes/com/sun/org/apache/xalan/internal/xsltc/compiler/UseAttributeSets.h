#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_UseAttributeSets_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_UseAttributeSets_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.UseAttributeSets
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>

#pragma push_macro("ATTR_SET_NOT_FOUND")
#undef ATTR_SET_NOT_FOUND

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

class UseAttributeSets : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction {
	$class(UseAttributeSets, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction)
public:
	UseAttributeSets();
	void init$($String* setNames, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser);
	void addAttributeSets($String* setNames);
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	static $String* ATTR_SET_NOT_FOUND;
	::java::util::List* _sets = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ATTR_SET_NOT_FOUND")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_UseAttributeSets_h_