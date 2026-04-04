#include <sun/awt/Win32FontManager$3.h>
#include <java/io/File.h>
#include <sun/awt/Win32FontManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32FontManager = ::sun::awt::Win32FontManager;

namespace sun {
	namespace awt {

void Win32FontManager$3::init$($Win32FontManager* this$0, $StringArray* val$dirs) {
	$set(this, this$0, this$0);
	$set(this, val$dirs, val$dirs);
}

$Object* Win32FontManager$3::run() {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->val$dirs)->length; ++i) {
		$init($File);
		$var($String, path, $str({this->val$dirs->get(i), $File::separator, "arial.ttf"_s}));
		$var($File, file, $new($File, path));
		if (file->exists()) {
			return $of(this->val$dirs->get(i));
		}
	}
	return nullptr;
}

Win32FontManager$3::Win32FontManager$3() {
}

$Class* Win32FontManager$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/Win32FontManager;", nullptr, $FINAL | $SYNTHETIC, $field(Win32FontManager$3, this$0)},
		{"val$dirs", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Win32FontManager$3, val$dirs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/Win32FontManager;[Ljava/lang/String;)V", "()V", 0, $method(Win32FontManager$3, init$, void, $Win32FontManager*, $StringArray*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Win32FontManager$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.Win32FontManager",
		"getDefaultPlatformFont",
		"()[Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.Win32FontManager$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.Win32FontManager$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.Win32FontManager"
	};
	$loadClass(Win32FontManager$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32FontManager$3);
	});
	return class$;
}

$Class* Win32FontManager$3::class$ = nullptr;

	} // awt
} // sun