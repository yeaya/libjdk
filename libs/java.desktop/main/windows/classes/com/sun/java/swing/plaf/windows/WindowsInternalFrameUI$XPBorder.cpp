#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameUI$XPBorder.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

#undef ACTIVE
#undef INACTIVE
#undef WP_FRAMEBOTTOM
#undef WP_FRAMELEFT
#undef WP_FRAMERIGHT

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsInternalFrameUI = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameUI;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsInternalFrameUI$XPBorder::init$($WindowsInternalFrameUI* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$AbstractBorder::init$();
	$init($TMSchema$Part);
	$set(this, leftSkin, $nc(this->this$0->xp)->getSkin($($WindowsInternalFrameUI::access$000(this->this$0)), $TMSchema$Part::WP_FRAMELEFT));
	$set(this, rightSkin, $nc(this->this$0->xp)->getSkin($($WindowsInternalFrameUI::access$100(this->this$0)), $TMSchema$Part::WP_FRAMERIGHT));
	$set(this, bottomSkin, $nc(this->this$0->xp)->getSkin($($WindowsInternalFrameUI::access$200(this->this$0)), $TMSchema$Part::WP_FRAMEBOTTOM));
}

void WindowsInternalFrameUI$XPBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalObjectStack();
	$init($TMSchema$State);
	$TMSchema$State* state = $nc($cast($JInternalFrame, c))->isSelected() ? $TMSchema$State::ACTIVE : $TMSchema$State::INACTIVE;
	int32_t topBorderHeight = ($WindowsInternalFrameUI::access$300(this->this$0) != nullptr) ? $nc($($$nc($WindowsInternalFrameUI::access$400(this->this$0))->getSize()))->height : 0;
	int32_t var$0 = height - $nc(this->bottomSkin)->getHeight();
	$nc(this->bottomSkin)->paintSkin(g, 0, var$0, width, this->bottomSkin->getHeight(), state);
	int32_t var$1 = topBorderHeight - 1;
	int32_t var$2 = $nc(this->leftSkin)->getWidth();
	$nc(this->leftSkin)->paintSkin(g, 0, var$1, var$2, height - topBorderHeight - $nc(this->bottomSkin)->getHeight() + 2, state);
	int32_t var$3 = width - $nc(this->rightSkin)->getWidth();
	int32_t var$4 = topBorderHeight - 1;
	int32_t var$5 = this->rightSkin->getWidth();
	$nc(this->rightSkin)->paintSkin(g, var$3, var$4, var$5, height - topBorderHeight - $nc(this->bottomSkin)->getHeight() + 2, state);
}

$Insets* WindowsInternalFrameUI$XPBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->top = 4;
	insets->left = $nc(this->leftSkin)->getWidth();
	insets->right = $nc(this->rightSkin)->getWidth();
	insets->bottom = $nc(this->bottomSkin)->getHeight();
	return insets;
}

bool WindowsInternalFrameUI$XPBorder::isBorderOpaque() {
	return true;
}

WindowsInternalFrameUI$XPBorder::WindowsInternalFrameUI$XPBorder() {
}

$Class* WindowsInternalFrameUI$XPBorder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsInternalFrameUI$XPBorder, this$0)},
		{"leftSkin", "Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, $PRIVATE, $field(WindowsInternalFrameUI$XPBorder, leftSkin)},
		{"rightSkin", "Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, $PRIVATE, $field(WindowsInternalFrameUI$XPBorder, rightSkin)},
		{"bottomSkin", "Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, $PRIVATE, $field(WindowsInternalFrameUI$XPBorder, bottomSkin)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameUI;)V", nullptr, $PRIVATE, $method(WindowsInternalFrameUI$XPBorder, init$, void, $WindowsInternalFrameUI*)},
		{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(WindowsInternalFrameUI$XPBorder, getBorderInsets, $Insets*, $Component*, $Insets*)},
		{"isBorderOpaque", "()Z", nullptr, $PUBLIC, $virtualMethod(WindowsInternalFrameUI$XPBorder, isBorderOpaque, bool)},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(WindowsInternalFrameUI$XPBorder, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsInternalFrameUI$XPBorder", "com.sun.java.swing.plaf.windows.WindowsInternalFrameUI", "XPBorder", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsInternalFrameUI$XPBorder",
		"javax.swing.border.AbstractBorder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsInternalFrameUI"
	};
	$loadClass(WindowsInternalFrameUI$XPBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsInternalFrameUI$XPBorder));
	});
	return class$;
}

$Class* WindowsInternalFrameUI$XPBorder::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com