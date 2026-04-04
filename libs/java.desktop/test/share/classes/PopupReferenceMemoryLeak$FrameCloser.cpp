#include <PopupReferenceMemoryLeak$FrameCloser.h>
#include <PopupReferenceMemoryLeak.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $PopupReferenceMemoryLeak = ::PopupReferenceMemoryLeak;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JFrame = ::javax::swing::JFrame;

void PopupReferenceMemoryLeak$FrameCloser::init$($PopupReferenceMemoryLeak* this$0, $JFrame* f) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	$set(this, frame, f);
}

void PopupReferenceMemoryLeak$FrameCloser::actionPerformed($ActionEvent* e) {
	if (this->frame != nullptr) {
		this->frame->setVisible(false);
		$nc(this->frame)->dispose();
		$set(this, frame, nullptr);
	}
}

PopupReferenceMemoryLeak$FrameCloser::PopupReferenceMemoryLeak$FrameCloser() {
}

$Class* PopupReferenceMemoryLeak$FrameCloser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LPopupReferenceMemoryLeak;", nullptr, $FINAL | $SYNTHETIC, $field(PopupReferenceMemoryLeak$FrameCloser, this$0)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, 0, $field(PopupReferenceMemoryLeak$FrameCloser, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPopupReferenceMemoryLeak;Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(PopupReferenceMemoryLeak$FrameCloser, init$, void, $PopupReferenceMemoryLeak*, $JFrame*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(PopupReferenceMemoryLeak$FrameCloser, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PopupReferenceMemoryLeak$FrameCloser", "PopupReferenceMemoryLeak", "FrameCloser", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PopupReferenceMemoryLeak$FrameCloser",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"PopupReferenceMemoryLeak"
	};
	$loadClass(PopupReferenceMemoryLeak$FrameCloser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PopupReferenceMemoryLeak$FrameCloser));
	});
	return class$;
}

$Class* PopupReferenceMemoryLeak$FrameCloser::class$ = nullptr;