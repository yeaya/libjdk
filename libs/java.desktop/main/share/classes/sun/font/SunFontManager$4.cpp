#include <sun/font/SunFontManager$4.h>
#include <java/io/File.h>
#include <java/io/FilenameFilter.h>
#include <java/util/ArrayList.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef STR_ARRAY

using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

void SunFontManager$4::init$($SunFontManager* this$0, $FilenameFilter* val$filter) {
	$set(this, this$0, this$0);
	$set(this, val$filter, val$filter);
}

$Object* SunFontManager$4::run() {
	$useLocalObjectStack();
	if ($nc(this->this$0->pathDirs)->length == 1) {
		$var($File, dir, $new($File, this->this$0->pathDirs->get(0)));
		$var($StringArray, files, dir->list(this->val$filter));
		if (files == nullptr) {
			return $new($StringArray, 0);
		}
		for (int32_t f = 0; f < $nc(files)->length; ++f) {
			files->set(f, $($nc(files->get(f))->toLowerCase()));
		}
		return files;
	} else {
		$var($ArrayList, fileList, $new($ArrayList));
		for (int32_t i = 0; i < this->this$0->pathDirs->length; ++i) {
			$var($File, dir, $new($File, this->this$0->pathDirs->get(i)));
			$var($StringArray, files, dir->list(this->val$filter));
			if (files == nullptr) {
				continue;
			}
			for (int32_t f = 0; f < $nc(files)->length; ++f) {
				fileList->add($($nc(files->get(f))->toLowerCase()));
			}
		}
		return $cast($StringArray, fileList->toArray($SunFontManager::STR_ARRAY));
	}
}

SunFontManager$4::SunFontManager$4() {
}

$Class* SunFontManager$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$4, this$0)},
		{"val$filter", "Ljava/io/FilenameFilter;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$4, val$filter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/SunFontManager;Ljava/io/FilenameFilter;)V", "()V", 0, $method(SunFontManager$4, init$, void, $SunFontManager*, $FilenameFilter*)},
		{"run", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SunFontManager$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.SunFontManager",
		"getFontFilesFromPath",
		"(Z)[Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.SunFontManager$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.SunFontManager$4",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.SunFontManager"
	};
	$loadClass(SunFontManager$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunFontManager$4);
	});
	return class$;
}

$Class* SunFontManager$4::class$ = nullptr;

	} // font
} // sun