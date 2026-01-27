#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_NodeSetType_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_NodeSetType_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.NodeSetType
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>

#pragma push_macro("LOAD")
#undef LOAD
#pragma push_macro("STORE")
#undef STORE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Instruction;
							class Type;
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
								class FlowList;
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
									class BooleanType;
									class ClassGenerator;
									class MethodGenerator;
									class NodeType;
									class ObjectType;
									class RealType;
									class ReferenceType;
									class StringType;
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
								namespace util {

class NodeSetType : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type {
	$class(NodeSetType, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type)
public:
	NodeSetType();
	void init$();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* LOAD(int32_t slot) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* STORE(int32_t slot) override;
	virtual $String* getClassName() override;
	void getFirstNode(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual bool identicalTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* other) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* toJCType() override;
	virtual $String* toSignature() override;
	virtual $String* toString() override;
	virtual void translateBox(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual void translateFrom(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, $Class* clazz) override;
	virtual void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* type) override;
	void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType* type);
	void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType* type);
	void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType* type);
	void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeType* type);
	void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ObjectType* type);
	void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType* type);
	virtual void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, $Class* clazz) override;
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type::translateToDesynthesized;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* translateToDesynthesized(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType* type) override;
	virtual void translateUnBox(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
};

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOAD")
#pragma pop_macro("STORE")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_NodeSetType_h_