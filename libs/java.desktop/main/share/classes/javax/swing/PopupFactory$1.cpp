#include <javax/swing/PopupFactory$1.h>
#include <java/awt/Component.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;

namespace javax {
	namespace swing {

void PopupFactory$1::init$() {
}

$Popup* PopupFactory$1::getHeavyWeightPopup($PopupFactory* factory, $Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	return $nc(factory)->getPopup(owner, contents, ownerX, ownerY, 2);
}

PopupFactory$1::PopupFactory$1() {
}

$Class* PopupFactory$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PopupFactory$1, init$, void)},
		{"getHeavyWeightPopup", "(Ljavax/swing/PopupFactory;Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $PUBLIC, $virtualMethod(PopupFactory$1, getHeavyWeightPopup, $Popup*, $PopupFactory*, $Component*, $Component*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.PopupFactory",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.PopupFactory$1", nullptr, nullptr, 0},
		{"sun.swing.SwingAccessor$PopupFactoryAccessor", "sun.swing.SwingAccessor", "PopupFactoryAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.PopupFactory$1",
		"java.lang.Object",
		"sun.swing.SwingAccessor$PopupFactoryAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.PopupFactory"
	};
	$loadClass(PopupFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PopupFactory$1);
	});
	return class$;
}

$Class* PopupFactory$1::class$ = nullptr;

	} // swing
} // javax