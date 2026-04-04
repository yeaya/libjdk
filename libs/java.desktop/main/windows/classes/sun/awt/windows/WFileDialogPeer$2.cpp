#include <sun/awt/windows/WFileDialogPeer$2.h>
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

void WFileDialogPeer$2::init$($WFileDialogPeer* this$0, $FileDialog* val$fileDialog) {
	$set(this, this$0, this$0);
	$set(this, val$fileDialog, val$fileDialog);
}

void WFileDialogPeer$2::run() {
	$nc(this->val$fileDialog)->setVisible(false);
}

WFileDialogPeer$2::WFileDialogPeer$2() {
}

$Class* WFileDialogPeer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WFileDialogPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WFileDialogPeer$2, this$0)},
		{"val$fileDialog", "Ljava/awt/FileDialog;", nullptr, $FINAL | $SYNTHETIC, $field(WFileDialogPeer$2, val$fileDialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WFileDialogPeer;Ljava/awt/FileDialog;)V", "()V", 0, $method(WFileDialogPeer$2, init$, void, $WFileDialogPeer*, $FileDialog*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WFileDialogPeer$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WFileDialogPeer",
		"handleCancel",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WFileDialogPeer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WFileDialogPeer$2",
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
	$loadClass(WFileDialogPeer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WFileDialogPeer$2);
	});
	return class$;
}

$Class* WFileDialogPeer$2::class$ = nullptr;

		} // windows
	} // awt
} // sun