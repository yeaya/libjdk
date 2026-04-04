#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$10.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsFileChooserUI$10::init$($WindowsFileChooserUI* this$0, $String* text) {
	$set(this, this$0, this$0);
	$JButton::init$(text);
}

$Dimension* WindowsFileChooserUI$10::getMaximumSize() {
	$useLocalObjectStack();
	int32_t var$0 = $nc($($nc(this->this$0->approveButton)->getPreferredSize()))->width;
	return var$0 > $nc($($nc(this->this$0->cancelButton)->getPreferredSize()))->width ? this->this$0->approveButton->getPreferredSize() : this->this$0->cancelButton->getPreferredSize();
}

WindowsFileChooserUI$10::WindowsFileChooserUI$10() {
}

$Class* WindowsFileChooserUI$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$10, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;Ljava/lang/String;)V", nullptr, 0, $method(WindowsFileChooserUI$10, init$, void, $WindowsFileChooserUI*, $String*)},
		{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$10, getMaximumSize, $Dimension*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
		"installComponents",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$10", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$10",
		"javax.swing.JButton",
		nullptr,
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
	$loadClass(WindowsFileChooserUI$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsFileChooserUI$10));
	});
	return class$;
}

$Class* WindowsFileChooserUI$10::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com