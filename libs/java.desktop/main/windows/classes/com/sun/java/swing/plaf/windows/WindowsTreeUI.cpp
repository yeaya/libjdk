#include <com/sun/java/swing/plaf/windows/WindowsTreeUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsTreeUI$WindowsTreeCellRenderer.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <javax/swing/tree/TreeCellRenderer.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

#undef HALF_SIZE
#undef SIZE

using $WindowsTreeUI$WindowsTreeCellRenderer = ::com::sun::java::swing::plaf::windows::WindowsTreeUI$WindowsTreeCellRenderer;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsTreeUI::init$() {
	$BasicTreeUI::init$();
}

$ComponentUI* WindowsTreeUI::createUI($JComponent* c) {
	$init(WindowsTreeUI);
	return $new(WindowsTreeUI);
}

void WindowsTreeUI::ensureRowsAreVisible(int32_t beginRow, int32_t endRow) {
	$useLocalObjectStack();
	if (this->tree != nullptr && beginRow >= 0 && endRow < getRowCount(this->tree)) {
		$var($Rectangle, visRect, this->tree->getVisibleRect());
		if (beginRow == endRow) {
			$var($Rectangle, scrollBounds, getPathBounds(this->tree, $(getPathForRow(this->tree, beginRow))));
			if (scrollBounds != nullptr) {
				scrollBounds->x = $nc(visRect)->x;
				scrollBounds->width = visRect->width;
				$nc(this->tree)->scrollRectToVisible(scrollBounds);
			}
		} else {
			$var($Rectangle, beginRect, getPathBounds(this->tree, $(getPathForRow(this->tree, beginRow))));
			if (beginRect != nullptr) {
				$var($Rectangle, testRect, beginRect);
				int32_t beginY = beginRect->y;
				int32_t maxY = beginY + $nc(visRect)->height;
				for (int32_t counter = beginRow + 1; counter <= endRow; ++counter) {
					$assign(testRect, getPathBounds(this->tree, $(getPathForRow(this->tree, counter))));
					if (testRect != nullptr && (testRect->y + testRect->height) > maxY) {
						counter = endRow;
					}
				}
				if (testRect == nullptr) {
					return;
				}
				$nc(this->tree)->scrollRectToVisible($$new($Rectangle, visRect->x, beginY, 1, $nc(testRect)->y + $nc(testRect)->height - beginY));
			}
		}
	}
}

$TreeCellRenderer* WindowsTreeUI::createDefaultCellRenderer() {
	return $new($WindowsTreeUI$WindowsTreeCellRenderer, this);
}

WindowsTreeUI::WindowsTreeUI() {
}

$Class* WindowsTreeUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"HALF_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(WindowsTreeUI, HALF_SIZE)},
		{"SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(WindowsTreeUI, SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsTreeUI, init$, void)},
		{"createDefaultCellRenderer", "()Ljavax/swing/tree/TreeCellRenderer;", nullptr, $PROTECTED, $virtualMethod(WindowsTreeUI, createDefaultCellRenderer, $TreeCellRenderer*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsTreeUI, createUI, $ComponentUI*, $JComponent*)},
		{"ensureRowsAreVisible", "(II)V", nullptr, $PROTECTED, $virtualMethod(WindowsTreeUI, ensureRowsAreVisible, void, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsTreeUI$WindowsTreeCellRenderer", "com.sun.java.swing.plaf.windows.WindowsTreeUI", "WindowsTreeCellRenderer", $PUBLIC},
		{"com.sun.java.swing.plaf.windows.WindowsTreeUI$CollapsedIcon", "com.sun.java.swing.plaf.windows.WindowsTreeUI", "CollapsedIcon", $PUBLIC | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsTreeUI$ExpandedIcon", "com.sun.java.swing.plaf.windows.WindowsTreeUI", "ExpandedIcon", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsTreeUI",
		"javax.swing.plaf.basic.BasicTreeUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsTreeUI$WindowsTreeCellRenderer,com.sun.java.swing.plaf.windows.WindowsTreeUI$CollapsedIcon,com.sun.java.swing.plaf.windows.WindowsTreeUI$ExpandedIcon"
	};
	$loadClass(WindowsTreeUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsTreeUI);
	});
	return class$;
}

$Class* WindowsTreeUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com