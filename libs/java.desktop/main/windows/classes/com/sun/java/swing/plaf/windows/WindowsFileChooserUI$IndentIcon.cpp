#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$IndentIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsFileChooserUI$IndentIcon::init$($WindowsFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$set(this, icon, nullptr);
	this->depth = 0;
}

void WindowsFileChooserUI$IndentIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	if ($$nc($nc(c)->getComponentOrientation())->isLeftToRight()) {
		$nc(this->icon)->paintIcon(c, g, x + this->depth * 10, y);
	} else {
		$nc(this->icon)->paintIcon(c, g, x, y);
	}
}

int32_t WindowsFileChooserUI$IndentIcon::getIconWidth() {
	return $nc(this->icon)->getIconWidth() + this->depth * 10;
}

int32_t WindowsFileChooserUI$IndentIcon::getIconHeight() {
	return $nc(this->icon)->getIconHeight();
}

WindowsFileChooserUI$IndentIcon::WindowsFileChooserUI$IndentIcon() {
}

$Class* WindowsFileChooserUI$IndentIcon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$IndentIcon, this$0)},
		{"icon", "Ljavax/swing/Icon;", nullptr, 0, $field(WindowsFileChooserUI$IndentIcon, icon)},
		{"depth", "I", nullptr, 0, $field(WindowsFileChooserUI$IndentIcon, depth)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)V", nullptr, 0, $method(WindowsFileChooserUI$IndentIcon, init$, void, $WindowsFileChooserUI*)},
		{"getIconHeight", "()I", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$IndentIcon, getIconHeight, int32_t)},
		{"getIconWidth", "()I", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$IndentIcon, getIconWidth, int32_t)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$IndentIcon, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$IndentIcon", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "IndentIcon", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$IndentIcon",
		"java.lang.Object",
		"javax.swing.Icon",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
	};
	$loadClass(WindowsFileChooserUI$IndentIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileChooserUI$IndentIcon);
	});
	return class$;
}

$Class* WindowsFileChooserUI$IndentIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com