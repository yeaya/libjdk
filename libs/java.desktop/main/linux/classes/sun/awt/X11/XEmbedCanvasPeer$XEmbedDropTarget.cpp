#include <sun/awt/X11/XEmbedCanvasPeer$XEmbedDropTarget.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/DropTargetListener.h>
#include <java/util/TooManyListenersException.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <jcpp.h>

using $DropTarget = ::java::awt::dnd::DropTarget;
using $DropTargetListener = ::java::awt::dnd::DropTargetListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TooManyListenersException = ::java::util::TooManyListenersException;

namespace sun {
	namespace awt {
		namespace X11 {

void XEmbedCanvasPeer$XEmbedDropTarget::init$() {
	$DropTarget::init$();
}

void XEmbedCanvasPeer$XEmbedDropTarget::addDropTargetListener($DropTargetListener* dtl) {
	$throwNew($TooManyListenersException);
}

XEmbedCanvasPeer$XEmbedDropTarget::XEmbedCanvasPeer$XEmbedDropTarget() {
}

$Class* XEmbedCanvasPeer$XEmbedDropTarget::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(XEmbedCanvasPeer$XEmbedDropTarget, init$, void)},
		{"addDropTargetListener", "(Ljava/awt/dnd/DropTargetListener;)V", nullptr, $PUBLIC, $virtualMethod(XEmbedCanvasPeer$XEmbedDropTarget, addDropTargetListener, void, $DropTargetListener*), "java.util.TooManyListenersException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XEmbedCanvasPeer$XEmbedDropTarget", "sun.awt.X11.XEmbedCanvasPeer", "XEmbedDropTarget", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XEmbedCanvasPeer$XEmbedDropTarget",
		"java.awt.dnd.DropTarget",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XEmbedCanvasPeer"
	};
	$loadClass(XEmbedCanvasPeer$XEmbedDropTarget, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XEmbedCanvasPeer$XEmbedDropTarget));
	});
	return class$;
}

$Class* XEmbedCanvasPeer$XEmbedDropTarget::class$ = nullptr;

		} // X11
	} // awt
} // sun