#include <sun/swing/FilePane$2.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

void FilePane$2::init$($FilePane* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void FilePane$2::focusLost($FocusEvent* e) {
	if (!$nc(e)->isTemporary()) {
		this->this$0->applyEdit();
	}
}

FilePane$2::FilePane$2() {
}

$Class* FilePane$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/FilePane;)V", nullptr, 0, $method(FilePane$2, init$, void, $FilePane*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$2, focusLost, void, $FocusEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.FilePane",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$2",
		"java.awt.event.FocusAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.FilePane"
	};
	$loadClass(FilePane$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePane$2);
	});
	return class$;
}

$Class* FilePane$2::class$ = nullptr;

	} // swing
} // sun