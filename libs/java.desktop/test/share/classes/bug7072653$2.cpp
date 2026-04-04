#include <bug7072653$2.h>
#include <bug7072653.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window$Type.h>
#include <java/awt/Window.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <jcpp.h>

#undef POPUP

using $WindowArray = $Array<::java::awt::Window>;
using $bug7072653 = ::bug7072653;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Insets = ::java::awt::Insets;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $Window$Type = ::java::awt::Window$Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;

void bug7072653$2::init$($String* val$lookAndFeelString) {
	$set(this, val$lookAndFeelString, val$lookAndFeelString);
}

void bug7072653$2::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
}

void bug7072653$2::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
	$useLocalObjectStack();
	int32_t height = 0;
	{
		$var($WindowArray, arr$, $JFrame::getWindows());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Window, window, arr$->get(i$));
			$init($Window$Type);
			if ($Window$Type::POPUP == $nc(window)->getType()) {
				if ($$nc(window->getOwner())->isVisible()) {
					height = $nc($(window->getSize()))->height;
					break;
				}
			}
		}
	}
	$init($bug7072653);
	$var($GraphicsConfiguration, gc, $nc($bug7072653::combobox)->getGraphicsConfiguration());
	$var($Insets, insets, $$nc($Toolkit::getDefaultToolkit())->getScreenInsets(gc));
	int32_t gcHeight = $nc($($nc(gc)->getBounds()))->height;
	gcHeight = gcHeight - $nc(insets)->top - $nc(insets)->bottom;
	if (height == gcHeight) {
		return;
	}
	$var($String, exception, $str({"Popup window height For LookAndFeel"_s, this->val$lookAndFeelString, " is wrong\nShould be "_s, $$str(gcHeight), ", Actually "_s, $$str(height)}));
	$throwNew($RuntimeException, exception);
}

void bug7072653$2::popupMenuCanceled($PopupMenuEvent* e) {
}

bug7072653$2::bug7072653$2() {
}

$Class* bug7072653$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$lookAndFeelString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(bug7072653$2, val$lookAndFeelString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(bug7072653$2, init$, void, $String*)},
		{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug7072653$2, popupMenuCanceled, void, $PopupMenuEvent*)},
		{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug7072653$2, popupMenuWillBecomeInvisible, void, $PopupMenuEvent*)},
		{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug7072653$2, popupMenuWillBecomeVisible, void, $PopupMenuEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7072653",
		"setup",
		"(Ljava/lang/String;Ljava/awt/GraphicsDevice;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7072653$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7072653$2",
		"java.lang.Object",
		"javax.swing.event.PopupMenuListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug7072653"
	};
	$loadClass(bug7072653$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7072653$2);
	});
	return class$;
}

$Class* bug7072653$2::class$ = nullptr;