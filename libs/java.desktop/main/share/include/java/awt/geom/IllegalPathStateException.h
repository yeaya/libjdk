#ifndef _java_awt_geom_IllegalPathStateException_h_
#define _java_awt_geom_IllegalPathStateException_h_
//$ class java.awt.geom.IllegalPathStateException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace awt {
		namespace geom {

class $import IllegalPathStateException : public ::java::lang::RuntimeException {
	$class(IllegalPathStateException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	IllegalPathStateException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xb86acdbe7a47b7ba;
	IllegalPathStateException(const IllegalPathStateException& e);
	virtual void throw$() override;
	inline IllegalPathStateException* operator ->() const {
		return (IllegalPathStateException*)throwing$;
	}
	inline operator IllegalPathStateException*() const {
		return (IllegalPathStateException*)throwing$;
	}
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_IllegalPathStateException_h_