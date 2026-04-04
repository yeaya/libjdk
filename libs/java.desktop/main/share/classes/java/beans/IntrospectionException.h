#ifndef _java_beans_IntrospectionException_h_
#define _java_beans_IntrospectionException_h_
//$ class java.beans.IntrospectionException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace beans {

class $export IntrospectionException : public ::java::lang::Exception {
	$class(IntrospectionException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	IntrospectionException();
	void init$($String* mess);
	static const int64_t serialVersionUID = (int64_t)0xcc42f2d623ef4625;
	IntrospectionException(const IntrospectionException& e);
	virtual void throw$() override;
	inline IntrospectionException* operator ->() const {
		return (IntrospectionException*)throwing$;
	}
	inline operator IntrospectionException*() const {
		return (IntrospectionException*)throwing$;
	}
};

	} // beans
} // java

#endif // _java_beans_IntrospectionException_h_