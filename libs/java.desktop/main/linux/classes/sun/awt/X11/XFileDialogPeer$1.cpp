#include <sun/awt/X11/XFileDialogPeer$1.h>
#include <sun/awt/X11/XFileDialogPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XFileDialogPeer = ::sun::awt::X11::XFileDialogPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XFileDialogPeer$1::init$($XFileDialogPeer* this$0) {
	$set(this, this$0, this$0);
}

$Object* XFileDialogPeer$1::run() {
	return $of($System::getProperty("user.dir"_s));
}

XFileDialogPeer$1::XFileDialogPeer$1() {
}

$Class* XFileDialogPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XFileDialogPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XFileDialogPeer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XFileDialogPeer;)V", nullptr, 0, $method(XFileDialogPeer$1, init$, void, $XFileDialogPeer*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XFileDialogPeer$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XFileDialogPeer",
		"init",
		"(Ljava/awt/FileDialog;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XFileDialogPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XFileDialogPeer$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XFileDialogPeer"
	};
	$loadClass(XFileDialogPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XFileDialogPeer$1);
	});
	return class$;
}

$Class* XFileDialogPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun