#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodGenerator$1_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodGenerator$1_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$1
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.util.ClassGenerator

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Stylesheet;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

class MethodGenerator$1 : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator {
	$class(MethodGenerator$1, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator)
public:
	MethodGenerator$1();
	using ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator::addMethod;
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* this$0, $String* class_name, $String* super_class_name, $String* file_name, int32_t access_flags, $StringArray* interfaces, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* stylesheet);
	virtual bool isExternal() override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* this$0 = nullptr;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_MethodGenerator$1_h_