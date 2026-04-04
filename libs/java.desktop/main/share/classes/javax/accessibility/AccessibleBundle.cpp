#include <javax/accessibility/AccessibleBundle.h>
#include <java/lang/ClassCastException.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <javax/accessibility/AccessibleBundle$1.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $AccessibleBundle$1 = ::javax::accessibility::AccessibleBundle$1;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace javax {
	namespace accessibility {

void AccessibleBundle::init$() {
	$set(this, defaultResourceBundleName, "com.sun.accessibility.internal.resources.accessibility"_s);
	$set(this, key, nullptr);
}

$String* AccessibleBundle::toDisplayString($String* name, $Locale* locale) {
	$beforeCallerSensitive();
	try {
		return $$nc($ResourceBundle::getBundle(name, locale))->getString(this->key);
	} catch ($ClassCastException& ignored) {
		return this->key;
	} catch ($MissingResourceException& ignored) {
		return this->key;
	}
	$shouldNotReachHere();
}

$String* AccessibleBundle::toDisplayString($Locale* locale) {
	return toDisplayString(this->defaultResourceBundleName, locale);
}

$String* AccessibleBundle::toDisplayString() {
	return toDisplayString($($Locale::getDefault()));
}

$String* AccessibleBundle::toString() {
	return toDisplayString();
}

void AccessibleBundle::clinit$($Class* clazz) {
	{
		$AWTAccessor::setAccessibleBundleAccessor($$new($AccessibleBundle$1));
	}
}

AccessibleBundle::AccessibleBundle() {
}

$Class* AccessibleBundle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultResourceBundleName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AccessibleBundle, defaultResourceBundleName)},
		{"key", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AccessibleBundle, key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AccessibleBundle, init$, void)},
		{"toDisplayString", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(AccessibleBundle, toDisplayString, $String*, $String*, $Locale*)},
		{"toDisplayString", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AccessibleBundle, toDisplayString, $String*, $Locale*)},
		{"toDisplayString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AccessibleBundle, toDisplayString, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AccessibleBundle, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.accessibility.AccessibleBundle$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.accessibility.AccessibleBundle",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.accessibility.AccessibleBundle$1"
	};
	$loadClass(AccessibleBundle, name, initialize, &classInfo$$, AccessibleBundle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleBundle);
	});
	return class$;
}

$Class* AccessibleBundle::class$ = nullptr;

	} // accessibility
} // javax