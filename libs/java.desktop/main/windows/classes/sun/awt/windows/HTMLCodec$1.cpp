#include <sun/awt/windows/HTMLCodec$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/awt/windows/EHTMLReadMode.h>
#include <sun/awt/windows/HTMLCodec.h>
#include <jcpp.h>

#undef HTML_READ_ALL
#undef HTML_READ_FRAGMENT
#undef HTML_READ_SELECTION

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $EHTMLReadMode = ::sun::awt::windows::EHTMLReadMode;

namespace sun {
	namespace awt {
		namespace windows {

$ints* HTMLCodec$1::$SwitchMap$sun$awt$windows$EHTMLReadMode = nullptr;

void HTMLCodec$1::clinit$($Class* clazz) {
	$assignStatic(HTMLCodec$1::$SwitchMap$sun$awt$windows$EHTMLReadMode, $new($ints, $($EHTMLReadMode::values())->length));
	{
		try {
			HTMLCodec$1::$SwitchMap$sun$awt$windows$EHTMLReadMode->set($EHTMLReadMode::HTML_READ_ALL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			HTMLCodec$1::$SwitchMap$sun$awt$windows$EHTMLReadMode->set($EHTMLReadMode::HTML_READ_FRAGMENT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			HTMLCodec$1::$SwitchMap$sun$awt$windows$EHTMLReadMode->set($EHTMLReadMode::HTML_READ_SELECTION->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

HTMLCodec$1::HTMLCodec$1() {
}

$Class* HTMLCodec$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$awt$windows$EHTMLReadMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HTMLCodec$1, $SwitchMap$sun$awt$windows$EHTMLReadMode)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.HTMLCodec",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.HTMLCodec$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.awt.windows.HTMLCodec$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.HTMLCodec"
	};
	$loadClass(HTMLCodec$1, name, initialize, &classInfo$$, HTMLCodec$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLCodec$1);
	});
	return class$;
}

$Class* HTMLCodec$1::class$ = nullptr;

		} // windows
	} // awt
} // sun