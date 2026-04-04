#ifndef _javax_management_RuntimeMBeanException_h_
#define _javax_management_RuntimeMBeanException_h_
//$ class javax.management.RuntimeMBeanException
//$ extends javax.management.JMRuntimeException

#include <javax/management/JMRuntimeException.h>

namespace java {
	namespace lang {
		class RuntimeException;
		class Throwable;
	}
}

namespace javax {
	namespace management {

class $export RuntimeMBeanException : public ::javax::management::JMRuntimeException {
	$class(RuntimeMBeanException, $NO_CLASS_INIT, ::javax::management::JMRuntimeException)
public:
	RuntimeMBeanException();
	void init$(::java::lang::RuntimeException* e);
	void init$(::java::lang::RuntimeException* e, $String* message);
	virtual $Throwable* getCause() override;
	virtual ::java::lang::RuntimeException* getTargetException();
	static const int64_t serialVersionUID = (int64_t)0x49344133431bdbbb;
	::java::lang::RuntimeException* runtimeException = nullptr;
	RuntimeMBeanException(const RuntimeMBeanException& e);
	virtual void throw$() override;
	inline RuntimeMBeanException* operator ->() const {
		return (RuntimeMBeanException*)throwing$;
	}
	inline operator RuntimeMBeanException*() const {
		return (RuntimeMBeanException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_RuntimeMBeanException_h_