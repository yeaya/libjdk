#include <sun/lwawt/LWTextAreaPeer$ScrollableJTextArea.h>
#include <java/awt/Component.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JViewport.h>
#include <sun/lwawt/LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate.h>
#include <sun/lwawt/LWTextAreaPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $LWTextAreaPeer = ::sun::lwawt::LWTextAreaPeer;
using $LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate = ::sun::lwawt::LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate;

namespace sun {
	namespace lwawt {

void LWTextAreaPeer$ScrollableJTextArea::init$($LWTextAreaPeer* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$JScrollPane::init$();
	$$nc(getViewport())->setView($$new($LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate, this));
}

$JTextArea* LWTextAreaPeer$ScrollableJTextArea::getView() {
	return $cast($JTextArea, $$nc(getViewport())->getView());
}

void LWTextAreaPeer$ScrollableJTextArea::setEnabled(bool enabled) {
	$useLocalObjectStack();
	$$nc($$nc(getViewport())->getView())->setEnabled(enabled);
	$JScrollPane::setEnabled(enabled);
}

LWTextAreaPeer$ScrollableJTextArea::LWTextAreaPeer$ScrollableJTextArea() {
}

$Class* LWTextAreaPeer$ScrollableJTextArea::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/LWTextAreaPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWTextAreaPeer$ScrollableJTextArea, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWTextAreaPeer;)V", nullptr, 0, $method(LWTextAreaPeer$ScrollableJTextArea, init$, void, $LWTextAreaPeer*)},
		{"getView", "()Ljavax/swing/JTextArea;", nullptr, $PUBLIC, $method(LWTextAreaPeer$ScrollableJTextArea, getView, $JTextArea*)},
		{"setEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(LWTextAreaPeer$ScrollableJTextArea, setEnabled, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWTextAreaPeer$ScrollableJTextArea", "sun.lwawt.LWTextAreaPeer", "ScrollableJTextArea", $FINAL},
		{"sun.lwawt.LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate", "sun.lwawt.LWTextAreaPeer$ScrollableJTextArea", "JTextAreaDelegate", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.LWTextAreaPeer$ScrollableJTextArea",
		"javax.swing.JScrollPane",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.LWTextAreaPeer"
	};
	$loadClass(LWTextAreaPeer$ScrollableJTextArea, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LWTextAreaPeer$ScrollableJTextArea));
	});
	return class$;
}

$Class* LWTextAreaPeer$ScrollableJTextArea::class$ = nullptr;

	} // lwawt
} // sun