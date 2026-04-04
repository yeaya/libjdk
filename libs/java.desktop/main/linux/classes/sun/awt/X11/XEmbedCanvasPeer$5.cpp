#include <sun/awt/X11/XEmbedCanvasPeer$5.h>
#include <java/util/Set.h>
#include <sun/awt/X11/XEmbedCanvasPeer$GrabbedKey.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef GRAB_LOCK

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;
using $XEmbedCanvasPeer$GrabbedKey = ::sun::awt::X11::XEmbedCanvasPeer$GrabbedKey;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

void XEmbedCanvasPeer$5::init$($XEmbedCanvasPeer* this$0, int64_t val$keysym, int64_t val$modifiers) {
	$set(this, this$0, this$0);
	this->val$keysym = val$keysym;
	this->val$modifiers = val$modifiers;
}

void XEmbedCanvasPeer$5::run() {
	$useLocalObjectStack();
	$var($XEmbedCanvasPeer$GrabbedKey, grab, $new($XEmbedCanvasPeer$GrabbedKey, this->val$keysym, this->val$modifiers));
	$init($XEmbedCanvasPeer);
	$init($PlatformLogger$Level);
	if ($nc($XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$XEmbedCanvasPeer::xembedLog->fine($$str({"UnGrabbing key: "_s, grab}));
	}
	$synchronized(this->this$0->GRAB_LOCK) {
		$nc(this->this$0->grabbed_keys)->remove(grab);
	}
}

XEmbedCanvasPeer$5::XEmbedCanvasPeer$5() {
}

$Class* XEmbedCanvasPeer$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$5, this$0)},
		{"val$modifiers", "J", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$5, val$modifiers)},
		{"val$keysym", "J", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$5, val$keysym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;JJ)V", "()V", 0, $method(XEmbedCanvasPeer$5, init$, void, $XEmbedCanvasPeer*, int64_t, int64_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedCanvasPeer$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XEmbedCanvasPeer",
		"ungrabKey",
		"(JJ)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XEmbedCanvasPeer$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XEmbedCanvasPeer$5",
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
		"sun.awt.X11.XEmbedCanvasPeer"
	};
	$loadClass(XEmbedCanvasPeer$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XEmbedCanvasPeer$5);
	});
	return class$;
}

$Class* XEmbedCanvasPeer$5::class$ = nullptr;

		} // X11
	} // awt
} // sun