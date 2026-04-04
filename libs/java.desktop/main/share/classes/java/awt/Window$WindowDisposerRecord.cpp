#include <java/awt/Window$WindowDisposerRecord.h>
#include <java/awt/Window.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AppContext = ::sun::awt::AppContext;

namespace java {
	namespace awt {

void Window$WindowDisposerRecord::init$($AppContext* context, $Window* victim) {
	$set(this, weakThis, $nc(victim)->weakThis);
	$set(this, context, $new($WeakReference, context));
}

void Window$WindowDisposerRecord::updateOwner() {
	$useLocalObjectStack();
	$var($Window, victim, $cast($Window, $nc(this->weakThis)->get()));
	$set(this, owner, (victim == nullptr) ? ($WeakReference*)nullptr : $new($WeakReference, $(victim->getOwner())));
}

void Window$WindowDisposerRecord::dispose() {
	$useLocalObjectStack();
	if (this->owner != nullptr) {
		$var($Window, parent, $cast($Window, this->owner->get()));
		if (parent != nullptr) {
			parent->removeOwnedWindow(this->weakThis);
		}
	}
	$var($AppContext, ac, $cast($AppContext, $nc(this->context)->get()));
	if (nullptr != ac) {
		$Window::removeFromWindowList(ac, this->weakThis);
	}
}

Window$WindowDisposerRecord::Window$WindowDisposerRecord() {
}

$Class* Window$WindowDisposerRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"owner", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Window;>;", 0, $field(Window$WindowDisposerRecord, owner)},
		{"weakThis", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Window;>;", $FINAL, $field(Window$WindowDisposerRecord, weakThis)},
		{"context", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/awt/AppContext;>;", $FINAL, $field(Window$WindowDisposerRecord, context)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/AppContext;Ljava/awt/Window;)V", nullptr, 0, $method(Window$WindowDisposerRecord, init$, void, $AppContext*, $Window*)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(Window$WindowDisposerRecord, dispose, void)},
		{"updateOwner", "()V", nullptr, $PUBLIC, $virtualMethod(Window$WindowDisposerRecord, updateOwner, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Window$WindowDisposerRecord", "java.awt.Window", "WindowDisposerRecord", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Window$WindowDisposerRecord",
		"java.lang.Object",
		"sun.java2d.DisposerRecord",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Window"
	};
	$loadClass(Window$WindowDisposerRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Window$WindowDisposerRecord);
	});
	return class$;
}

$Class* Window$WindowDisposerRecord::class$ = nullptr;

	} // awt
} // java