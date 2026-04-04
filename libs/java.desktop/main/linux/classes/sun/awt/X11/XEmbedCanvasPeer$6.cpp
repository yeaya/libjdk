#include <sun/awt/X11/XEmbedCanvasPeer$6.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/util/Map.h>
#include <sun/awt/X11/XEmbedCanvasPeer$XEmbedServer.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/awt/X11/XEmbedHelper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACCEL_LOCK
#undef FINE

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

void XEmbedCanvasPeer$6::init$($XEmbedCanvasPeer* this$0, int64_t val$keysym, int64_t val$modifiers, int64_t val$accel_id) {
	$set(this, this$0, this$0);
	this->val$keysym = val$keysym;
	this->val$modifiers = val$modifiers;
	this->val$accel_id = val$accel_id;
}

void XEmbedCanvasPeer$6::run() {
	$useLocalObjectStack();
	$var($AWTKeyStroke, stroke, $nc(this->this$0->xembed)->getKeyStrokeForKeySym(this->val$keysym, this->val$modifiers));
	if (stroke != nullptr) {
		$init($PlatformLogger$Level);
		if ($nc($XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$XEmbedCanvasPeer::xembedLog->fine($$str({"Registering accelerator "_s, $$str(this->val$accel_id), " for "_s, stroke}));
		}
		$synchronized(this->this$0->ACCEL_LOCK) {
			$nc(this->this$0->accelerators)->put($($Long::valueOf(this->val$accel_id)), stroke);
			$nc(this->this$0->accel_lookup)->put(stroke, $($Long::valueOf(this->val$accel_id)));
		}
	}
	this->this$0->propogateRegisterAccelerator(stroke);
}

XEmbedCanvasPeer$6::XEmbedCanvasPeer$6() {
}

$Class* XEmbedCanvasPeer$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$6, this$0)},
		{"val$accel_id", "J", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$6, val$accel_id)},
		{"val$modifiers", "J", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$6, val$modifiers)},
		{"val$keysym", "J", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$6, val$keysym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;JJJ)V", "()V", 0, $method(XEmbedCanvasPeer$6, init$, void, $XEmbedCanvasPeer*, int64_t, int64_t, int64_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedCanvasPeer$6, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XEmbedCanvasPeer",
		"registerAccelerator",
		"(JJJ)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XEmbedCanvasPeer$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XEmbedCanvasPeer$6",
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
	$loadClass(XEmbedCanvasPeer$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XEmbedCanvasPeer$6);
	});
	return class$;
}

$Class* XEmbedCanvasPeer$6::class$ = nullptr;

		} // X11
	} // awt
} // sun