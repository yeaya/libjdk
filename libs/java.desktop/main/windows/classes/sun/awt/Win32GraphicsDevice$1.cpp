#include <sun/awt/Win32GraphicsDevice$1.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowListener.h>
#include <sun/awt/Win32GraphicsDevice.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;

namespace sun {
	namespace awt {

void Win32GraphicsDevice$1::init$($Win32GraphicsDevice* this$0, $Window* val$w) {
	$set(this, this$0, this$0);
	$set(this, val$w, val$w);
}

void Win32GraphicsDevice$1::run() {
	$nc(this->val$w)->addWindowListener(this->this$0->fsWindowListener);
}

Win32GraphicsDevice$1::Win32GraphicsDevice$1() {
}

$Class* Win32GraphicsDevice$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/Win32GraphicsDevice;", nullptr, $FINAL | $SYNTHETIC, $field(Win32GraphicsDevice$1, this$0)},
		{"val$w", "Ljava/awt/Window;", nullptr, $FINAL | $SYNTHETIC, $field(Win32GraphicsDevice$1, val$w)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/Win32GraphicsDevice;Ljava/awt/Window;)V", "()V", 0, $method(Win32GraphicsDevice$1, init$, void, $Win32GraphicsDevice*, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Win32GraphicsDevice$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.Win32GraphicsDevice",
		"addFSWindowListener",
		"(Ljava/awt/Window;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.Win32GraphicsDevice$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.Win32GraphicsDevice$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.Win32GraphicsDevice"
	};
	$loadClass(Win32GraphicsDevice$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32GraphicsDevice$1);
	});
	return class$;
}

$Class* Win32GraphicsDevice$1::class$ = nullptr;

	} // awt
} // sun