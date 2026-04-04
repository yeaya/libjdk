#include <com/sun/beans/decoder/StringElementHandler.h>
#include <com/sun/beans/decoder/DocumentHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <com/sun/beans/decoder/ValueObjectImpl.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

#undef NULL

using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ValueObjectImpl = ::com::sun::beans::decoder::ValueObjectImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void StringElementHandler::init$() {
	$ElementHandler::init$();
	$set(this, sb, $new($StringBuilder));
	$init($ValueObjectImpl);
	$set(this, value, $ValueObjectImpl::NULL);
}

void StringElementHandler::addCharacter(char16_t ch) {
	if (this->sb == nullptr) {
		$throwNew($IllegalStateException, "Could not add chararcter to evaluated string element"_s);
	}
	$nc(this->sb)->append(ch);
}

void StringElementHandler::addArgument(Object$* argument) {
	if (this->sb == nullptr) {
		$throwNew($IllegalStateException, "Could not add argument to evaluated string element"_s);
	}
	$nc(this->sb)->append(argument);
}

$ValueObject* StringElementHandler::getValueObject() {
	$useLocalObjectStack();
	if (this->sb != nullptr) {
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$set(this, value, $ValueObjectImpl::create($(getValue($(this->sb->toString())))));
			} catch ($RuntimeException& exception) {
				$$nc(getOwner())->handleException(exception);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, sb, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this->value;
}

$Object* StringElementHandler::getValue($String* argument) {
	return $of(argument);
}

StringElementHandler::StringElementHandler() {
}

$Class* StringElementHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sb", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE, $field(StringElementHandler, sb)},
		{"value", "Lcom/sun/beans/decoder/ValueObject;", nullptr, $PRIVATE, $field(StringElementHandler, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StringElementHandler, init$, void)},
		{"addArgument", "(Ljava/lang/Object;)V", nullptr, $PROTECTED | $FINAL, $virtualMethod(StringElementHandler, addArgument, void, Object$*)},
		{"addCharacter", "(C)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(StringElementHandler, addCharacter, void, char16_t)},
		{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(StringElementHandler, getValue, $Object*, $String*)},
		{"getValueObject", "()Lcom/sun/beans/decoder/ValueObject;", nullptr, $PROTECTED | $FINAL, $virtualMethod(StringElementHandler, getValueObject, $ValueObject*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.beans.decoder.StringElementHandler",
		"com.sun.beans.decoder.ElementHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StringElementHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringElementHandler);
	});
	return class$;
}

$Class* StringElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com