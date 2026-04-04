#include <sun/awt/X11/XFileDialogPeer$2.h>
#include <java/awt/Choice.h>
#include <java/awt/Dimension.h>
#include <java/awt/TextField.h>
#include <sun/awt/X11/XFileDialogPeer.h>
#include <jcpp.h>

using $Choice = ::java::awt::Choice;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XFileDialogPeer = ::sun::awt::X11::XFileDialogPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XFileDialogPeer$2::init$($XFileDialogPeer* this$0) {
	$set(this, this$0, this$0);
	$Choice::init$();
}

$Dimension* XFileDialogPeer$2::getPreferredSize() {
	return $new($Dimension, 20, $nc($($nc(this->this$0->pathField)->getPreferredSize()))->height);
}

XFileDialogPeer$2::XFileDialogPeer$2() {
}

$Class* XFileDialogPeer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XFileDialogPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XFileDialogPeer$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XFileDialogPeer;)V", nullptr, 0, $method(XFileDialogPeer$2, init$, void, $XFileDialogPeer*)},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(XFileDialogPeer$2, getPreferredSize, $Dimension*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XFileDialogPeer",
		"init",
		"(Ljava/awt/FileDialog;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XFileDialogPeer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XFileDialogPeer$2",
		"java.awt.Choice",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XFileDialogPeer"
	};
	$loadClass(XFileDialogPeer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XFileDialogPeer$2));
	});
	return class$;
}

$Class* XFileDialogPeer$2::class$ = nullptr;

		} // X11
	} // awt
} // sun