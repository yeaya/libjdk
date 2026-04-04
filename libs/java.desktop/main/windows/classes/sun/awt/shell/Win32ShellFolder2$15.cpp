#include <sun/awt/shell/Win32ShellFolder2$15.h>
#include <java/awt/Image.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/Win32ShellFolder2$MultiResolutionIconImage.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolder2$MultiResolutionIconImage = ::sun::awt::shell::Win32ShellFolder2$MultiResolutionIconImage;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$15::init$($Win32ShellFolder2* this$0, bool val$getLargeIcon) {
	$set(this, this$0, this$0);
	this->val$getLargeIcon = val$getLargeIcon;
}

$Object* Win32ShellFolder2$15::call() {
	$useLocalObjectStack();
	$var($Image, newIcon, nullptr);
	$var($Image, newIcon2, nullptr);
	if (this->this$0->isLink()) {
		$var($Win32ShellFolder2, folder, this->this$0->getLinkLocation(false));
		if (folder != nullptr && folder->isLibrary()) {
			return folder->getIcon(this->val$getLargeIcon);
		}
	}
	bool var$0 = this->this$0->isFileSystem();
	if (var$0 || this->this$0->isLibrary()) {
		int64_t parentIShellIcon = (this->this$0->parent != nullptr) ? $cast($Win32ShellFolder2, this->this$0->parent)->getIShellIcon() : 0;
		int64_t relativePIDL = this->this$0->getRelativePIDL();
		int32_t index = $Win32ShellFolder2::getIconIndex(parentIShellIcon, relativePIDL);
		if (index > 0) {
			$var($Map, imageCache, nullptr);
			if (this->this$0->isLink()) {
				$assign(imageCache, this->val$getLargeIcon ? $Win32ShellFolder2::largeLinkedSystemImages : $Win32ShellFolder2::smallLinkedSystemImages);
			} else {
				$assign(imageCache, this->val$getLargeIcon ? $Win32ShellFolder2::largeSystemImages : $Win32ShellFolder2::smallSystemImages);
			}
			$assign(newIcon, $cast($Image, $nc(imageCache)->get($($Integer::valueOf(index)))));
			if (newIcon == nullptr) {
				int64_t hIcon = $Win32ShellFolder2::getIcon($(this->this$0->getAbsolutePath()), this->val$getLargeIcon);
				$assign(newIcon, $Win32ShellFolder2::makeIcon(hIcon));
				$Win32ShellFolder2::disposeIcon(hIcon);
				if (newIcon != nullptr) {
					imageCache->put($($Integer::valueOf(index)), newIcon);
				}
			}
			if (newIcon != nullptr) {
				if (this->this$0->isLink()) {
					$assign(imageCache, this->val$getLargeIcon ? $Win32ShellFolder2::smallLinkedSystemImages : $Win32ShellFolder2::largeLinkedSystemImages);
				} else {
					$assign(imageCache, this->val$getLargeIcon ? $Win32ShellFolder2::smallSystemImages : $Win32ShellFolder2::largeSystemImages);
				}
				$assign(newIcon2, $cast($Image, $nc(imageCache)->get($($Integer::valueOf(index)))));
				if (newIcon2 == nullptr) {
					int64_t hIcon = $Win32ShellFolder2::getIcon($(this->this$0->getAbsolutePath()), !this->val$getLargeIcon);
					$assign(newIcon2, $Win32ShellFolder2::makeIcon(hIcon));
					$Win32ShellFolder2::disposeIcon(hIcon);
				}
			}
			if (newIcon2 != nullptr) {
				$var($Map, bothIcons, $new($HashMap, 2));
				bothIcons->put($($Integer::valueOf(this->val$getLargeIcon ? 32 : 16)), newIcon);
				bothIcons->put($($Integer::valueOf(this->val$getLargeIcon ? 16 : 32)), newIcon2);
				$assign(newIcon, $new($Win32ShellFolder2$MultiResolutionIconImage, this->val$getLargeIcon ? 32 : 16, bothIcons));
			}
		}
	}
	int64_t var$1 = this->this$0->getParentIShellFolder();
	if ($Win32ShellFolder2::hiResIconAvailable(var$1, this->this$0->getRelativePIDL()) || newIcon == nullptr) {
		int32_t size = this->val$getLargeIcon ? 32 : 16;
		$assign(newIcon, this->this$0->getIcon(size, size));
	}
	if (newIcon == nullptr) {
		$assign(newIcon, $Win32ShellFolder2::access$001(this->this$0, this->val$getLargeIcon));
	}
	return newIcon;
}

Win32ShellFolder2$15::Win32ShellFolder2$15() {
}

$Class* Win32ShellFolder2$15::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$15, this$0)},
		{"val$getLargeIcon", "Z", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$15, val$getLargeIcon)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;Z)V", "()V", 0, $method(Win32ShellFolder2$15, init$, void, $Win32ShellFolder2*, bool)},
		{"call", "()Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$15, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"getIcon",
		"(Z)Ljava/awt/Image;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$15", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$15",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/awt/Image;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$15);
	});
	return class$;
}

$Class* Win32ShellFolder2$15::class$ = nullptr;

		} // shell
	} // awt
} // sun