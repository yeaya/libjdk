#include <TestObjectView$UserJComponent.h>
#include <TestObjectView.h>
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

$Color* TestObjectView$UserJComponent::USER_COLOR = nullptr;
$Color* TestObjectView$UserJComponent::TEST_COLOR = nullptr;

void TestObjectView$UserJComponent::init$() {
	$JComponent::init$();
	$set(this, color, TestObjectView$UserJComponent::USER_COLOR);
}

$Color* TestObjectView$UserJComponent::getUserColor() {
	$nc($System::out)->println("[user component] get user color"_s);
	return this->color;
}

void TestObjectView$UserJComponent::setUserColor($Color* color) {
	$nc($System::out)->println("[user component] set user color"_s);
	$set(this, color, color);
}

void TestObjectView$UserJComponent::clinit$($Class* clazz) {
	$assignStatic(TestObjectView$UserJComponent::USER_COLOR, $new($Color, 10, 20, 30));
	$assignStatic(TestObjectView$UserJComponent::TEST_COLOR, $new($Color, 15, 25, 35));
}

TestObjectView$UserJComponent::TestObjectView$UserJComponent() {
}

$Class* TestObjectView$UserJComponent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"USER_COLOR", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestObjectView$UserJComponent, USER_COLOR)},
		{"TEST_COLOR", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestObjectView$UserJComponent, TEST_COLOR)},
		{"color", "Ljava/awt/Color;", nullptr, 0, $field(TestObjectView$UserJComponent, color)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestObjectView$UserJComponent, init$, void)},
		{"getUserColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserJComponent, getUserColor, $Color*)},
		{"setUserColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserJComponent, setUserColor, void, $Color*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestObjectView$UserJComponent", "TestObjectView", "UserJComponent", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestObjectView$UserJComponent",
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
		"TestObjectView"
	};
	$loadClass(TestObjectView$UserJComponent, name, initialize, &classInfo$$, TestObjectView$UserJComponent::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestObjectView$UserJComponent));
	});
	return class$;
}

$Class* TestObjectView$UserJComponent::class$ = nullptr;