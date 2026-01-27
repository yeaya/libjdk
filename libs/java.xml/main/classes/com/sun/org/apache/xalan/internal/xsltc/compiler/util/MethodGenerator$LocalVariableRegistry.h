#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodGenerator$LocalVariableRegistry_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodGenerator$LocalVariableRegistry_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$LocalVariableRegistry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
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
								namespace util {
									class MethodGenerator;
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
		class Map;
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

class MethodGenerator$LocalVariableRegistry : public ::java::lang::Object {
	$class(MethodGenerator$LocalVariableRegistry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MethodGenerator$LocalVariableRegistry();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* this$0);
	$Array<::com::sun::org::apache::bcel::internal::generic::LocalVariableGen>* getLocals();
	virtual ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* lookUpByName($String* name);
	virtual ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* lookupRegisteredLocalVariable(int32_t slot, int32_t offset);
	virtual void registerByName(::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* lvg);
	virtual void registerLocalVariable(::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* lvg);
	virtual void removeByNameTracking(::com::sun::org::apache::bcel::internal::generic::LocalVariableGen* lvg);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* this$0 = nullptr;
	::java::util::List* _variables = nullptr;
	::java::util::Map* _nameToLVGMap = nullptr;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodGenerator$LocalVariableRegistry_h_