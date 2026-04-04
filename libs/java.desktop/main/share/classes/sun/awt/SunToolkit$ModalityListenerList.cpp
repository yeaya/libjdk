#include <sun/awt/SunToolkit$ModalityListenerList.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <sun/awt/ModalityEvent.h>
#include <sun/awt/ModalityListener.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $ModalityEvent = ::sun::awt::ModalityEvent;
using $ModalityListener = ::sun::awt::ModalityListener;

namespace sun {
	namespace awt {

void SunToolkit$ModalityListenerList::init$() {
	$set(this, listeners, $new($Vector));
}

void SunToolkit$ModalityListenerList::add($ModalityListener* listener) {
	$nc(this->listeners)->addElement(listener);
}

void SunToolkit$ModalityListenerList::remove($ModalityListener* listener) {
	$nc(this->listeners)->removeElement(listener);
}

void SunToolkit$ModalityListenerList::modalityPushed($ModalityEvent* ev) {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(this->listeners)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($ModalityListener, listener, $cast($ModalityListener, i$->next()));
		{
			$nc(listener)->modalityPushed(ev);
		}
	}
}

void SunToolkit$ModalityListenerList::modalityPopped($ModalityEvent* ev) {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(this->listeners)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($ModalityListener, listener, $cast($ModalityListener, i$->next()));
		{
			$nc(listener)->modalityPopped(ev);
		}
	}
}

SunToolkit$ModalityListenerList::SunToolkit$ModalityListenerList() {
}

$Class* SunToolkit$ModalityListenerList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"listeners", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/awt/ModalityListener;>;", 0, $field(SunToolkit$ModalityListenerList, listeners)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SunToolkit$ModalityListenerList, init$, void)},
		{"add", "(Lsun/awt/ModalityListener;)V", nullptr, 0, $virtualMethod(SunToolkit$ModalityListenerList, add, void, $ModalityListener*)},
		{"modalityPopped", "(Lsun/awt/ModalityEvent;)V", nullptr, $PUBLIC, $virtualMethod(SunToolkit$ModalityListenerList, modalityPopped, void, $ModalityEvent*)},
		{"modalityPushed", "(Lsun/awt/ModalityEvent;)V", nullptr, $PUBLIC, $virtualMethod(SunToolkit$ModalityListenerList, modalityPushed, void, $ModalityEvent*)},
		{"remove", "(Lsun/awt/ModalityListener;)V", nullptr, 0, $virtualMethod(SunToolkit$ModalityListenerList, remove, void, $ModalityListener*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.SunToolkit$ModalityListenerList", "sun.awt.SunToolkit", "ModalityListenerList", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.SunToolkit$ModalityListenerList",
		"java.lang.Object",
		"sun.awt.ModalityListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.SunToolkit"
	};
	$loadClass(SunToolkit$ModalityListenerList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunToolkit$ModalityListenerList);
	});
	return class$;
}

$Class* SunToolkit$ModalityListenerList::class$ = nullptr;

	} // awt
} // sun