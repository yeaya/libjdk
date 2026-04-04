#include <TestAbstractRegionPainter$UserJComponent.h>
#include <TestAbstractRegionPainter.h>
#include <java/awt/Color.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef TEST_COLOR
#undef USER_COLOR

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

$Color* TestAbstractRegionPainter$UserJComponent::USER_COLOR = nullptr;
$Color* TestAbstractRegionPainter$UserJComponent::TEST_COLOR = nullptr;

void TestAbstractRegionPainter$UserJComponent::init$() {
	$JComponent::init$();
	$set(this, color, TestAbstractRegionPainter$UserJComponent::USER_COLOR);
}

$Color* TestAbstractRegionPainter$UserJComponent::getUserColor() {
	return this->color;
}

void TestAbstractRegionPainter$UserJComponent::setUserColor($Color* color) {
	$set(this, color, color);
}

void TestAbstractRegionPainter$UserJComponent::clinit$($Class* clazz) {
	$assignStatic(TestAbstractRegionPainter$UserJComponent::USER_COLOR, $new($Color, 10, 20, 30));
	$assignStatic(TestAbstractRegionPainter$UserJComponent::TEST_COLOR, $new($Color, 15, 25, 35));
}

TestAbstractRegionPainter$UserJComponent::TestAbstractRegionPainter$UserJComponent() {
}

$Class* TestAbstractRegionPainter$UserJComponent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"USER_COLOR", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestAbstractRegionPainter$UserJComponent, USER_COLOR)},
		{"TEST_COLOR", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestAbstractRegionPainter$UserJComponent, TEST_COLOR)},
		{"color", "Ljava/awt/Color;", nullptr, 0, $field(TestAbstractRegionPainter$UserJComponent, color)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestAbstractRegionPainter$UserJComponent, init$, void)},
		{"getUserColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(TestAbstractRegionPainter$UserJComponent, getUserColor, $Color*)},
		{"setUserColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(TestAbstractRegionPainter$UserJComponent, setUserColor, void, $Color*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestAbstractRegionPainter$UserJComponent", "TestAbstractRegionPainter", "UserJComponent", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestAbstractRegionPainter$UserJComponent",
		"javax.swing.JComponent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestAbstractRegionPainter"
	};
	$loadClass(TestAbstractRegionPainter$UserJComponent, name, initialize, &classInfo$$, TestAbstractRegionPainter$UserJComponent::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestAbstractRegionPainter$UserJComponent));
	});
	return class$;
}

$Class* TestAbstractRegionPainter$UserJComponent::class$ = nullptr;