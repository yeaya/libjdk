#include <sun/awt/X11InputMethodDescriptor.h>

#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/util/Locale.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

$FieldInfo _X11InputMethodDescriptor_FieldInfo_[] = {
	{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $staticField(X11InputMethodDescriptor, locale)},
	{}
};

$MethodInfo _X11InputMethodDescriptor_MethodInfo_[] = {
	{"createInputMethod", "()Ljava/awt/im/spi/InputMethod;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(X11InputMethodDescriptor, init$, void)},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(X11InputMethodDescriptor, getAvailableLocales, $LocaleArray*)},
	{"getInputMethodDisplayName", "(Ljava/util/Locale;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(X11InputMethodDescriptor, getInputMethodDisplayName, $String*, $Locale*, $Locale*)},
	{"getInputMethodIcon", "(Ljava/util/Locale;)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(X11InputMethodDescriptor, getInputMethodIcon, $Image*, $Locale*)},
	{"getSupportedLocale", "()Ljava/util/Locale;", nullptr, $STATIC, $staticMethod(X11InputMethodDescriptor, getSupportedLocale, $Locale*)},
	{"hasDynamicLocaleList", "()Z", nullptr, $PUBLIC, $virtualMethod(X11InputMethodDescriptor, hasDynamicLocaleList, bool)},
	{}
};

$ClassInfo _X11InputMethodDescriptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.X11InputMethodDescriptor",
	"java.lang.Object",
	"java.awt.im.spi.InputMethodDescriptor",
	_X11InputMethodDescriptor_FieldInfo_,
	_X11InputMethodDescriptor_MethodInfo_
};

$Object* allocate$X11InputMethodDescriptor($Class* clazz) {
	return $of($alloc(X11InputMethodDescriptor));
}

$Locale* X11InputMethodDescriptor::locale = nullptr;

void X11InputMethodDescriptor::init$() {
	$assignStatic(X11InputMethodDescriptor::locale, getSupportedLocale());
}

$LocaleArray* X11InputMethodDescriptor::getAvailableLocales() {
	$var($LocaleArray, locales, $new($LocaleArray, {X11InputMethodDescriptor::locale}));
	return locales;
}

bool X11InputMethodDescriptor::hasDynamicLocaleList() {
	return false;
}

$String* X11InputMethodDescriptor::getInputMethodDisplayName($Locale* inputLocale, $Locale* displayLanguage) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, name, "System Input Methods"_s);
		if ($nc($($Locale::getDefault()))->equals(displayLanguage)) {
			$assign(name, $Toolkit::getProperty("AWT.HostInputMethodDisplayName"_s, name));
		}
		return name;
	}
}

$Image* X11InputMethodDescriptor::getInputMethodIcon($Locale* inputLocale) {
	return nullptr;
}

$Locale* X11InputMethodDescriptor::getSupportedLocale() {
	$init(X11InputMethodDescriptor);
	return $SunToolkit::getStartupLocale();
}

X11InputMethodDescriptor::X11InputMethodDescriptor() {
}

$Class* X11InputMethodDescriptor::load$($String* name, bool initialize) {
	$loadClass(X11InputMethodDescriptor, name, initialize, &_X11InputMethodDescriptor_ClassInfo_, allocate$X11InputMethodDescriptor);
	return class$;
}

$Class* X11InputMethodDescriptor::class$ = nullptr;

	} // awt
} // sun