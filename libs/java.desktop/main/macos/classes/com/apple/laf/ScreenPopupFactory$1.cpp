#include <com/apple/laf/ScreenPopupFactory$1.h>
#include <com/apple/laf/ScreenPopupFactory.h>
#include <java/lang/Math.h>
#include <javax/swing/JRootPane.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

#undef WINDOW_SHADOW_REVALIDATE_NOW

using $ScreenPopupFactory = ::com::apple::laf::ScreenPopupFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JRootPane = ::javax::swing::JRootPane;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace com {
	namespace apple {
		namespace laf {

void ScreenPopupFactory$1::init$($ScreenPopupFactory* this$0, $JRootPane* val$popupRootPane) {
	$set(this, this$0, this$0);
	$set(this, val$popupRootPane, val$popupRootPane);
}

void ScreenPopupFactory$1::run() {
	$init($CPlatformWindow);
	$nc(this->val$popupRootPane)->putClientProperty($CPlatformWindow::WINDOW_SHADOW_REVALIDATE_NOW, $($Double::valueOf($Math::random())));
}

ScreenPopupFactory$1::ScreenPopupFactory$1() {
}

$Class* ScreenPopupFactory$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/ScreenPopupFactory;", nullptr, $FINAL | $SYNTHETIC, $field(ScreenPopupFactory$1, this$0)},
		{"val$popupRootPane", "Ljavax/swing/JRootPane;", nullptr, $FINAL | $SYNTHETIC, $field(ScreenPopupFactory$1, val$popupRootPane)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/ScreenPopupFactory;Ljavax/swing/JRootPane;)V", "()V", 0, $method(ScreenPopupFactory$1, init$, void, $ScreenPopupFactory*, $JRootPane*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ScreenPopupFactory$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.ScreenPopupFactory",
		"getPopup",
		"(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.ScreenPopupFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.ScreenPopupFactory$1",
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
		"com.apple.laf.ScreenPopupFactory"
	};
	$loadClass(ScreenPopupFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScreenPopupFactory$1);
	});
	return class$;
}

$Class* ScreenPopupFactory$1::class$ = nullptr;

		} // laf
	} // apple
} // com