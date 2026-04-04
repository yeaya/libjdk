#include <com/sun/beans/decoder/JavaElementHandler.h>
#include <com/sun/beans/decoder/DocumentHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <com/sun/beans/decoder/ValueObjectImpl.h>
#include <java/beans/XMLDecoder.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ValueObjectImpl = ::com::sun::beans::decoder::ValueObjectImpl;
using $XMLDecoder = ::java::beans::XMLDecoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void JavaElementHandler::init$() {
	$ElementHandler::init$();
}

void JavaElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("version"_s)) {
	} else if (name->equals("class"_s)) {
		$set(this, type, $$nc(getOwner())->findClass(value));
	} else {
		$ElementHandler::addAttribute(name, value);
	}
}

void JavaElementHandler::addArgument(Object$* argument) {
	$$nc(getOwner())->addObject(argument);
}

bool JavaElementHandler::isArgument() {
	return false;
}

$ValueObject* JavaElementHandler::getValueObject() {
	if (this->value == nullptr) {
		$set(this, value, $ValueObjectImpl::create($(getValue())));
	}
	return this->value;
}

$Object* JavaElementHandler::getValue() {
	$useLocalObjectStack();
	$var($Object, owner, $$nc(getOwner())->getOwner());
	if ((this->type == nullptr) || isValid(owner)) {
		return owner;
	}
	if ($instanceOf($XMLDecoder, owner)) {
		$var($XMLDecoder, decoder, $cast($XMLDecoder, owner));
		$assign(owner, decoder->getOwner());
		if (isValid(owner)) {
			return owner;
		}
	}
	$throwNew($IllegalStateException, $$str({"Unexpected owner class: "_s, $($nc(owner)->getClass()->getName())}));
}

bool JavaElementHandler::isValid(Object$* owner) {
	return (owner == nullptr) || $nc(this->type)->isInstance(owner);
}

JavaElementHandler::JavaElementHandler() {
}

$Class* JavaElementHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(JavaElementHandler, type)},
		{"value", "Lcom/sun/beans/decoder/ValueObject;", nullptr, $PRIVATE, $field(JavaElementHandler, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JavaElementHandler, init$, void)},
		{"addArgument", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(JavaElementHandler, addArgument, void, Object$*)},
		{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JavaElementHandler, addAttribute, void, $String*, $String*)},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(JavaElementHandler, getValue, $Object*)},
		{"getValueObject", "()Lcom/sun/beans/decoder/ValueObject;", nullptr, $PROTECTED, $virtualMethod(JavaElementHandler, getValueObject, $ValueObject*)},
		{"isArgument", "()Z", nullptr, $PROTECTED, $virtualMethod(JavaElementHandler, isArgument, bool)},
		{"isValid", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(JavaElementHandler, isValid, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.decoder.JavaElementHandler",
		"com.sun.beans.decoder.ElementHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JavaElementHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaElementHandler);
	});
	return class$;
}

$Class* JavaElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com