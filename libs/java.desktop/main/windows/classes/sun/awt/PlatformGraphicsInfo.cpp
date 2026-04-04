#include <sun/awt/PlatformGraphicsInfo.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <sun/awt/Win32GraphicsEnvironment.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32GraphicsEnvironment = ::sun::awt::Win32GraphicsEnvironment;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {

void PlatformGraphicsInfo::init$() {
}

$GraphicsEnvironment* PlatformGraphicsInfo::createGE() {
	return $new($Win32GraphicsEnvironment);
}

$Toolkit* PlatformGraphicsInfo::createToolkit() {
	return $new($WToolkit);
}

bool PlatformGraphicsInfo::getDefaultHeadlessProperty() {
	return false;
}

$String* PlatformGraphicsInfo::getDefaultHeadlessMessage() {
	return "\nThe application does not have desktop access,\nbut this program performed an operation which requires it."_s;
}

PlatformGraphicsInfo::PlatformGraphicsInfo() {
}

$Class* PlatformGraphicsInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PlatformGraphicsInfo, init$, void)},
		{"createGE", "()Ljava/awt/GraphicsEnvironment;", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformGraphicsInfo, createGE, $GraphicsEnvironment*)},
		{"createToolkit", "()Ljava/awt/Toolkit;", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformGraphicsInfo, createToolkit, $Toolkit*)},
		{"getDefaultHeadlessMessage", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformGraphicsInfo, getDefaultHeadlessMessage, $String*)},
		{"getDefaultHeadlessProperty", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformGraphicsInfo, getDefaultHeadlessProperty, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.PlatformGraphicsInfo",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PlatformGraphicsInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformGraphicsInfo);
	});
	return class$;
}

$Class* PlatformGraphicsInfo::class$ = nullptr;

	} // awt
} // sun