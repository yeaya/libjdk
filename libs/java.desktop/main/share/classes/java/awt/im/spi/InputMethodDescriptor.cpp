#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/awt/Image.h>
#include <java/awt/im/spi/InputMethod.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $Image = ::java::awt::Image;
using $InputMethod = ::java::awt::im::spi::InputMethod;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace java {
	namespace awt {
		namespace im {
			namespace spi {

$Class* InputMethodDescriptor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createInputMethod", "()Ljava/awt/im/spi/InputMethod;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodDescriptor, createInputMethod, $InputMethod*), "java.lang.Exception"},
		{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodDescriptor, getAvailableLocales, $LocaleArray*), "java.awt.AWTException"},
		{"getInputMethodDisplayName", "(Ljava/util/Locale;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodDescriptor, getInputMethodDisplayName, $String*, $Locale*, $Locale*)},
		{"getInputMethodIcon", "(Ljava/util/Locale;)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodDescriptor, getInputMethodIcon, $Image*, $Locale*)},
		{"hasDynamicLocaleList", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodDescriptor, hasDynamicLocaleList, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.im.spi.InputMethodDescriptor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InputMethodDescriptor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InputMethodDescriptor);
	});
	return class$;
}

$Class* InputMethodDescriptor::class$ = nullptr;

			} // spi
		} // im
	} // awt
} // java