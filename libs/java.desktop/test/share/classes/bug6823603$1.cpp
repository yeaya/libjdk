#include <bug6823603$1.h>
#include <bug6823603.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/swing/AbstractListModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractListModel = ::javax::swing::AbstractListModel;

void bug6823603$1::init$() {
	$AbstractListModel::init$();
}

int32_t bug6823603$1::getSize() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Object* bug6823603$1::getElementAt(int32_t index) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bug6823603$1::bug6823603$1() {
}

$Class* bug6823603$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6823603$1, init$, void)},
		{"getElementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(bug6823603$1, getElementAt, $Object*, int32_t)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(bug6823603$1, getSize, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6823603",
		"testRawSignatures",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6823603$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6823603$1",
		"javax.swing.AbstractListModel",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6823603"
	};
	$loadClass(bug6823603$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6823603$1));
	});
	return class$;
}

$Class* bug6823603$1::class$ = nullptr;