#include <sun/lwawt/macosx/CInputMethodDescriptor.h>
#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/awt/im/spi/InputMethod.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <sun/lwawt/macosx/CInputMethod.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $InputMethod = ::java::awt::im::spi::InputMethod;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $CInputMethod = ::sun::lwawt::macosx::CInputMethod;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CInputMethodDescriptor::init$() {
}

$LocaleArray* CInputMethodDescriptor::getAvailableLocales() {
	$useLocalObjectStack();
	$var($ObjectArray, locales, getAvailableLocalesInternal());
	$var($LocaleArray, tmp, $new($LocaleArray, $nc(locales)->length));
	$System::arraycopy(locales, 0, tmp, 0, locales->length);
	return tmp;
}

$ObjectArray* CInputMethodDescriptor::getAvailableLocalesInternal() {
	$init(CInputMethodDescriptor);
	$useLocalObjectStack();
	$var($List, workList, nativeGetAvailableLocales());
	$var($Locale, currentLocale, $CInputMethod::getNativeLocale());
	if (workList == nullptr || workList->isEmpty()) {
		return $new($ObjectArray, {currentLocale != nullptr ? currentLocale : $($Locale::getDefault())});
	} else {
		if (currentLocale != nullptr && !workList->contains(currentLocale)) {
			workList->add(currentLocale);
		}
		return workList->toArray();
	}
}

bool CInputMethodDescriptor::hasDynamicLocaleList() {
	return false;
}

$String* CInputMethodDescriptor::getInputMethodDisplayName($Locale* inputLocale, $Locale* displayLanguage) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($String, name, "System Input Methods"_s);
		if ($$nc($Locale::getDefault())->equals(displayLanguage)) {
			$assign(name, $Toolkit::getProperty("AWT.HostInputMethodDisplayName"_s, name));
		}
		return name;
	}
}

$Image* CInputMethodDescriptor::getInputMethodIcon($Locale* inputLocale) {
	return nullptr;
}

$InputMethod* CInputMethodDescriptor::createInputMethod() {
	return $new($CInputMethod);
}

$String* CInputMethodDescriptor::toString() {
	$useLocalObjectStack();
	$var($LocaleArray, loc, getAvailableLocales());
	$var($String, locnames, nullptr);
	for (int32_t i = 0; i < $nc(loc)->length; ++i) {
		if (locnames == nullptr) {
			$assign(locnames, $nc(loc->get(i))->toString());
		} else {
			$plusAssign(locnames, $$str({","_s, loc->get(i)}));
		}
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("[locales="_s);
	var$0->append(locnames);
	var$0->append(",localelist="_s);
	var$0->append(hasDynamicLocaleList() ? "dynamic"_s : "static"_s);
	var$0->append("]"_s);
	return $str(var$0);
}

void CInputMethodDescriptor::nativeInit() {
	$init(CInputMethodDescriptor);
	$prepareNativeStatic(nativeInit, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$List* CInputMethodDescriptor::nativeGetAvailableLocales() {
	$init(CInputMethodDescriptor);
	$prepareNativeStatic(nativeGetAvailableLocales, $List*);
	$var($List, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

void CInputMethodDescriptor::clinit$($Class* clazz) {
	{
		CInputMethodDescriptor::nativeInit();
	}
}

CInputMethodDescriptor::CInputMethodDescriptor() {
}

$Class* CInputMethodDescriptor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CInputMethodDescriptor, init$, void)},
		{"createInputMethod", "()Ljava/awt/im/spi/InputMethod;", nullptr, $PUBLIC, $virtualMethod(CInputMethodDescriptor, createInputMethod, $InputMethod*), "java.lang.Exception"},
		{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(CInputMethodDescriptor, getAvailableLocales, $LocaleArray*)},
		{"getAvailableLocalesInternal", "()[Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(CInputMethodDescriptor, getAvailableLocalesInternal, $ObjectArray*)},
		{"getInputMethodDisplayName", "(Ljava/util/Locale;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(CInputMethodDescriptor, getInputMethodDisplayName, $String*, $Locale*, $Locale*)},
		{"getInputMethodIcon", "(Ljava/util/Locale;)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(CInputMethodDescriptor, getInputMethodIcon, $Image*, $Locale*)},
		{"hasDynamicLocaleList", "()Z", nullptr, $PUBLIC, $virtualMethod(CInputMethodDescriptor, hasDynamicLocaleList, bool)},
		{"nativeGetAvailableLocales", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $NATIVE, $staticMethod(CInputMethodDescriptor, nativeGetAvailableLocales, $List*)},
		{"nativeInit", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CInputMethodDescriptor, nativeInit, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CInputMethodDescriptor, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.lwawt.macosx.CInputMethodDescriptor",
		"java.lang.Object",
		"java.awt.im.spi.InputMethodDescriptor",
		nullptr,
		methodInfos$$
	};
	$loadClass(CInputMethodDescriptor, name, initialize, &classInfo$$, CInputMethodDescriptor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CInputMethodDescriptor);
	});
	return class$;
}

$Class* CInputMethodDescriptor::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun