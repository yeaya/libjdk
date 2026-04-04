#include <sun/awt/X11/XInputMethodDescriptor.h>
#include <java/awt/im/spi/InputMethod.h>
#include <sun/awt/X11/XInputMethod.h>
#include <sun/awt/X11InputMethodDescriptor.h>
#include <jcpp.h>

using $InputMethod = ::java::awt::im::spi::InputMethod;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XInputMethod = ::sun::awt::X11::XInputMethod;
using $X11InputMethodDescriptor = ::sun::awt::X11InputMethodDescriptor;

namespace sun {
	namespace awt {
		namespace X11 {

void XInputMethodDescriptor::init$() {
	$X11InputMethodDescriptor::init$();
}

$InputMethod* XInputMethodDescriptor::createInputMethod() {
	return $new($XInputMethod);
}

XInputMethodDescriptor::XInputMethodDescriptor() {
}

$Class* XInputMethodDescriptor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XInputMethodDescriptor, init$, void)},
		{"createInputMethod", "()Ljava/awt/im/spi/InputMethod;", nullptr, $PUBLIC, $virtualMethod(XInputMethodDescriptor, createInputMethod, $InputMethod*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XInputMethodDescriptor",
		"sun.awt.X11InputMethodDescriptor",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XInputMethodDescriptor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XInputMethodDescriptor);
	});
	return class$;
}

$Class* XInputMethodDescriptor::class$ = nullptr;

		} // X11
	} // awt
} // sun