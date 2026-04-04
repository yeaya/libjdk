#include <sun/awt/shell/Win32ShellFolder2$1.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/Win32ShellFolder2$FolderDisposer.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$1::init$($Win32ShellFolder2* this$0, int32_t val$csidl) {
	$set(this, this$0, this$0);
	this->val$csidl = val$csidl;
}

$Object* Win32ShellFolder2$1::call() {
	if (this->val$csidl == 0) {
		this->this$0->initDesktop();
	} else {
		this->this$0->initSpecial($$nc(this->this$0->getDesktop())->getIShellFolder(), this->val$csidl);
		int64_t pIDL = $nc(this->this$0->disposer)->relativePIDL;
		$set(this->this$0, parent, this->this$0->getDesktop());
		while (pIDL != 0) {
			int64_t childPIDL = $Win32ShellFolder2::copyFirstPIDLEntry(pIDL);
			if (childPIDL != 0) {
				pIDL = $Win32ShellFolder2::getNextPIDLEntry(pIDL);
				if (pIDL != 0) {
					$set(this->this$0, parent, $Win32ShellFolder2::createShellFolder($cast($Win32ShellFolder2, this->this$0->parent), childPIDL));
				} else {
					$nc(this->this$0->disposer)->relativePIDL = childPIDL;
				}
			} else {
				break;
			}
		}
	}
	return nullptr;
}

Win32ShellFolder2$1::Win32ShellFolder2$1() {
}

$Class* Win32ShellFolder2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$1, this$0)},
		{"val$csidl", "I", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$1, val$csidl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;I)V", "()V", 0, $method(Win32ShellFolder2$1, init$, void, $Win32ShellFolder2*, int32_t)},
		{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$1, call, $Object*), "java.lang.InterruptedException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"<init>",
		"(I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$1);
	});
	return class$;
}

$Class* Win32ShellFolder2$1::class$ = nullptr;

		} // shell
	} // awt
} // sun