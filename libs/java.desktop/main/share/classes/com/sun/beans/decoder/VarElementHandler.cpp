#include <com/sun/beans/decoder/VarElementHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <com/sun/beans/decoder/ValueObjectImpl.h>
#include <jcpp.h>

using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ValueObjectImpl = ::com::sun::beans::decoder::ValueObjectImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void VarElementHandler::init$() {
	$ElementHandler::init$();
}

void VarElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("idref"_s)) {
		$set(this, value, $ValueObjectImpl::create($(getVariable(value))));
	} else {
		$ElementHandler::addAttribute(name, value);
	}
}

$ValueObject* VarElementHandler::getValueObject() {
	if (this->value == nullptr) {
		$throwNew($IllegalArgumentException, "Variable name is not set"_s);
	}
	return this->value;
}

VarElementHandler::VarElementHandler() {
}

$Class* VarElementHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "Lcom/sun/beans/decoder/ValueObject;", nullptr, $PRIVATE, $field(VarElementHandler, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarElementHandler, init$, void)},
		{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(VarElementHandler, addAttribute, void, $String*, $String*)},
		{"getValueObject", "()Lcom/sun/beans/decoder/ValueObject;", nullptr, $PROTECTED, $virtualMethod(VarElementHandler, getValueObject, $ValueObject*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.decoder.VarElementHandler",
		"com.sun.beans.decoder.ElementHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VarElementHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarElementHandler);
	});
	return class$;
}

$Class* VarElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com