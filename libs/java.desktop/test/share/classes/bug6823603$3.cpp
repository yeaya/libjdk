#include <bug6823603$3.h>
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

void bug6823603$3::init$() {
	$AbstractListModel::init$();
}

int32_t bug6823603$3::getSize() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Object* bug6823603$3::getElementAt(int32_t index) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bug6823603$3::bug6823603$3() {
}

$Class* bug6823603$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6823603$3, init$, void)},
		{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(bug6823603$3, getElementAt, $Object*, int32_t)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(bug6823603$3, getSize, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6823603",
		"testGenericSignatures",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6823603$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6823603$3",
		"javax.swing.AbstractListModel",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/AbstractListModel<TE;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6823603"
	};
	$loadClass(bug6823603$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6823603$3));
	});
	return class$;
}

$Class* bug6823603$3::class$ = nullptr;