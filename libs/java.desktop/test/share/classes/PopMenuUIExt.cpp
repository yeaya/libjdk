#include <PopMenuUIExt.h>
#include <PopMenuUIExt$1.h>
#include <java/awt/Component.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <jcpp.h>

using $PopMenuUIExt$1 = ::PopMenuUIExt$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;

$Popup* PopMenuUIExt::popUp = nullptr;

void PopMenuUIExt::init$() {
	$BasicPopupMenuUI::init$();
}

$Popup* PopMenuUIExt::getPopup($JPopupMenu* popup, int32_t x, int32_t y) {
	$useLocalObjectStack();
	$PopupFactory::setSharedInstance($$new($PopMenuUIExt$1, this));
	$var($PopupFactory, factory, $PopupFactory::getSharedInstance());
	$assignStatic(PopMenuUIExt::popUp, $nc(factory)->getPopup($($nc(popup)->getInvoker()), popup, x, y));
	return PopMenuUIExt::popUp;
}

$Popup* PopMenuUIExt::getPopup() {
	$init(PopMenuUIExt);
	return PopMenuUIExt::popUp;
}

PopMenuUIExt::PopMenuUIExt() {
}

$Class* PopMenuUIExt::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"popUp", "Ljavax/swing/Popup;", nullptr, $PRIVATE | $STATIC, $staticField(PopMenuUIExt, popUp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PopMenuUIExt, init$, void)},
		{"getPopup", "(Ljavax/swing/JPopupMenu;II)Ljavax/swing/Popup;", nullptr, $PUBLIC, $virtualMethod(PopMenuUIExt, getPopup, $Popup*, $JPopupMenu*, int32_t, int32_t)},
		{"getPopup", "()Ljavax/swing/Popup;", nullptr, $PUBLIC | $STATIC, $staticMethod(PopMenuUIExt, getPopup, $Popup*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PopMenuUIExt$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PopMenuUIExt",
		"javax.swing.plaf.basic.BasicPopupMenuUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"PopMenuUIExt$1"
	};
	$loadClass(PopMenuUIExt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PopMenuUIExt);
	});
	return class$;
}

$Class* PopMenuUIExt::class$ = nullptr;