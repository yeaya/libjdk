#include <sun/tools/jar/Main$ZipFileModuleInfoEntry.h>
#include <java/io/InputStream.h>
#include <java/net/URI.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/Optional.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipFile.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Paths = ::java::nio::file::Paths;
using $Optional = ::java::util::Optional;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;

namespace sun {
	namespace tools {
		namespace jar {

void Main$ZipFileModuleInfoEntry::init$($ZipFile* zipFile, $ZipEntry* entry) {
	$set(this, zipFile, zipFile);
	$set(this, entry, entry);
}

$String* Main$ZipFileModuleInfoEntry::name() {
	return $nc(this->entry)->getName();
}

$InputStream* Main$ZipFileModuleInfoEntry::bytes() {
	return $nc(this->zipFile)->getInputStream(this->entry);
}

$Optional* Main$ZipFileModuleInfoEntry::uriString() {
	$useLocalObjectStack();
	$var($String, uri, $$nc(($$nc($Paths::get($($nc(this->zipFile)->getName()), $$new($StringArray, 0))))->toUri())->toString());
	$assign(uri, $str({"jar:"_s, uri, "!/"_s, $($nc(this->entry)->getName())}));
	return $Optional::of(uri);
}

Main$ZipFileModuleInfoEntry::Main$ZipFileModuleInfoEntry() {
}

$Class* Main$ZipFileModuleInfoEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"zipFile", "Ljava/util/zip/ZipFile;", nullptr, $PRIVATE | $FINAL, $field(Main$ZipFileModuleInfoEntry, zipFile)},
		{"entry", "Ljava/util/zip/ZipEntry;", nullptr, $PRIVATE | $FINAL, $field(Main$ZipFileModuleInfoEntry, entry)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/zip/ZipFile;Ljava/util/zip/ZipEntry;)V", nullptr, 0, $method(Main$ZipFileModuleInfoEntry, init$, void, $ZipFile*, $ZipEntry*)},
		{"bytes", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(Main$ZipFileModuleInfoEntry, bytes, $InputStream*), "java.io.IOException"},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Main$ZipFileModuleInfoEntry, name, $String*)},
		{"uriString", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(Main$ZipFileModuleInfoEntry, uriString, $Optional*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.Main$ZipFileModuleInfoEntry", "sun.tools.jar.Main", "ZipFileModuleInfoEntry", $STATIC},
		{"sun.tools.jar.Main$ModuleInfoEntry", "sun.tools.jar.Main", "ModuleInfoEntry", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.tools.jar.Main$ZipFileModuleInfoEntry",
		"java.lang.Object",
		"sun.tools.jar.Main$ModuleInfoEntry",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.tools.jar.Main"
	};
	$loadClass(Main$ZipFileModuleInfoEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main$ZipFileModuleInfoEntry);
	});
	return class$;
}

$Class* Main$ZipFileModuleInfoEntry::class$ = nullptr;

		} // jar
	} // tools
} // sun