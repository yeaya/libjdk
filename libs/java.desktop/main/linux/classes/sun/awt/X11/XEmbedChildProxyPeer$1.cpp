#include <sun/awt/X11/XEmbedChildProxyPeer$1.h>
#include <java/awt/Component.h>
#include <sun/awt/X11/XEmbedChildProxy.h>
#include <sun/awt/X11/XEmbedChildProxyPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEmbedChildProxyPeer = ::sun::awt::X11::XEmbedChildProxyPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XEmbedChildProxyPeer$1::init$($XEmbedChildProxyPeer* this$0) {
	$set(this, this$0, this$0);
}

void XEmbedChildProxyPeer$1::run() {
	$nc(this->this$0->proxy)->requestFocusInWindow();
}

XEmbedChildProxyPeer$1::XEmbedChildProxyPeer$1() {
}

$Class* XEmbedChildProxyPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XEmbedChildProxyPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedChildProxyPeer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XEmbedChildProxyPeer;)V", nullptr, 0, $method(XEmbedChildProxyPeer$1, init$, void, $XEmbedChildProxyPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedChildProxyPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XEmbedChildProxyPeer",
		"requestXEmbedFocus",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XEmbedChildProxyPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XEmbedChildProxyPeer$1",
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
		"sun.awt.X11.XEmbedChildProxyPeer"
	};
	$loadClass(XEmbedChildProxyPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XEmbedChildProxyPeer$1);
	});
	return class$;
}

$Class* XEmbedChildProxyPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun