#include <bug6612531.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ScrollPaneLayout.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $ScrollPaneLayout = ::javax::swing::ScrollPaneLayout;

void bug6612531::init$() {
}

void bug6612531::main($StringArray* args) {
	$useLocalObjectStack();
	$var($ScrollPaneLayout, c, $new($ScrollPaneLayout));
	$var($JViewport, vp, $new($JViewport));
	c->addLayoutComponent("VIEWPORT"_s, vp);
	c->preferredLayoutSize($$new($JScrollPane));
	$nc($System::out)->println("Test passed"_s);
}

bug6612531::bug6612531() {
}

$Class* bug6612531::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6612531, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6612531, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6612531",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6612531, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6612531);
	});
	return class$;
}

$Class* bug6612531::class$ = nullptr;