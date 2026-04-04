#include <bug8054543.h>
#include <bug8054543$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef GREEN

using $bug8054543$1 = ::bug8054543$1;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JButton = ::javax::swing::JButton;
using $JLayer = ::javax::swing::JLayer;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Border = ::javax::swing::border::Border;

void bug8054543::init$() {
	$useLocalObjectStack();
	$var($JLayer, layer, $new($JLayer));
	$init($Color);
	$var($Border, border, $BorderFactory::createLineBorder($Color::GREEN));
	$var($JButton, view, $new($JButton, "JButton"_s));
	layer->setBorder(border);
	check($(layer->getBorder()), nullptr);
	layer->setBorder(nullptr);
	check($(layer->getBorder()), nullptr);
	layer->setView(view);
	$var($Object, var$0, layer->getBorder());
	check(var$0, $(view->getBorder()));
	layer->setBorder(border);
	check(border, $(view->getBorder()));
	layer->setBorder(nullptr);
	$var($Object, var$1, layer->getBorder());
	check(var$1, $(view->getBorder()));
}

void bug8054543::check(Object$* o1, Object$* o2) {
	if (!$equals(o1, o2)) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

void bug8054543::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug8054543$1));
}

bug8054543::bug8054543() {
}

$Class* bug8054543::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8054543, init$, void)},
		{"check", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(bug8054543, check, void, Object$*, Object$*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(bug8054543, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8054543$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8054543",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8054543$1"
	};
	$loadClass(bug8054543, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8054543);
	});
	return class$;
}

$Class* bug8054543::class$ = nullptr;