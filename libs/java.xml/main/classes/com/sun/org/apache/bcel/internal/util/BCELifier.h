#ifndef _com_sun_org_apache_bcel_internal_util_BCELifier_h_
#define _com_sun_org_apache_bcel_internal_util_BCELifier_h_
//$ class com.sun.org.apache.bcel.internal.util.BCELifier
//$ extends com.sun.org.apache.bcel.internal.classfile.EmptyVisitor

#include <com/sun/org/apache/bcel/internal/classfile/EmptyVisitor.h>
#include <java/lang/Array.h>

#pragma push_macro("BASE_PACKAGE")
#undef BASE_PACKAGE
#pragma push_macro("CONSTANT_PREFIX")
#undef CONSTANT_PREFIX

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Field;
							class JavaClass;
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
						namespace generic {
							class ConstantPoolGen;
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
				namespace bcel {
					namespace internal {
						namespace util {
							class BCELifier$FLAGS;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
		class PrintWriter;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class $export BCELifier : public ::com::sun::org::apache::bcel::internal::classfile::EmptyVisitor {
	$class(BCELifier, 0, ::com::sun::org::apache::bcel::internal::classfile::EmptyVisitor)
public:
	BCELifier();
	void init$(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz, ::java::io::OutputStream* out);
	static ::com::sun::org::apache::bcel::internal::classfile::JavaClass* getJavaClass($String* name);
	static void main($StringArray* argv);
	static $String* printArgumentTypes($Array<::com::sun::org::apache::bcel::internal::generic::Type>* arg_types);
	void printCreate();
	static $String* printFlags(int32_t flags);
	static $String* printFlags(int32_t flags, ::com::sun::org::apache::bcel::internal::util::BCELifier$FLAGS* location);
	void printMain();
	static $String* printType(::com::sun::org::apache::bcel::internal::generic::Type* type);
	static $String* printType($String* signature);
	virtual void start();
	virtual void visitField(::com::sun::org::apache::bcel::internal::classfile::Field* field) override;
	virtual void visitJavaClass(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz) override;
	virtual void visitMethod(::com::sun::org::apache::bcel::internal::classfile::Method* method) override;
	static $String* BASE_PACKAGE;
	static $String* CONSTANT_PREFIX;
	::com::sun::org::apache::bcel::internal::classfile::JavaClass* _clazz = nullptr;
	::java::io::PrintWriter* _out = nullptr;
	::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* _cp = nullptr;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BASE_PACKAGE")
#pragma pop_macro("CONSTANT_PREFIX")

#endif // _com_sun_org_apache_bcel_internal_util_BCELifier_h_