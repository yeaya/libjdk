#include <sun/awt/windows/WFileDialogPeer$1.h>
#include <java/awt/FileDialog.h>
#include <sun/awt/windows/WFileDialogPeer.h>
#include <jcpp.h>

using $FileDialog = ::java::awt::FileDialog;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WFileDialogPeer = ::sun::awt::windows::WFileDialogPeer;

namespace sun {
	namespace awt {
		namespace windows {

void WFileDialogPeer$1::init$($WFileDialogPeer* this$0, $FileDialog* val$fileDialog) {
	$set(this, this$0, this$0);
	$set(this, val$fileDialog, val$fileDialog);
}

void WFileDialogPeer$1::run() {
	$nc(this->val$fileDialog)->setVisible(false);
}

WFileDialogPeer$1::WFileDialogPeer$1() {
}

$Class* WFileDialogPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WFileDialogPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WFileDialogPeer$1, this$0)},
		{"val$fileDialog", "Ljava/awt/FileDialog;", nullptr, $FINAL | $SYNTHETIC, $field(WFileDialogPeer$1, val$fileDialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WFileDialogPeer;Ljava/awt/FileDialog;)V", "()V", 0, $method(WFileDialogPeer$1, init$, void, $WFileDialogPeer*, $FileDialog*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WFileDialogPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WFileDialogPeer",
		"handleSelected",
		"([C)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WFileDialogPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WFileDialogPeer$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.WFileDialogPeer"
	};
	$loadClass(WFileDialogPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WFileDialogPeer$1);
	});
	return class$;
}

$Class* WFileDialogPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun