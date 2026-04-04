#include <com/sun/java/swing/plaf/windows/WindowsTableHeaderUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsTableHeaderUI$XPDefaultRenderer.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <jcpp.h>

using $WindowsTableHeaderUI$XPDefaultRenderer = ::com::sun::java::swing::plaf::windows::WindowsTableHeaderUI$XPDefaultRenderer;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTableHeaderUI = ::javax::swing::plaf::basic::BasicTableHeaderUI;
using $JTableHeader = ::javax::swing::table::JTableHeader;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$JTableHeader* WindowsTableHeaderUI::access$400(WindowsTableHeaderUI* x0) {
	$init(WindowsTableHeaderUI);
	return $nc(x0)->header;
}

$JTableHeader* WindowsTableHeaderUI::access$300(WindowsTableHeaderUI* x0) {
	$init(WindowsTableHeaderUI);
	return $nc(x0)->header;
}

$JTableHeader* WindowsTableHeaderUI::access$200(WindowsTableHeaderUI* x0) {
	$init(WindowsTableHeaderUI);
	return $nc(x0)->header;
}

$JTableHeader* WindowsTableHeaderUI::access$100(WindowsTableHeaderUI* x0) {
	$init(WindowsTableHeaderUI);
	return $nc(x0)->header;
}

int32_t WindowsTableHeaderUI::access$000(WindowsTableHeaderUI* x0) {
	$init(WindowsTableHeaderUI);
	return $nc(x0)->getRolloverColumn();
}

void WindowsTableHeaderUI::init$() {
	$BasicTableHeaderUI::init$();
}

$ComponentUI* WindowsTableHeaderUI::createUI($JComponent* h) {
	$init(WindowsTableHeaderUI);
	return $new(WindowsTableHeaderUI);
}

void WindowsTableHeaderUI::installUI($JComponent* c) {
	$BasicTableHeaderUI::installUI(c);
	if ($XPStyle::getXP() != nullptr) {
		$set(this, originalHeaderRenderer, $nc(this->header)->getDefaultRenderer());
		if ($instanceOf($UIResource, this->originalHeaderRenderer)) {
			$nc(this->header)->setDefaultRenderer($$new($WindowsTableHeaderUI$XPDefaultRenderer, this));
		}
	}
}

void WindowsTableHeaderUI::uninstallUI($JComponent* c) {
	if ($instanceOf($WindowsTableHeaderUI$XPDefaultRenderer, $($nc(this->header)->getDefaultRenderer()))) {
		$nc(this->header)->setDefaultRenderer(this->originalHeaderRenderer);
	}
	$BasicTableHeaderUI::uninstallUI(c);
}

void WindowsTableHeaderUI::rolloverColumnUpdated(int32_t oldColumn, int32_t newColumn) {
	$useLocalObjectStack();
	if ($XPStyle::getXP() != nullptr) {
		$nc(this->header)->repaint($($nc(this->header)->getHeaderRect(oldColumn)));
		$nc(this->header)->repaint($($nc(this->header)->getHeaderRect(newColumn)));
	}
}

WindowsTableHeaderUI::WindowsTableHeaderUI() {
}

$Class* WindowsTableHeaderUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"originalHeaderRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PRIVATE, $field(WindowsTableHeaderUI, originalHeaderRenderer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsTableHeaderUI, init$, void)},
		{"access$000", "(Lcom/sun/java/swing/plaf/windows/WindowsTableHeaderUI;)I", nullptr, $STATIC | $SYNTHETIC, $staticMethod(WindowsTableHeaderUI, access$000, int32_t, WindowsTableHeaderUI*)},
		{"access$100", "(Lcom/sun/java/swing/plaf/windows/WindowsTableHeaderUI;)Ljavax/swing/table/JTableHeader;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(WindowsTableHeaderUI, access$100, $JTableHeader*, WindowsTableHeaderUI*)},
		{"access$200", "(Lcom/sun/java/swing/plaf/windows/WindowsTableHeaderUI;)Ljavax/swing/table/JTableHeader;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(WindowsTableHeaderUI, access$200, $JTableHeader*, WindowsTableHeaderUI*)},
		{"access$300", "(Lcom/sun/java/swing/plaf/windows/WindowsTableHeaderUI;)Ljavax/swing/table/JTableHeader;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(WindowsTableHeaderUI, access$300, $JTableHeader*, WindowsTableHeaderUI*)},
		{"access$400", "(Lcom/sun/java/swing/plaf/windows/WindowsTableHeaderUI;)Ljavax/swing/table/JTableHeader;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(WindowsTableHeaderUI, access$400, $JTableHeader*, WindowsTableHeaderUI*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsTableHeaderUI, createUI, $ComponentUI*, $JComponent*)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsTableHeaderUI, installUI, void, $JComponent*)},
		{"rolloverColumnUpdated", "(II)V", nullptr, $PROTECTED, $virtualMethod(WindowsTableHeaderUI, rolloverColumnUpdated, void, int32_t, int32_t)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsTableHeaderUI, uninstallUI, void, $JComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$IconBorder", "com.sun.java.swing.plaf.windows.WindowsTableHeaderUI", "IconBorder", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$XPDefaultRenderer", "com.sun.java.swing.plaf.windows.WindowsTableHeaderUI", "XPDefaultRenderer", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI",
		"javax.swing.plaf.basic.BasicTableHeaderUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$1,com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$IconBorder,com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$XPDefaultRenderer"
	};
	$loadClass(WindowsTableHeaderUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsTableHeaderUI);
	});
	return class$;
}

$Class* WindowsTableHeaderUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com