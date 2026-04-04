#include <javax/swing/JList$4.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $JList = ::javax::swing::JList;

namespace javax {
	namespace swing {

void JList$4::init$($JList* this$0, $ObjectArray* val$listData) {
	$set(this, this$0, this$0);
	$set(this, val$listData, val$listData);
	$AbstractListModel::init$();
}

int32_t JList$4::getSize() {
	return $nc(this->val$listData)->length;
}

$Object* JList$4::getElementAt(int32_t i) {
	return $nc(this->val$listData)->get(i);
}

JList$4::JList$4() {
}

$Class* JList$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JList;", nullptr, $FINAL | $SYNTHETIC, $field(JList$4, this$0)},
		{"val$listData", "[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(JList$4, val$listData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JList;[Ljava/lang/Object;)V", nullptr, 0, $method(JList$4, init$, void, $JList*, $ObjectArray*)},
		{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(JList$4, getElementAt, $Object*, int32_t)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(JList$4, getSize, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JList",
		"setListData",
		"([Ljava/lang/Object;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JList$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JList$4",
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
	$loadClass(JList$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JList$4));
	});
	return class$;
}

$Class* JList$4::class$ = nullptr;

	} // swing
} // javax