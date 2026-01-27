#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_VoidType_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_VoidType_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.VoidType
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>

#pragma push_macro("POP")
#undef POP

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
								namespace util {
									class ClassGenerator;
									class MethodGenerator;
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

class VoidType : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type {
	$class(VoidType, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type)
public:
	VoidType();
	void init$();
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* POP() override;
	virtual bool identicalTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* other) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* toJCType() override;
	virtual $String* toSignature() override;
	virtual $String* toString() override;
	virtual void translateFrom(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, $Class* clazz) override;
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type::translateTo;
	virtual void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* type) override;
	void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType* type);
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

#pragma pop_macro("POP")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_VoidType_h_