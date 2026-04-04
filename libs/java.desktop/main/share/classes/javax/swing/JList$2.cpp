#include <javax/swing/JList$2.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AbstractListModel = ::javax::swing::AbstractListModel;

namespace javax {
	namespace swing {

void JList$2::init$($Vector* val$listData) {
	$set(this, val$listData, val$listData);
	$AbstractListModel::init$();
}

int32_t JList$2::getSize() {
	return $nc(this->val$listData)->size();
}

$Object* JList$2::getElementAt(int32_t i) {
	return $nc(this->val$listData)->elementAt(i);
}

JList$2::JList$2() {
}

$Class* JList$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$listData", "Ljava/util/Vector;", nullptr, $FINAL | $SYNTHETIC, $field(JList$2, val$listData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Vector;)V", nullptr, 0, $method(JList$2, init$, void, $Vector*)},
		{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(JList$2, getElementAt, $Object*, int32_t)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(JList$2, getSize, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JList",
		"<init>",
		"(Ljava/util/Vector;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JList$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JList$2",
		"javax.swing.AbstractListModel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/AbstractListModel<TE;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JList"
	};
	$loadClass(JList$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JList$2));
	});
	return class$;
}

$Class* JList$2::class$ = nullptr;

	} // swing
} // javax