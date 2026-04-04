#include <javax/swing/PopupFactory$HeavyWeightPopup$1.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/swing/PopupFactory$HeavyWeightPopup.h>
#include <javax/swing/PopupFactory.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $PopupFactory$HeavyWeightPopup = ::javax::swing::PopupFactory$HeavyWeightPopup;

namespace javax {
	namespace swing {

void PopupFactory$HeavyWeightPopup$1::init$($Window* val$w) {
	$set(this, val$w, val$w);
	$WindowAdapter::init$();
}

void PopupFactory$HeavyWeightPopup$1::windowClosed($WindowEvent* e) {
	$useLocalObjectStack();
	$var($List, popups, nullptr);
	$load($PopupFactory$HeavyWeightPopup);
	$synchronized($PopupFactory$HeavyWeightPopup::class$) {
		$var($Map, heavyPopupCache2, $PopupFactory$HeavyWeightPopup::getHeavyWeightPopupCache());
		$assign(popups, $cast($List, $nc(heavyPopupCache2)->remove(this->val$w)));
	}
	if (popups != nullptr) {
		for (int32_t counter = popups->size() - 1; counter >= 0; --counter) {
			$$sure($PopupFactory$HeavyWeightPopup, popups->get(counter))->_dispose();
		}
	}
}

PopupFactory$HeavyWeightPopup$1::PopupFactory$HeavyWeightPopup$1() {
}

$Class* PopupFactory$HeavyWeightPopup$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$w", "Ljava/awt/Window;", nullptr, $FINAL | $SYNTHETIC, $field(PopupFactory$HeavyWeightPopup$1, val$w)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, 0, $method(PopupFactory$HeavyWeightPopup$1, init$, void, $Window*)},
		{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(PopupFactory$HeavyWeightPopup$1, windowClosed, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.PopupFactory$HeavyWeightPopup",
		"recycleHeavyWeightPopup",
		"(Ljavax/swing/PopupFactory$HeavyWeightPopup;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.PopupFactory$HeavyWeightPopup", "javax.swing.PopupFactory", "HeavyWeightPopup", $PRIVATE | $STATIC},
		{"javax.swing.PopupFactory$HeavyWeightPopup$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.PopupFactory$HeavyWeightPopup$1",
		"java.awt.event.WindowAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.PopupFactory"
	};
	$loadClass(PopupFactory$HeavyWeightPopup$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PopupFactory$HeavyWeightPopup$1));
	});
	return class$;
}

$Class* PopupFactory$HeavyWeightPopup$1::class$ = nullptr;

	} // swing
} // javax