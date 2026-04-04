#include <TestObjectView$UserObjectView.h>
#include <TestObjectView.h>
#include <java/awt/Component.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/html/ObjectView.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $ObjectView = ::javax::swing::text::html::ObjectView;

void TestObjectView$UserObjectView::init$($Element* elem) {
	$ObjectView::init$(elem);
}

$Component* TestObjectView$UserObjectView::createComponent() {
	return $ObjectView::createComponent();
}

TestObjectView$UserObjectView::TestObjectView$UserObjectView() {
}

$Class* TestObjectView$UserObjectView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(TestObjectView$UserObjectView, init$, void, $Element*)},
		{"createComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserObjectView, createComponent, $Component*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestObjectView$UserObjectView", "TestObjectView", "UserObjectView", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestObjectView$UserObjectView",
		"javax.swing.text.html.ObjectView",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestObjectView"
	};
	$loadClass(TestObjectView$UserObjectView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestObjectView$UserObjectView);
	});
	return class$;
}

$Class* TestObjectView$UserObjectView::class$ = nullptr;