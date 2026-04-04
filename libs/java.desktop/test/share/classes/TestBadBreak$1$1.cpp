#include <TestBadBreak$1$1.h>
#include <TestBadBreak$1.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $TestBadBreak$1 = ::TestBadBreak$1;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;

void TestBadBreak$1$1::init$($TestBadBreak$1* this$0, $String* arg0) {
	$set(this, this$0, this$0);
	$JLabel::init$(arg0);
}

void TestBadBreak$1$1::paintComponent($Graphics* g) {
	$var($Graphics2D, g2d, $nc(this->this$0->val$i1)->createGraphics());
	$JLabel::paintComponent(g2d);
	$nc(g2d)->dispose();
}

TestBadBreak$1$1::TestBadBreak$1$1() {
}

$Class* TestBadBreak$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestBadBreak$1;", nullptr, $FINAL | $SYNTHETIC, $field(TestBadBreak$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestBadBreak$1;Ljava/lang/String;)V", nullptr, 0, $method(TestBadBreak$1$1, init$, void, $TestBadBreak$1*, $String*)},
		{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(TestBadBreak$1$1, paintComponent, void, $Graphics*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestBadBreak$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestBadBreak$1", nullptr, nullptr, 0},
		{"TestBadBreak$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestBadBreak$1$1",
		"javax.swing.JLabel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestBadBreak"
	};
	$loadClass(TestBadBreak$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestBadBreak$1$1));
	});
	return class$;
}

$Class* TestBadBreak$1$1::class$ = nullptr;