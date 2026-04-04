#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$6.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef VIEWTYPE_DETAILS
#undef VIEWTYPE_LIST

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;
using $FilePane = ::sun::swing::FilePane;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsFileChooserUI$6::init$($WindowsFileChooserUI* this$0, $JRadioButtonMenuItem* val$listViewMenuItem, $JRadioButtonMenuItem* val$detailsViewMenuItem) {
	$set(this, this$0, this$0);
	$set(this, val$listViewMenuItem, val$listViewMenuItem);
	$set(this, val$detailsViewMenuItem, val$detailsViewMenuItem);
}

void WindowsFileChooserUI$6::propertyChange($PropertyChangeEvent* e) {
	if ("viewType"_s->equals($($nc(e)->getPropertyName()))) {
		switch ($nc(this->this$0->filePane)->getViewType()) {
		case $FilePane::VIEWTYPE_LIST:
			$nc(this->val$listViewMenuItem)->setSelected(true);
			break;
		case $FilePane::VIEWTYPE_DETAILS:
			$nc(this->val$detailsViewMenuItem)->setSelected(true);
			break;
		}
	}
}

WindowsFileChooserUI$6::WindowsFileChooserUI$6() {
}

$Class* WindowsFileChooserUI$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$6, this$0)},
		{"val$detailsViewMenuItem", "Ljavax/swing/JRadioButtonMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$6, val$detailsViewMenuItem)},
		{"val$listViewMenuItem", "Ljavax/swing/JRadioButtonMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$6, val$listViewMenuItem)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;Ljavax/swing/JRadioButtonMenuItem;Ljavax/swing/JRadioButtonMenuItem;)V", "()V", 0, $method(WindowsFileChooserUI$6, init$, void, $WindowsFileChooserUI*, $JRadioButtonMenuItem*, $JRadioButtonMenuItem*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$6, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
		"installComponents",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$6",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
	};
	$loadClass(WindowsFileChooserUI$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileChooserUI$6);
	});
	return class$;
}

$Class* WindowsFileChooserUI$6::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com