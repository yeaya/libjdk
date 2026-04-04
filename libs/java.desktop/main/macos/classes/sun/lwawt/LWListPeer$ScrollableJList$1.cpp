#include <sun/lwawt/LWListPeer$ScrollableJList$1.h>
#include <javax/swing/DefaultListModel.h>
#include <sun/lwawt/LWListPeer$ScrollableJList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $LWListPeer$ScrollableJList = ::sun::lwawt::LWListPeer$ScrollableJList;

namespace sun {
	namespace lwawt {

void LWListPeer$ScrollableJList$1::init$($LWListPeer$ScrollableJList* this$1) {
	$set(this, this$1, this$1);
	$DefaultListModel::init$();
}

void LWListPeer$ScrollableJList$1::add(int32_t index, $String* element) {
	if (index == -1) {
		addElement(element);
	} else {
		$DefaultListModel::add(index, element);
	}
}

void LWListPeer$ScrollableJList$1::add(int32_t index, Object$* element) {
	this->add(index, $cast($String, element));
}

LWListPeer$ScrollableJList$1::LWListPeer$ScrollableJList$1() {
}

$Class* LWListPeer$ScrollableJList$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/lwawt/LWListPeer$ScrollableJList;", nullptr, $FINAL | $SYNTHETIC, $field(LWListPeer$ScrollableJList$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWListPeer$ScrollableJList;)V", nullptr, 0, $method(LWListPeer$ScrollableJList$1, init$, void, $LWListPeer$ScrollableJList*)},
		{"add", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(LWListPeer$ScrollableJList$1, add, void, int32_t, $String*)},
		{"add", "(ILjava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LWListPeer$ScrollableJList$1, add, void, int32_t, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.LWListPeer$ScrollableJList",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWListPeer$ScrollableJList", "sun.lwawt.LWListPeer", "ScrollableJList", $FINAL},
		{"sun.lwawt.LWListPeer$ScrollableJList$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.LWListPeer$ScrollableJList$1",
		"javax.swing.DefaultListModel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/DefaultListModel<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.LWListPeer"
	};
	$loadClass(LWListPeer$ScrollableJList$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LWListPeer$ScrollableJList$1));
	});
	return class$;
}

$Class* LWListPeer$ScrollableJList$1::class$ = nullptr;

	} // lwawt
} // sun