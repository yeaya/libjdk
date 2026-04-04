#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler.h>
#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$PropertyChangeHandler.h>
#include <jcpp.h>

#undef FRAME_ICON_PROPERTY

using $WindowsInternalFrameTitlePane = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $BasicInternalFrameTitlePane$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler::init$($WindowsInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$BasicInternalFrameTitlePane$PropertyChangeHandler::init$(this$0);
}

void WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler::propertyChange($PropertyChangeEvent* evt) {
	$useLocalObjectStack();
	$var($String, prop, $nc(evt)->getPropertyName());
	$init($JInternalFrame);
	if ($nc($JInternalFrame::FRAME_ICON_PROPERTY)->equals(prop) && this->this$0->systemLabel != nullptr) {
		this->this$0->systemLabel->setIcon($($$nc($WindowsInternalFrameTitlePane::access$1200(this->this$0))->getFrameIcon()));
	}
	$BasicInternalFrameTitlePane$PropertyChangeHandler::propertyChange(evt);
}

WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler::WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler() {
}

$Class* WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler, init$, void, $WindowsInternalFrameTitlePane*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler", "com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane", "WindowsPropertyChangeHandler", $PUBLIC},
		{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "PropertyChangeHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler",
		"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane"
	};
	$loadClass(WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler);
	});
	return class$;
}

$Class* WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com