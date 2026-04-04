#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxRenderer.h>
#include <com/sun/java/swing/plaf/windows/WindowsBorders$DashedBorder.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/basic/BasicComboBoxRenderer$UIResource.h>
#include <javax/swing/plaf/basic/BasicComboBoxRenderer.h>
#include <sun/swing/StringUIClientPropertyKey.h>
#include <jcpp.h>

#undef BORDER_KEY
#undef NULL_BORDER

using $WindowsBorders$DashedBorder = ::com::sun::java::swing::plaf::windows::WindowsBorders$DashedBorder;
using $WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder;
using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $BasicComboBoxRenderer$UIResource = ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource;
using $StringUIClientPropertyKey = ::sun::swing::StringUIClientPropertyKey;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$Object* WindowsComboBoxUI$WindowsComboBoxRenderer::BORDER_KEY = nullptr;
$Border* WindowsComboBoxUI$WindowsComboBoxRenderer::NULL_BORDER = nullptr;

void WindowsComboBoxUI$WindowsComboBoxRenderer::init$() {
	$useLocalObjectStack();
	$BasicComboBoxRenderer$UIResource::init$();
	$var($Insets, i, $$nc(getBorder())->getBorderInsets(this));
	setBorder($$new($EmptyBorder, 0, 2, 0, $nc(i)->right));
}

$Component* WindowsComboBoxUI$WindowsComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalObjectStack();
	$var($Component, rv, $BasicComboBoxRenderer$UIResource::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus));
	if ($instanceOf($JComponent, rv)) {
		$var($JComponent, component, $cast($JComponent, rv));
		if (index == -1 && isSelected) {
			$var($Border, border, component->getBorder());
			$var($Border, dashedBorder, $new($WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder, this, $($nc(list)->getForeground())));
			component->setBorder(dashedBorder);
			if (component->getClientProperty(WindowsComboBoxUI$WindowsComboBoxRenderer::BORDER_KEY) == nullptr) {
				component->putClientProperty(WindowsComboBoxUI$WindowsComboBoxRenderer::BORDER_KEY, (border == nullptr) ? WindowsComboBoxUI$WindowsComboBoxRenderer::NULL_BORDER : border);
			}
		} else if ($instanceOf($WindowsBorders$DashedBorder, $(component->getBorder()))) {
			$var($Object, storedBorder, component->getClientProperty(WindowsComboBoxUI$WindowsComboBoxRenderer::BORDER_KEY));
			if ($instanceOf($Border, storedBorder)) {
				component->setBorder(($equals(storedBorder, WindowsComboBoxUI$WindowsComboBoxRenderer::NULL_BORDER)) ? ($Border*)nullptr : $cast($Border, storedBorder));
			}
			component->putClientProperty(WindowsComboBoxUI$WindowsComboBoxRenderer::BORDER_KEY, nullptr);
		}
		if (index == -1) {
			component->setOpaque(false);
			component->setForeground($($nc(list)->getForeground()));
		} else {
			component->setOpaque(true);
		}
	}
	return rv;
}

void WindowsComboBoxUI$WindowsComboBoxRenderer::clinit$($Class* clazz) {
	$assignStatic(WindowsComboBoxUI$WindowsComboBoxRenderer::BORDER_KEY, $new($StringUIClientPropertyKey, "BORDER_KEY"_s));
	$assignStatic(WindowsComboBoxUI$WindowsComboBoxRenderer::NULL_BORDER, $new($EmptyBorder, 0, 0, 0, 0));
}

WindowsComboBoxUI$WindowsComboBoxRenderer::WindowsComboBoxUI$WindowsComboBoxRenderer() {
}

$Class* WindowsComboBoxUI$WindowsComboBoxRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BORDER_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsComboBoxUI$WindowsComboBoxRenderer, BORDER_KEY)},
		{"NULL_BORDER", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsComboBoxUI$WindowsComboBoxRenderer, NULL_BORDER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsComboBoxUI$WindowsComboBoxRenderer, init$, void)},
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC, $virtualMethod(WindowsComboBoxUI$WindowsComboBoxRenderer, getListCellRendererComponent, $Component*, $JList*, Object$*, int32_t, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI", "WindowsComboBoxRenderer", $PRIVATE | $STATIC},
		{"javax.swing.plaf.basic.BasicComboBoxRenderer$UIResource", "javax.swing.plaf.basic.BasicComboBoxRenderer", "UIResource", $PUBLIC | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer", "WindowsComboBoxDashedBorder", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer",
		"javax.swing.plaf.basic.BasicComboBoxRenderer$UIResource",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsComboBoxUI"
	};
	$loadClass(WindowsComboBoxUI$WindowsComboBoxRenderer, name, initialize, &classInfo$$, WindowsComboBoxUI$WindowsComboBoxRenderer::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsComboBoxUI$WindowsComboBoxRenderer));
	});
	return class$;
}

$Class* WindowsComboBoxUI$WindowsComboBoxRenderer::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com