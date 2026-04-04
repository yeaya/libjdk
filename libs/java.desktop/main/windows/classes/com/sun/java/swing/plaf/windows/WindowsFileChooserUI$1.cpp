#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Dimension.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <sun/swing/WindowsPlacesBar.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsFileChooserUI$1::init$($WindowsFileChooserUI* this$0, $String* text, int32_t horizontalAlignment) {
	$set(this, this$0, this$0);
	$JLabel::init$(text, horizontalAlignment);
}

$Dimension* WindowsFileChooserUI$1::getPreferredSize() {
	return getMinimumSize();
}

$Dimension* WindowsFileChooserUI$1::getMinimumSize() {
	$var($Dimension, d, $JLabel::getPreferredSize());
	if (this->this$0->placesBar != nullptr) {
		$nc(d)->width = $Math::max($nc(d)->width, this->this$0->placesBar->getWidth());
	}
	return d;
}

WindowsFileChooserUI$1::WindowsFileChooserUI$1() {
}

$Class* WindowsFileChooserUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;Ljava/lang/String;I)V", nullptr, 0, $method(WindowsFileChooserUI$1, init$, void, $WindowsFileChooserUI*, $String*, int32_t)},
		{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$1, getMinimumSize, $Dimension*)},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$1, getPreferredSize, $Dimension*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
		"installComponents",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$1",
		"javax.swing.JLabel",
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
	$loadClass(WindowsFileChooserUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsFileChooserUI$1));
	});
	return class$;
}

$Class* WindowsFileChooserUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com