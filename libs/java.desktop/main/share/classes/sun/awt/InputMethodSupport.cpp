#include <sun/awt/InputMethodSupport.h>
#include <java/awt/Window.h>
#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/util/Locale.h>
#include <sun/awt/im/InputContext.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $InputMethodDescriptor = ::java::awt::im::spi::InputMethodDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $InputContext = ::sun::awt::im::InputContext;

namespace sun {
	namespace awt {

$Class* InputMethodSupport::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createInputMethodWindow", "(Ljava/lang/String;Lsun/awt/im/InputContext;)Ljava/awt/Window;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodSupport, createInputMethodWindow, $Window*, $String*, $InputContext*)},
		{"enableInputMethodsForTextComponent", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodSupport, enableInputMethodsForTextComponent, bool)},
		{"getDefaultKeyboardLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodSupport, getDefaultKeyboardLocale, $Locale*)},
		{"getInputMethodAdapterDescriptor", "()Ljava/awt/im/spi/InputMethodDescriptor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodSupport, getInputMethodAdapterDescriptor, $InputMethodDescriptor*), "java.awt.AWTException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.InputMethodSupport",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InputMethodSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InputMethodSupport);
	});
	return class$;
}

$Class* InputMethodSupport::class$ = nullptr;

	} // awt
} // sun