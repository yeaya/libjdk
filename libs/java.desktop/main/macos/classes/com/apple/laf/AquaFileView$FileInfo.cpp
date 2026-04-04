#include <com/apple/laf/AquaFileView$FileInfo.h>
#include <com/apple/laf/AquaFileView.h>
#include <java/io/File.h>
#include <java/io/UnsupportedEncodingException.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileView$FileInfo::init$($File* file) {
	this->launchServicesInfo = -1;
	this->isDirectory = $nc(file)->isDirectory();
	$set(this, absolutePath, file->getAbsolutePath());
	try {
		$set(this, pathBytes, $nc(this->absolutePath)->getBytes("UTF-8"_s));
	} catch ($UnsupportedEncodingException& e) {
		$set(this, pathBytes, $new($bytes, 0));
	}
}

AquaFileView$FileInfo::AquaFileView$FileInfo() {
}

$Class* AquaFileView$FileInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"isDirectory", "Z", nullptr, $FINAL, $field(AquaFileView$FileInfo, isDirectory)},
		{"absolutePath", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaFileView$FileInfo, absolutePath)},
		{"pathBytes", "[B", nullptr, 0, $field(AquaFileView$FileInfo, pathBytes)},
		{"displayName", "Ljava/lang/String;", nullptr, 0, $field(AquaFileView$FileInfo, displayName)},
		{"icon", "Ljavax/swing/Icon;", nullptr, 0, $field(AquaFileView$FileInfo, icon)},
		{"launchServicesInfo", "I", nullptr, 0, $field(AquaFileView$FileInfo, launchServicesInfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", nullptr, 0, $method(AquaFileView$FileInfo, init$, void, $File*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileView$FileInfo", "com.apple.laf.AquaFileView", "FileInfo", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileView$FileInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileView"
	};
	$loadClass(AquaFileView$FileInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileView$FileInfo);
	});
	return class$;
}

$Class* AquaFileView$FileInfo::class$ = nullptr;

		} // laf
	} // apple
} // com