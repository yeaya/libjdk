#ifndef _com_sun_org_apache_bcel_internal_classfile_ClassFormatException_h_
#define _com_sun_org_apache_bcel_internal_classfile_ClassFormatException_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ClassFormatException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class ClassFormatException : public ::java::lang::RuntimeException {
	$class(ClassFormatException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ClassFormatException();
	void init$();
	void init$($String* s);
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xCE7804E054263F3F;
	ClassFormatException(const ClassFormatException& e);
	virtual void throw$() override;
	inline ClassFormatException* operator ->() {
		return (ClassFormatException*)throwing$;
	}
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ClassFormatException_h_