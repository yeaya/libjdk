#include <MyList.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;

void MyList::init$() {
	$JList::init$();
}

int32_t MyList::locationToIndex($Point* location) {
	int32_t n = $JList::locationToIndex(location);
	$var($Rectangle, q, getCellBounds(n, n));
	return q != nullptr && q->contains(location) ? n : -1;
}

MyList::MyList() {
}

$Class* MyList::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MyList, init$, void)},
		{"locationToIndex", "(Ljava/awt/Point;)I", nullptr, $PUBLIC, $virtualMethod(MyList, locationToIndex, int32_t, $Point*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MyList",
		"javax.swing.JList",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MyList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MyList));
	});
	return class$;
}

$Class* MyList::class$ = nullptr;