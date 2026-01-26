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
using $URI = ::java::net::URI;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $Optional = ::java::util::Optional;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;

namespace sun {
	namespace tools {
		namespace jar {

$FieldInfo _Main$ZipFileModuleInfoEntry_FieldInfo_[] = {
	{"zipFile", "Ljava/util/zip/ZipFile;", nullptr, $PRIVATE | $FINAL, $field(Main$ZipFileModuleInfoEntry, zipFile)},
	{"entry", "Ljava/util/zip/ZipEntry;", nullptr, $PRIVATE | $FINAL, $field(Main$ZipFileModuleInfoEntry, entry)},
	{}
};

$MethodInfo _Main$ZipFileModuleInfoEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/util/zip/ZipFile;Ljava/util/zip/ZipEntry;)V", nullptr, 0, $method(Main$ZipFileModuleInfoEntry, init$, void, $ZipFile*, $ZipEntry*)},
	{"bytes", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(Main$ZipFileModuleInfoEntry, bytes, $InputStream*), "java.io.IOException"},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Main$ZipFileModuleInfoEntry, name, $String*)},
	{"uriString", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(Main$ZipFileModuleInfoEntry, uriString, $Optional*)},
	{}
};

$InnerClassInfo _Main$ZipFileModuleInfoEntry_InnerClassesInfo_[] = {
	{"sun.tools.jar.Main$ZipFileModuleInfoEntry", "sun.tools.jar.Main", "ZipFileModuleInfoEntry", $STATIC},
	{"sun.tools.jar.Main$ModuleInfoEntry", "sun.tools.jar.Main", "ModuleInfoEntry", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Main$ZipFileModuleInfoEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.Main$ZipFileModuleInfoEntry",
	"java.lang.Object",
	"sun.tools.jar.Main$ModuleInfoEntry",
	_Main$ZipFileModuleInfoEntry_FieldInfo_,
	_Main$ZipFileModuleInfoEntry_MethodInfo_,
	nullptr,
	nullptr,
	_Main$ZipFileModuleInfoEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.Main"
};

$Object* allocate$Main$ZipFileModuleInfoEntry($Class* clazz) {
	return $of($alloc(Main$ZipFileModuleInfoEntry));
}

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
	$useLocalCurrentObjectStackCache();
	$var($String, uri, $nc($($nc(($($Paths::get($($nc(this->zipFile)->getName()), $$new($StringArray, 0)))))->toUri()))->toString());
	$assign(uri, $str({"jar:"_s, uri, "!/"_s, $($nc(this->entry)->getName())}));
	return $Optional::of(uri);
}

Main$ZipFileModuleInfoEntry::Main$ZipFileModuleInfoEntry() {
}

$Class* Main$ZipFileModuleInfoEntry::load$($String* name, bool initialize) {
	$loadClass(Main$ZipFileModuleInfoEntry, name, initialize, &_Main$ZipFileModuleInfoEntry_ClassInfo_, allocate$Main$ZipFileModuleInfoEntry);
	return class$;
}

$Class* Main$ZipFileModuleInfoEntry::class$ = nullptr;

		} // jar
	} // tools
} // sun