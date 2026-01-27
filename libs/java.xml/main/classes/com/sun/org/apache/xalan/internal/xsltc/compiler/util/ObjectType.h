#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_ObjectType_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_ObjectType_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.ObjectType
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

class ObjectType : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type {
	$class(ObjectType, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type)
public:
	ObjectType();
	void init$($String* javaClassName);
	void init$($Class* clazz);
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* LOAD(int32_t slot) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* STORE(int32_t slot) override;
	virtual bool equals(Object$* obj) override;
	$Class* getJavaClass();
	$String* getJavaClassName();
	virtual int32_t hashCode() override;
	virtual bool identicalTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* other) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* toJCType() override;
	virtual $String* toSignature() override;
	virtual $String* toString() override;
	virtual void translateFrom(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, $Class* clazz) override;
	virtual void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* type) override;
	void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType* type);
	virtual void translateTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen, $Class* clazz) override;
	$String* _javaClassName = nullptr;
	$Class* _clazz = nullptr;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_ObjectType_h_