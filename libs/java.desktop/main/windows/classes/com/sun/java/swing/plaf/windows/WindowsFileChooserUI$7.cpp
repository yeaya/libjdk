#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$7.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

#undef MAX_VALUE

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $JTextField = ::javax::swing::JTextField;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsFileChooserUI$7::init$($WindowsFileChooserUI* this$0, int32_t columns) {
	$set(this, this$0, this$0);
	$JTextField::init$(columns);
}

$Dimension* WindowsFileChooserUI$7::getMaximumSize() {
	return $new($Dimension, $Short::MAX_VALUE, $nc($($JTextField::getPreferredSize()))->height);
}

WindowsFileChooserUI$7::WindowsFileChooserUI$7() {
}

$Class* WindowsFileChooserUI$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$7, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;I)V", nullptr, 0, $method(WindowsFileChooserUI$7, init$, void, $WindowsFileChooserUI*, int32_t)},
		{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$7, getMaximumSize, $Dimension*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
		"installComponents",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$7",
		"javax.swing.JTextField",
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
	$loadClass(WindowsFileChooserUI$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsFileChooserUI$7));
	});
	return class$;
}

$Class* WindowsFileChooserUI$7::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com