#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane$2.h>
#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane.h>
#include <java/awt/Component.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $WindowsInternalFrameTitlePane = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsInternalFrameTitlePane$2::init$($WindowsInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void WindowsInternalFrameTitlePane$2::mouseClicked($MouseEvent* e) {
	$useLocalObjectStack();
	bool var$1 = $nc(e)->getClickCount() == 2;
	bool var$0 = var$1 && $$nc($WindowsInternalFrameTitlePane::access$000(this->this$0))->isClosable();
	if (var$0 && !$$nc($WindowsInternalFrameTitlePane::access$100(this->this$0))->isIcon()) {
		$nc(this->this$0->systemPopupMenu)->setVisible(false);
		$$nc($WindowsInternalFrameTitlePane::access$200(this->this$0))->doDefaultCloseAction();
	} else {
		$MouseAdapter::mouseClicked(e);
	}
}

void WindowsInternalFrameTitlePane$2::mousePressed($MouseEvent* e) {
	$useLocalObjectStack();
	try {
		$$nc($WindowsInternalFrameTitlePane::access$300(this->this$0))->setSelected(true);
	} catch ($PropertyVetoException& pve) {
	}
	this->this$0->showSystemPopupMenu($($nc(e)->getComponent()));
}

WindowsInternalFrameTitlePane$2::WindowsInternalFrameTitlePane$2() {
}

$Class* WindowsInternalFrameTitlePane$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsInternalFrameTitlePane$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)V", nullptr, 0, $method(WindowsInternalFrameTitlePane$2, init$, void, $WindowsInternalFrameTitlePane*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsInternalFrameTitlePane$2, mouseClicked, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsInternalFrameTitlePane$2, mousePressed, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane",
		"assembleSystemMenu",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$2",
		"java.awt.event.MouseAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane"
	};
	$loadClass(WindowsInternalFrameTitlePane$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsInternalFrameTitlePane$2));
	});
	return class$;
}

$Class* WindowsInternalFrameTitlePane$2::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com