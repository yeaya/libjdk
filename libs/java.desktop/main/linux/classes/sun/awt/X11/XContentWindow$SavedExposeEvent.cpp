#include <sun/awt/X11/XContentWindow$SavedExposeEvent.h>
#include <java/awt/Component.h>
#include <sun/awt/X11/XContentWindow.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

void XContentWindow$SavedExposeEvent::init$($Component* target, int32_t x, int32_t y, int32_t w, int32_t h) {
	$set(this, target, target);
	this->x = x;
	this->y = y;
	this->w = w;
	this->h = h;
}

XContentWindow$SavedExposeEvent::XContentWindow$SavedExposeEvent() {
}

$Class* XContentWindow$SavedExposeEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"target", "Ljava/awt/Component;", nullptr, 0, $field(XContentWindow$SavedExposeEvent, target)},
		{"x", "I", nullptr, 0, $field(XContentWindow$SavedExposeEvent, x)},
		{"y", "I", nullptr, 0, $field(XContentWindow$SavedExposeEvent, y)},
		{"w", "I", nullptr, 0, $field(XContentWindow$SavedExposeEvent, w)},
		{"h", "I", nullptr, 0, $field(XContentWindow$SavedExposeEvent, h)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;IIII)V", nullptr, 0, $method(XContentWindow$SavedExposeEvent, init$, void, $Component*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XContentWindow$SavedExposeEvent", "sun.awt.X11.XContentWindow", "SavedExposeEvent", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XContentWindow$SavedExposeEvent",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XContentWindow"
	};
	$loadClass(XContentWindow$SavedExposeEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XContentWindow$SavedExposeEvent);
	});
	return class$;
}

$Class* XContentWindow$SavedExposeEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun