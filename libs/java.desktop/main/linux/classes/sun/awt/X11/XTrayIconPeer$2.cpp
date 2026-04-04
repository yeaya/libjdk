#include <sun/awt/X11/XTrayIconPeer$2.h>
#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Window.h>
#include <sun/awt/X11/XTrayIconPeer$XTrayIconEmbeddedFrame.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <jcpp.h>

#undef TOOLKIT_EXCLUDE

using $Dialog$ModalExclusionType = ::java::awt::Dialog$ModalExclusionType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XTrayIconPeer$2::init$($XTrayIconPeer* this$0) {
	$set(this, this$0, this$0);
}

$Object* XTrayIconPeer$2::run() {
	$init($Dialog$ModalExclusionType);
	$nc(this->this$0->eframe)->setModalExclusionType($Dialog$ModalExclusionType::TOOLKIT_EXCLUDE);
	return nullptr;
}

XTrayIconPeer$2::XTrayIconPeer$2() {
}

$Class* XTrayIconPeer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XTrayIconPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTrayIconPeer$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XTrayIconPeer;)V", nullptr, 0, $method(XTrayIconPeer$2, init$, void, $XTrayIconPeer*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XTrayIconPeer$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XTrayIconPeer",
		"<init>",
		"(Ljava/awt/TrayIcon;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTrayIconPeer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XTrayIconPeer$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XTrayIconPeer"
	};
	$loadClass(XTrayIconPeer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XTrayIconPeer$2);
	});
	return class$;
}

$Class* XTrayIconPeer$2::class$ = nullptr;

		} // X11
	} // awt
} // sun