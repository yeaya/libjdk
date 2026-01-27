#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_StringType_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_StringType_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.StringType
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
									class RealType;
									class ReferenceType;
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

class StringType : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type {
	$class(StringType, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type)
public:
	StringType();
	void init$();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* LOAD(int32_t slot) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* STORE(int32_t slot) override;
	virtual $String* getClassName() override;
	virtual bool identicalTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* other) override;
	virtual bool isSimple() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* toJCType() override;
	virtual $String* toSignature() override;
	virtual $String* toString() override;
	virtual void translateBox(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual void translateFrom(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, $Class* clazz) override;
	virtual void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* type) override;
	virtual void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType* type);
	virtual void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType* type);
	virtual void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType* type);
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_StringType_h_