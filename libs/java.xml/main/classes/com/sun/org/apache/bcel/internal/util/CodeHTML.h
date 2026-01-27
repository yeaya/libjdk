#ifndef _com_sun_org_apache_bcel_internal_util_CodeHTML_h_
#define _com_sun_org_apache_bcel_internal_util_CodeHTML_h_
//$ class com.sun.org.apache.bcel.internal.util.CodeHTML
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Code;
							class ConstantPool;
							class Method;
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
				namespace bcel {
					namespace internal {
						namespace util {
							class ByteSequence;
							class ConstantHTML;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintWriter;
	}
}
namespace java {
	namespace util {
		class BitSet;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class CodeHTML : public ::java::lang::Object {
	$class(CodeHTML, 0, ::java::lang::Object)
public:
	CodeHTML();
	void init$($String* dir, $String* class_name, $Array<::com::sun::org::apache::bcel::internal::classfile::Method>* methods, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool, ::com::sun::org::apache::bcel::internal::util::ConstantHTML* constant_html);
	$String* codeToHTML(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, int32_t method_number);
	void findGotos(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, ::com::sun::org::apache::bcel::internal::classfile::Code* code);
	void writeMethod(::com::sun::org::apache::bcel::internal::classfile::Method* method, int32_t method_number);
	$String* className = nullptr;
	::java::io::PrintWriter* file = nullptr;
	::java::util::BitSet* gotoSet = nullptr;
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool = nullptr;
	::com::sun::org::apache::bcel::internal::util::ConstantHTML* constantHtml = nullptr;
	static bool wide;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_util_CodeHTML_h_