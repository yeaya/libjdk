#include <sun/awt/im/InputMethodLocator.h>
#include <java/awt/AWTException.h>
#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/lang/ClassLoader.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $AWTException = ::java::awt::AWTException;
using $InputMethodDescriptor = ::java::awt::im::spi::InputMethodDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Locale = ::java::util::Locale;

namespace sun {
	namespace awt {
		namespace im {

void InputMethodLocator::init$($InputMethodDescriptor* descriptor, $ClassLoader* loader, $Locale* locale) {
	if (descriptor == nullptr) {
		$throwNew($NullPointerException, "descriptor can\'t be null"_s);
	}
	$set(this, descriptor, descriptor);
	$set(this, loader, loader);
	$set(this, locale, locale);
}

bool InputMethodLocator::equals(Object$* other) {
	if ($equals(other, this)) {
		return true;
	}
	bool var$0 = other == nullptr;
	if (!var$0) {
		var$0 = this->getClass() != $of(other)->getClass();
	}
	if (var$0) {
		return false;
	}
	$var(InputMethodLocator, otherLocator, $cast(InputMethodLocator, other));
	if (!$nc(this->descriptor)->getClass()->equals($nc($nc(otherLocator)->descriptor)->getClass())) {
		return false;
	}
	if (this->loader == nullptr && otherLocator->loader != nullptr || this->loader != nullptr && !this->loader->equals(otherLocator->loader)) {
		return false;
	}
	if (this->locale == nullptr && otherLocator->locale != nullptr || this->locale != nullptr && !this->locale->equals(otherLocator->locale)) {
		return false;
	}
	return true;
}

int32_t InputMethodLocator::hashCode() {
	int32_t result = $nc(this->descriptor)->hashCode();
	if (this->loader != nullptr) {
		result |= this->loader->hashCode() << 10;
	}
	if (this->locale != nullptr) {
		result |= this->locale->hashCode() << 20;
	}
	return result;
}

$InputMethodDescriptor* InputMethodLocator::getDescriptor() {
	return this->descriptor;
}

$ClassLoader* InputMethodLocator::getClassLoader() {
	return this->loader;
}

$Locale* InputMethodLocator::getLocale() {
	return this->locale;
}

bool InputMethodLocator::isLocaleAvailable($Locale* locale) {
	try {
		$var($LocaleArray, locales, $nc(this->descriptor)->getAvailableLocales());
		for (int32_t i = 0; i < $nc(locales)->length; ++i) {
			if ($nc(locales->get(i))->equals(locale)) {
				return true;
			}
		}
	} catch ($AWTException& e) {
	}
	return false;
}

InputMethodLocator* InputMethodLocator::deriveLocator($Locale* forLocale) {
	if (forLocale == this->locale) {
		return this;
	} else {
		return $new(InputMethodLocator, this->descriptor, this->loader, forLocale);
	}
}

bool InputMethodLocator::sameInputMethod(InputMethodLocator* other) {
	if (other == this) {
		return true;
	}
	if (other == nullptr) {
		return false;
	}
	if (!$nc(this->descriptor)->getClass()->equals($nc($nc(other)->descriptor)->getClass())) {
		return false;
	}
	if (this->loader == nullptr && other->loader != nullptr || this->loader != nullptr && !this->loader->equals(other->loader)) {
		return false;
	}
	return true;
}

$String* InputMethodLocator::getActionCommandString() {
	$useLocalObjectStack();
	$var($String, inputMethodString, $nc(this->descriptor)->getClass()->getName());
	if (this->locale == nullptr) {
		return inputMethodString;
	} else {
		return $str({inputMethodString, "\n"_s, $(this->locale->toString())});
	}
}

InputMethodLocator::InputMethodLocator() {
}

$Class* InputMethodLocator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"descriptor", "Ljava/awt/im/spi/InputMethodDescriptor;", nullptr, $PRIVATE, $field(InputMethodLocator, descriptor)},
		{"loader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(InputMethodLocator, loader)},
		{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(InputMethodLocator, locale)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/im/spi/InputMethodDescriptor;Ljava/lang/ClassLoader;Ljava/util/Locale;)V", nullptr, 0, $method(InputMethodLocator, init$, void, $InputMethodDescriptor*, $ClassLoader*, $Locale*)},
		{"deriveLocator", "(Ljava/util/Locale;)Lsun/awt/im/InputMethodLocator;", nullptr, 0, $method(InputMethodLocator, deriveLocator, InputMethodLocator*, $Locale*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(InputMethodLocator, equals, bool, Object$*)},
		{"getActionCommandString", "()Ljava/lang/String;", nullptr, 0, $method(InputMethodLocator, getActionCommandString, $String*)},
		{"getClassLoader", "()Ljava/lang/ClassLoader;", nullptr, 0, $method(InputMethodLocator, getClassLoader, $ClassLoader*)},
		{"getDescriptor", "()Ljava/awt/im/spi/InputMethodDescriptor;", nullptr, 0, $method(InputMethodLocator, getDescriptor, $InputMethodDescriptor*)},
		{"getLocale", "()Ljava/util/Locale;", nullptr, 0, $method(InputMethodLocator, getLocale, $Locale*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(InputMethodLocator, hashCode, int32_t)},
		{"isLocaleAvailable", "(Ljava/util/Locale;)Z", nullptr, 0, $method(InputMethodLocator, isLocaleAvailable, bool, $Locale*)},
		{"sameInputMethod", "(Lsun/awt/im/InputMethodLocator;)Z", nullptr, 0, $method(InputMethodLocator, sameInputMethod, bool, InputMethodLocator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.im.InputMethodLocator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InputMethodLocator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InputMethodLocator);
	});
	return class$;
}

$Class* InputMethodLocator::class$ = nullptr;

		} // im
	} // awt
} // sun