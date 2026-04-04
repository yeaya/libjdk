#include <sun/awt/X11/XTextAreaPeer$AWTTextPane$XAWTScrollBar.h>
#include <java/awt/Component.h>
#include <javax/swing/JScrollPane$ScrollBar.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <sun/awt/X11/XTextAreaPeer$AWTTextPane.h>
#include <sun/awt/X11/XTextAreaPeer$XAWTScrollBarUI.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollPane$ScrollBar = ::javax::swing::JScrollPane$ScrollBar;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $XTextAreaPeer$AWTTextPane = ::sun::awt::X11::XTextAreaPeer$AWTTextPane;
using $XTextAreaPeer$XAWTScrollBarUI = ::sun::awt::X11::XTextAreaPeer$XAWTScrollBarUI;

namespace sun {
	namespace awt {
		namespace X11 {

void XTextAreaPeer$AWTTextPane$XAWTScrollBar::init$($XTextAreaPeer$AWTTextPane* this$1, int32_t i) {
	$set(this, this$1, this$1);
	$JScrollPane$ScrollBar::init$(this$1, i);
	setFocusable(false);
}

void XTextAreaPeer$AWTTextPane$XAWTScrollBar::updateUI() {
	$var($ComponentUI, ui, $new($XTextAreaPeer$XAWTScrollBarUI, this->this$1->this$0));
	setUI(ui);
}

XTextAreaPeer$AWTTextPane$XAWTScrollBar::XTextAreaPeer$AWTTextPane$XAWTScrollBar() {
}

$Class* XTextAreaPeer$AWTTextPane$XAWTScrollBar::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/awt/X11/XTextAreaPeer$AWTTextPane;", nullptr, $FINAL | $SYNTHETIC, $field(XTextAreaPeer$AWTTextPane$XAWTScrollBar, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XTextAreaPeer$AWTTextPane;I)V", nullptr, 0, $method(XTextAreaPeer$AWTTextPane$XAWTScrollBar, init$, void, $XTextAreaPeer$AWTTextPane*, int32_t)},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(XTextAreaPeer$AWTTextPane$XAWTScrollBar, updateUI, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTextAreaPeer$AWTTextPane", "sun.awt.X11.XTextAreaPeer", "AWTTextPane", $PRIVATE},
		{"sun.awt.X11.XTextAreaPeer$AWTTextPane$XAWTScrollBar", "sun.awt.X11.XTextAreaPeer$AWTTextPane", "XAWTScrollBar", $FINAL},
		{"javax.swing.JScrollPane$ScrollBar", "javax.swing.JScrollPane", "ScrollBar", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.X11.XTextAreaPeer$AWTTextPane$XAWTScrollBar",
		"javax.swing.JScrollPane$ScrollBar",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XTextAreaPeer"
	};
	$loadClass(XTextAreaPeer$AWTTextPane$XAWTScrollBar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XTextAreaPeer$AWTTextPane$XAWTScrollBar));
	});
	return class$;
}

$Class* XTextAreaPeer$AWTTextPane$XAWTScrollBar::class$ = nullptr;

		} // X11
	} // awt
} // sun