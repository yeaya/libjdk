#include <com/sun/beans/decoder/AccessorElementHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <com/sun/beans/decoder/ValueObjectImpl.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

#undef VOID

using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ValueObjectImpl = ::com::sun::beans::decoder::ValueObjectImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void AccessorElementHandler::init$() {
	$ElementHandler::init$();
}

void AccessorElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("name"_s)) {
		$set(this, name, value);
	} else {
		$ElementHandler::addAttribute(name, value);
	}
}

void AccessorElementHandler::addArgument(Object$* argument) {
	if (this->value != nullptr) {
		$throwNew($IllegalStateException, "Could not add argument to evaluated element"_s);
	}
	setValue(this->name, argument);
	$init($ValueObjectImpl);
	$set(this, value, $ValueObjectImpl::VOID);
}

$ValueObject* AccessorElementHandler::getValueObject() {
	if (this->value == nullptr) {
		$set(this, value, $ValueObjectImpl::create($(getValue(this->name))));
	}
	return this->value;
}

AccessorElementHandler::AccessorElementHandler() {
}

$Class* AccessorElementHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AccessorElementHandler, name)},
		{"value", "Lcom/sun/beans/decoder/ValueObject;", nullptr, $PRIVATE, $field(AccessorElementHandler, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AccessorElementHandler, init$, void)},
		{"addArgument", "(Ljava/lang/Object;)V", nullptr, $PROTECTED | $FINAL, $virtualMethod(AccessorElementHandler, addArgument, void, Object$*)},
		{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AccessorElementHandler, addAttribute, void, $String*, $String*)},
		{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AccessorElementHandler, getValue, $Object*, $String*)},
		{"getValueObject", "()Lcom/sun/beans/decoder/ValueObject;", nullptr, $PROTECTED | $FINAL, $virtualMethod(AccessorElementHandler, getValueObject, $ValueObject*)},
		{"setValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AccessorElementHandler, setValue, void, $String*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.beans.decoder.AccessorElementHandler",
		"com.sun.beans.decoder.ElementHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccessorElementHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessorElementHandler);
	});
	return class$;
}

$Class* AccessorElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com