#include <java/beans/PropertyVetoException.h>
#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void PropertyVetoException::init$($String* mess, $PropertyChangeEvent* evt) {
	$Exception::init$(mess);
	$set(this, evt, evt);
}

$PropertyChangeEvent* PropertyVetoException::getPropertyChangeEvent() {
	return this->evt;
}

PropertyVetoException::PropertyVetoException() {
}

PropertyVetoException::PropertyVetoException(const PropertyVetoException& e) : $Exception(e) {
}

void PropertyVetoException::throw$() {
	throw *this;
}

$Class* PropertyVetoException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PropertyVetoException, serialVersionUID)},
		{"evt", "Ljava/beans/PropertyChangeEvent;", nullptr, $PRIVATE, $field(PropertyVetoException, evt)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $method(PropertyVetoException, init$, void, $String*, $PropertyChangeEvent*)},
		{"getPropertyChangeEvent", "()Ljava/beans/PropertyChangeEvent;", nullptr, $PUBLIC, $virtualMethod(PropertyVetoException, getPropertyChangeEvent, $PropertyChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.PropertyVetoException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PropertyVetoException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PropertyVetoException);
	});
	return class$;
}

$Class* PropertyVetoException::class$ = nullptr;

	} // beans
} // java