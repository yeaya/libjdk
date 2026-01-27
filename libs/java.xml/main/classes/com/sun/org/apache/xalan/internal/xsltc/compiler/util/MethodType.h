#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodType_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodType_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodType
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Type;
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
								namespace util {

class MethodType : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type {
	$class(MethodType, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type)
public:
	MethodType();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* resultType);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* resultType, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* arg1);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* resultType, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* arg1, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* arg2);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* resultType, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* arg1, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* arg2, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* arg3);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* resultType, ::java::util::List* argsType);
	int32_t argsCount();
	::java::util::List* argsType();
	virtual int32_t distanceTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* other) override;
	virtual bool identicalTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* other) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* resultType();
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* toJCType() override;
	virtual $String* toSignature() override;
	$String* toSignature($String* lastArgSig);
	virtual $String* toString() override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* _resultType = nullptr;
	::java::util::List* _argsType = nullptr;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodType_h_