#include <sun/font/FileFont$CreatedFontFileDisposerRecord$1.h>
#include <java/io/File.h>
#include <java/util/Vector.h>
#include <sun/font/CreatedFontTracker.h>
#include <sun/font/FileFont$CreatedFontFileDisposerRecord.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileFont$CreatedFontFileDisposerRecord = ::sun::font::FileFont$CreatedFontFileDisposerRecord;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

void FileFont$CreatedFontFileDisposerRecord$1::init$($FileFont$CreatedFontFileDisposerRecord* this$0) {
	$set(this, this$0, this$0);
}

$Object* FileFont$CreatedFontFileDisposerRecord$1::run() {
	$synchronized(this->this$0->fontFile) {
		--this->this$0->count;
		if (this->this$0->count > 0) {
			return nullptr;
		}
	}
	if (this->this$0->fontFile != nullptr) {
		try {
			if (this->this$0->tracker != nullptr) {
				this->this$0->tracker->subBytes((int32_t)this->this$0->fontFile->length());
			}
			$nc(this->this$0->fontFile)->delete$();
			$nc($nc($($SunFontManager::getInstance()))->tmpFontFiles)->remove(this->this$0->fontFile);
		} catch ($Exception& e) {
		}
	}
	return nullptr;
}

FileFont$CreatedFontFileDisposerRecord$1::FileFont$CreatedFontFileDisposerRecord$1() {
}

$Class* FileFont$CreatedFontFileDisposerRecord$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/FileFont$CreatedFontFileDisposerRecord;", nullptr, $FINAL | $SYNTHETIC, $field(FileFont$CreatedFontFileDisposerRecord$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/FileFont$CreatedFontFileDisposerRecord;)V", nullptr, 0, $method(FileFont$CreatedFontFileDisposerRecord$1, init$, void, $FileFont$CreatedFontFileDisposerRecord*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FileFont$CreatedFontFileDisposerRecord$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.FileFont$CreatedFontFileDisposerRecord",
		"dispose",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.FileFont$CreatedFontFileDisposerRecord", "sun.font.FileFont", "CreatedFontFileDisposerRecord", $PRIVATE | $STATIC},
		{"sun.font.FileFont$CreatedFontFileDisposerRecord$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.FileFont$CreatedFontFileDisposerRecord$1",
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
		"sun.font.FileFont"
	};
	$loadClass(FileFont$CreatedFontFileDisposerRecord$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileFont$CreatedFontFileDisposerRecord$1);
	});
	return class$;
}

$Class* FileFont$CreatedFontFileDisposerRecord$1::class$ = nullptr;

	} // font
} // sun