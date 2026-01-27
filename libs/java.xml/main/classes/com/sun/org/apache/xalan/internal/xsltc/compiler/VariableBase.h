#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_VariableBase_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_VariableBase_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.VariableBase
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Instruction;
							class LocalVariableGen;
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
								class Expression;
								class Parser;
								class QName;
								class VariableRefBase;
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

class VariableBase : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement {
	$class(VariableBase, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement)
public:
	VariableBase();
	void init$();
	virtual void addReference(::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase* vref);
	virtual void copyReferences(::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase* var);
	virtual void disable();
	virtual void display(int32_t indent) override;
	virtual $String* getEscapedName();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* getExpression();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* getName();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* getType();
	virtual bool isLocal();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* loadInstruction();
	virtual void mapRegister(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual void setName(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name);
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* storeInstruction();
	virtual $String* toString() override;
	virtual void translateValue(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual void unmapRegister(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _name = nullptr;
	$String* _escapedName = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* _type = nullptr;
	bool _isLocal = false;
	::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* _local = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _loadInstruction = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* _storeInstruction = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _select = nullptr;
	$String* select = nullptr;
	::java::util::List* _refs = nullptr;
	bool _ignore = false;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_VariableBase_h_