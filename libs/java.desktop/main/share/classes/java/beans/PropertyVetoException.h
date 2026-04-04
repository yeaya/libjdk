#ifndef _java_beans_PropertyVetoException_h_
#define _java_beans_PropertyVetoException_h_
//$ class java.beans.PropertyVetoException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace java {
	namespace beans {

class $export PropertyVetoException : public ::java::lang::Exception {
	$class(PropertyVetoException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	PropertyVetoException();
	void init$($String* mess, ::java::beans::PropertyChangeEvent* evt);
	virtual ::java::beans::PropertyChangeEvent* getPropertyChangeEvent();
	static const int64_t serialVersionUID = (int64_t)0x01cc6aed8726ccf4;
	::java::beans::PropertyChangeEvent* evt = nullptr;
	PropertyVetoException(const PropertyVetoException& e);
	virtual void throw$() override;
	inline PropertyVetoException* operator ->() const {
		return (PropertyVetoException*)throwing$;
	}
	inline operator PropertyVetoException*() const {
		return (PropertyVetoException*)throwing$;
	}
};

	} // beans
} // java

#endif // _java_beans_PropertyVetoException_h_