#include <sun/awt/Win32FontManager$4.h>
#include <java/io/File.h>
#include <java/io/FilenameFilter.h>
#include <sun/awt/Win32FontManager.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32FontManager = ::sun::awt::Win32FontManager;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace awt {

void Win32FontManager$4::init$($String* val$pathName) {
	$set(this, val$pathName, val$pathName);
}

$Object* Win32FontManager$4::run() {
	$useLocalObjectStack();
	$var($File, f1, $new($File, this->val$pathName));
	$var($StringArray, ls, f1->list($($$nc($SunFontManager::getInstance())->getTrueTypeFilter())));
	if (ls == nullptr) {
		return nullptr;
	}
	for (int32_t i = 0; i < $nc(ls)->length; ++i) {
		$var($File, fontFile, $new($File, f1, ls->get(i)));
		$Win32FontManager::registerFontWithPlatform($(fontFile->getAbsolutePath()));
	}
	return nullptr;
}

Win32FontManager$4::Win32FontManager$4() {
}

$Class* Win32FontManager$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$pathName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Win32FontManager$4, val$pathName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(Win32FontManager$4, init$, void, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Win32FontManager$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.Win32FontManager",
		"registerJREFontsForPrinting",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.Win32FontManager$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.Win32FontManager$4",
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
	$loadClass(Win32FontManager$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32FontManager$4);
	});
	return class$;
}

$Class* Win32FontManager$4::class$ = nullptr;

	} // awt
} // sun