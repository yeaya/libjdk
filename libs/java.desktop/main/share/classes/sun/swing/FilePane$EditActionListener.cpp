#include <sun/swing/FilePane$EditActionListener.h>
#include <java/awt/event/ActionEvent.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

void FilePane$EditActionListener::init$($FilePane* this$0) {
	$set(this, this$0, this$0);
}

void FilePane$EditActionListener::actionPerformed($ActionEvent* e) {
	this->this$0->applyEdit();
}

FilePane$EditActionListener::FilePane$EditActionListener() {
}

$Class* FilePane$EditActionListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$EditActionListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/FilePane;)V", nullptr, 0, $method(FilePane$EditActionListener, init$, void, $FilePane*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$EditActionListener, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$EditActionListener", "sun.swing.FilePane", "EditActionListener", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$EditActionListener",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.FilePane"
	};
	$loadClass(FilePane$EditActionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePane$EditActionListener);
	});
	return class$;
}

$Class* FilePane$EditActionListener::class$ = nullptr;

	} // swing
} // sun