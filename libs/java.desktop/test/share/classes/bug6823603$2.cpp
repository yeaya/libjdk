#include <bug6823603$2.h>
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

void bug6823603$2::init$() {
	$AbstractListModel::init$();
}

int32_t bug6823603$2::getSize() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Object* bug6823603$2::getElementAt(int32_t index) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bug6823603$2::bug6823603$2() {
}

$Class* bug6823603$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6823603$2, init$, void)},
		{"getElementAt", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(bug6823603$2, getElementAt, $Object*, int32_t)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(bug6823603$2, getSize, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6823603",
		"testGenericSignatures",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6823603$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6823603$2",
		"javax.swing.AbstractListModel",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/AbstractListModel<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6823603"
	};
	$loadClass(bug6823603$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6823603$2));
	});
	return class$;
}

$Class* bug6823603$2::class$ = nullptr;