#include <sun/font/FileFont$CreatedFontFileDisposerRecord.h>
#include <java/io/File.h>
#include <java/security/AccessController.h>
#include <sun/font/CreatedFontTracker.h>
#include <sun/font/FileFont$CreatedFontFileDisposerRecord$1.h>
#include <sun/font/FileFont.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $CreatedFontTracker = ::sun::font::CreatedFontTracker;
using $FileFont$CreatedFontFileDisposerRecord$1 = ::sun::font::FileFont$CreatedFontFileDisposerRecord$1;

namespace sun {
	namespace font {

void FileFont$CreatedFontFileDisposerRecord::init$($File* file, int32_t cnt, $CreatedFontTracker* tracker) {
	$set(this, fontFile, nullptr);
	this->count = 0;
	$set(this, fontFile, file);
	this->count = (cnt > 0) ? cnt : 1;
	$set(this, tracker, tracker);
}

void FileFont$CreatedFontFileDisposerRecord::dispose() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($FileFont$CreatedFontFileDisposerRecord$1, this));
}

FileFont$CreatedFontFileDisposerRecord::FileFont$CreatedFontFileDisposerRecord() {
}

$Class* FileFont$CreatedFontFileDisposerRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fontFile", "Ljava/io/File;", nullptr, 0, $field(FileFont$CreatedFontFileDisposerRecord, fontFile)},
		{"count", "I", nullptr, 0, $field(FileFont$CreatedFontFileDisposerRecord, count)},
		{"tracker", "Lsun/font/CreatedFontTracker;", nullptr, 0, $field(FileFont$CreatedFontFileDisposerRecord, tracker)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;ILsun/font/CreatedFontTracker;)V", nullptr, $PRIVATE, $method(FileFont$CreatedFontFileDisposerRecord, init$, void, $File*, int32_t, $CreatedFontTracker*)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(FileFont$CreatedFontFileDisposerRecord, dispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.FileFont$CreatedFontFileDisposerRecord", "sun.font.FileFont", "CreatedFontFileDisposerRecord", $PRIVATE | $STATIC},
		{"sun.font.FileFont$CreatedFontFileDisposerRecord$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.FileFont$CreatedFontFileDisposerRecord",
		"java.lang.Object",
		"sun.java2d.DisposerRecord",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.FileFont"
	};
	$loadClass(FileFont$CreatedFontFileDisposerRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileFont$CreatedFontFileDisposerRecord);
	});
	return class$;
}

$Class* FileFont$CreatedFontFileDisposerRecord::class$ = nullptr;

	} // font
} // sun