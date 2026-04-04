#include <Test6802868.h>
#include <SwingTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/lang/Error.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $SwingTest = ::SwingTest;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;

void Test6802868::main($StringArray* args) {
	$load(Test6802868);
	$SwingTest::start(Test6802868::class$);
}

void Test6802868::init$($JFrame* frame) {
	$useLocalObjectStack();
	$var($JDesktopPane, desktop, $new($JDesktopPane));
	$set(this, frame, frame);
	$nc(this->frame)->add(desktop);
	$set(this, internal, $new($JInternalFrame, $($of(this)->getClass()->getName()), true, true, true, true));
	this->internal->setVisible(true);
	desktop->add(this->internal);
}

void Test6802868::firstAction() {
	this->internal->setMaximum(true);
}

void Test6802868::firstTest() {
	$set(this, size, this->internal->getSize());
	resizeFrame();
}

void Test6802868::firstValidation() {
	if ($$nc(this->internal->getSize())->equals(this->size)) {
		$throwNew($Error, "InternalFrame hasn\'t changed its size"_s);
	}
}

void Test6802868::secondAction() {
	this->internal->setIcon(true);
}

void Test6802868::secondTest() {
	$set(this, location, $$nc(this->internal->getDesktopIcon())->getLocation());
	resizeFrame();
}

void Test6802868::secondValidation() {
	$useLocalObjectStack();
	if ($$nc($$nc(this->internal->getDesktopIcon())->getLocation())->equals(this->location)) {
		$throwNew($Error, "JDesktopIcon hasn\'t moved"_s);
	}
}

void Test6802868::resizeFrame() {
	$var($Dimension, size, $nc(this->frame)->getSize());
	$nc(size)->width += 10;
	size->height += 10;
	this->frame->setSize(size);
}

Test6802868::Test6802868() {
}

$Class* Test6802868::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $FINAL, $field(Test6802868, frame)},
		{"internal", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $FINAL, $field(Test6802868, internal)},
		{"size", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(Test6802868, size)},
		{"location", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(Test6802868, location)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(Test6802868, init$, void, $JFrame*)},
		{"firstAction", "()V", nullptr, $PUBLIC, $virtualMethod(Test6802868, firstAction, void), "java.beans.PropertyVetoException"},
		{"firstTest", "()V", nullptr, $PUBLIC, $virtualMethod(Test6802868, firstTest, void)},
		{"firstValidation", "()V", nullptr, $PUBLIC, $virtualMethod(Test6802868, firstValidation, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6802868, main, void, $StringArray*), "java.lang.Throwable"},
		{"resizeFrame", "()V", nullptr, $PRIVATE, $method(Test6802868, resizeFrame, void)},
		{"secondAction", "()V", nullptr, $PUBLIC, $virtualMethod(Test6802868, secondAction, void), "java.beans.PropertyVetoException"},
		{"secondTest", "()V", nullptr, $PUBLIC, $virtualMethod(Test6802868, secondTest, void)},
		{"secondValidation", "()V", nullptr, $PUBLIC, $virtualMethod(Test6802868, secondValidation, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6802868",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test6802868, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6802868);
	});
	return class$;
}

$Class* Test6802868::class$ = nullptr;