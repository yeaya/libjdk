#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$MaximizeButton.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$FrameButton.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $MotifInternalFrameTitlePane = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane;
using $MotifInternalFrameTitlePane$FrameButton = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton;
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
					namespace motif {

void MotifInternalFrameTitlePane$MaximizeButton::init$($MotifInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$MotifInternalFrameTitlePane$FrameButton::init$(this$0);
}

void MotifInternalFrameTitlePane$MaximizeButton::paintComponent($Graphics* g) {
	$MotifInternalFrameTitlePane$FrameButton::paintComponent(g);
	int32_t max = 19 - 5;
	bool isMaxed = $$nc($MotifInternalFrameTitlePane::access$200(this->this$0))->isMaximum();
	$nc(g)->setColor(isMaxed ? this->this$0->shadow : this->this$0->highlight);
	g->drawLine(4, 4, 4, max);
	g->drawLine(4, 4, max, 4);
	g->setColor(isMaxed ? this->this$0->highlight : this->this$0->shadow);
	g->drawLine(5, max, max, max);
	g->drawLine(max, 5, max, max);
}

MotifInternalFrameTitlePane$MaximizeButton::MotifInternalFrameTitlePane$MaximizeButton() {
}

$Class* MotifInternalFrameTitlePane$MaximizeButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameTitlePane$MaximizeButton, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;)V", nullptr, $PRIVATE, $method(MotifInternalFrameTitlePane$MaximizeButton, init$, void, $MotifInternalFrameTitlePane*)},
		{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(MotifInternalFrameTitlePane$MaximizeButton, paintComponent, void, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$MaximizeButton", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "MaximizeButton", $PRIVATE},
		{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$FrameButton", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "FrameButton", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$MaximizeButton",
		"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$FrameButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane"
	};
	$loadClass(MotifInternalFrameTitlePane$MaximizeButton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifInternalFrameTitlePane$MaximizeButton));
	});
	return class$;
}

$Class* MotifInternalFrameTitlePane$MaximizeButton::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com