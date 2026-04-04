#include <sun/swing/FilePane$5.h>
#include <java/awt/Component.h>
#include <javax/swing/JList.h>
#include <javax/swing/event/ListDataEvent.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

void FilePane$5::init$($FilePane* this$0, $JList* val$list) {
	$set(this, this$0, this$0);
	$set(this, val$list, val$list);
}

void FilePane$5::intervalAdded($ListDataEvent* e) {
	this->this$0->updateListRowCount(this->val$list);
}

void FilePane$5::intervalRemoved($ListDataEvent* e) {
	this->this$0->updateListRowCount(this->val$list);
}

void FilePane$5::contentsChanged($ListDataEvent* e) {
	if (this->this$0->isShowing()) {
		this->this$0->clearSelection();
	}
	this->this$0->updateListRowCount(this->val$list);
}

FilePane$5::FilePane$5() {
}

$Class* FilePane$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$5, this$0)},
		{"val$list", "Ljavax/swing/JList;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$5, val$list)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/FilePane;Ljavax/swing/JList;)V", "()V", 0, $method(FilePane$5, init$, void, $FilePane*, $JList*)},
		{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$5, contentsChanged, void, $ListDataEvent*)},
		{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$5, intervalAdded, void, $ListDataEvent*)},
		{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$5, intervalRemoved, void, $ListDataEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.FilePane",
		"createList",
		"()Ljavax/swing/JPanel;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$5",
		"java.lang.Object",
		"javax.swing.event.ListDataListener",
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
	$loadClass(FilePane$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePane$5);
	});
	return class$;
}

$Class* FilePane$5::class$ = nullptr;

	} // swing
} // sun