#include <javax/swing/JList$3.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;

namespace javax {
	namespace swing {

void JList$3::init$() {
	$AbstractListModel::init$();
}

int32_t JList$3::getSize() {
	return 0;
}

$Object* JList$3::getElementAt(int32_t i) {
	$throwNew($IndexOutOfBoundsException, "No Data Model"_s);
	$shouldNotReachHere();
}

JList$3::JList$3() {
}

$Class* JList$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JList$3, init$, void)},
		{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(JList$3, getElementAt, $Object*, int32_t)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(JList$3, getSize, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JList",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JList$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JList$3",
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
		"javax.swing.JList"
	};
	$loadClass(JList$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JList$3));
	});
	return class$;
}

$Class* JList$3::class$ = nullptr;

	} // swing
} // javax