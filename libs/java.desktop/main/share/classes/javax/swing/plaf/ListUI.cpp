#include <javax/swing/plaf/ListUI.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void ListUI::init$() {
	$ComponentUI::init$();
}

ListUI::ListUI() {
}

$Class* ListUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ListUI, init$, void)},
		{"getCellBounds", "(Ljavax/swing/JList;II)Ljava/awt/Rectangle;", "(Ljavax/swing/JList<*>;II)Ljava/awt/Rectangle;", $PUBLIC | $ABSTRACT, $virtualMethod(ListUI, getCellBounds, $Rectangle*, $JList*, int32_t, int32_t)},
		{"indexToLocation", "(Ljavax/swing/JList;I)Ljava/awt/Point;", "(Ljavax/swing/JList<*>;I)Ljava/awt/Point;", $PUBLIC | $ABSTRACT, $virtualMethod(ListUI, indexToLocation, $Point*, $JList*, int32_t)},
		{"locationToIndex", "(Ljavax/swing/JList;Ljava/awt/Point;)I", "(Ljavax/swing/JList<*>;Ljava/awt/Point;)I", $PUBLIC | $ABSTRACT, $virtualMethod(ListUI, locationToIndex, int32_t, $JList*, $Point*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.ListUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ListUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ListUI);
	});
	return class$;
}

$Class* ListUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax