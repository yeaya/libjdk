#include <sun/swing/FilePane$7.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollPane = ::javax::swing::JScrollPane;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

void FilePane$7::init$($FilePane* this$0) {
	$set(this, this$0, this$0);
	$ComponentAdapter::init$();
}

void FilePane$7::componentResized($ComponentEvent* e) {
	$useLocalObjectStack();
	$var($JScrollPane, sp, $cast($JScrollPane, $nc(e)->getComponent()));
	this->this$0->fixNameColumnWidth($nc($($$nc($nc(sp)->getViewport())->getSize()))->width);
	sp->removeComponentListener(this);
}

FilePane$7::FilePane$7() {
}

$Class* FilePane$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$7, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/FilePane;)V", nullptr, 0, $method(FilePane$7, init$, void, $FilePane*)},
		{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$7, componentResized, void, $ComponentEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.FilePane",
		"createDetailsView",
		"()Ljavax/swing/JPanel;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$7",
		"java.awt.event.ComponentAdapter",
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
	$loadClass(FilePane$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePane$7);
	});
	return class$;
}

$Class* FilePane$7::class$ = nullptr;

	} // swing
} // sun