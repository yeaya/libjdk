#include <PopMenuUIExt$1.h>
#include <PopMenuUIExt.h>
#include <java/awt/Component.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <jcpp.h>

using $PopMenuUIExt = ::PopMenuUIExt;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;

void PopMenuUIExt$1::init$($PopMenuUIExt* this$0) {
	$set(this, this$0, this$0);
	$PopupFactory::init$();
}

$Popup* PopMenuUIExt$1::getPopup($Component* owner, $Component* contents, int32_t x, int32_t y) {
	return $PopupFactory::getPopup(owner, contents, x, y, true);
}

PopMenuUIExt$1::PopMenuUIExt$1() {
}

$Class* PopMenuUIExt$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LPopMenuUIExt;", nullptr, $FINAL | $SYNTHETIC, $field(PopMenuUIExt$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPopMenuUIExt;)V", nullptr, 0, $method(PopMenuUIExt$1, init$, void, $PopMenuUIExt*)},
		{"getPopup", "(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $PUBLIC, $virtualMethod(PopMenuUIExt$1, getPopup, $Popup*, $Component*, $Component*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"PopMenuUIExt",
		"getPopup",
		"(Ljavax/swing/JPopupMenu;II)Ljavax/swing/Popup;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PopMenuUIExt$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PopMenuUIExt$1",
		"javax.swing.PopupFactory",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"PopMenuUIExt"
	};
	$loadClass(PopMenuUIExt$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PopMenuUIExt$1);
	});
	return class$;
}

$Class* PopMenuUIExt$1::class$ = nullptr;