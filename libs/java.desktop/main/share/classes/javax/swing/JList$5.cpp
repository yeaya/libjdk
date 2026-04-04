#include <javax/swing/JList$5.h>
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
using $JList = ::javax::swing::JList;

namespace javax {
	namespace swing {

void JList$5::init$($JList* this$0, $Vector* val$listData) {
	$set(this, this$0, this$0);
	$set(this, val$listData, val$listData);
	$AbstractListModel::init$();
}

int32_t JList$5::getSize() {
	return $nc(this->val$listData)->size();
}

$Object* JList$5::getElementAt(int32_t i) {
	return $nc(this->val$listData)->elementAt(i);
}

JList$5::JList$5() {
}

$Class* JList$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JList;", nullptr, $FINAL | $SYNTHETIC, $field(JList$5, this$0)},
		{"val$listData", "Ljava/util/Vector;", nullptr, $FINAL | $SYNTHETIC, $field(JList$5, val$listData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JList;Ljava/util/Vector;)V", nullptr, 0, $method(JList$5, init$, void, $JList*, $Vector*)},
		{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(JList$5, getElementAt, $Object*, int32_t)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(JList$5, getSize, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JList",
		"setListData",
		"(Ljava/util/Vector;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JList$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JList$5",
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
	$loadClass(JList$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JList$5));
	});
	return class$;
}

$Class* JList$5::class$ = nullptr;

	} // swing
} // javax