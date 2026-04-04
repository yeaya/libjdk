#include <sun/awt/dnd/SunDragSourceContextPeer$1.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunDragSourceContextPeer = ::sun::awt::dnd::SunDragSourceContextPeer;

namespace sun {
	namespace awt {
		namespace dnd {

void SunDragSourceContextPeer$1::init$($SunDragSourceContextPeer* this$0) {
	$set(this, this$0, this$0);
}

void SunDragSourceContextPeer$1::run() {
	$init($SunDragSourceContextPeer);
	$SunDragSourceContextPeer::discardingMouseEvents = false;
}

SunDragSourceContextPeer$1::SunDragSourceContextPeer$1() {
}

$Class* SunDragSourceContextPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/dnd/SunDragSourceContextPeer;", nullptr, $FINAL | $SYNTHETIC, $field(SunDragSourceContextPeer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/dnd/SunDragSourceContextPeer;)V", nullptr, 0, $method(SunDragSourceContextPeer$1, init$, void, $SunDragSourceContextPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SunDragSourceContextPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.dnd.SunDragSourceContextPeer",
		"startDrag",
		"(Ljava/awt/dnd/DragSourceContext;Ljava/awt/Cursor;Ljava/awt/Image;Ljava/awt/Point;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.dnd.SunDragSourceContextPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.dnd.SunDragSourceContextPeer$1",
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
		"sun.awt.dnd.SunDragSourceContextPeer"
	};
	$loadClass(SunDragSourceContextPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunDragSourceContextPeer$1);
	});
	return class$;
}

$Class* SunDragSourceContextPeer$1::class$ = nullptr;

		} // dnd
	} // awt
} // sun