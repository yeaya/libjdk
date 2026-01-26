#include <sun/tools/jar/Main$ModuleInfoEntry.h>

#include <java/io/InputStream.h>
#include <java/util/Optional.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional = ::java::util::Optional;

namespace sun {
	namespace tools {
		namespace jar {

$MethodInfo _Main$ModuleInfoEntry_MethodInfo_[] = {
	{"bytes", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Main$ModuleInfoEntry, bytes, $InputStream*), "java.io.IOException"},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Main$ModuleInfoEntry, name, $String*)},
	{"uriString", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Main$ModuleInfoEntry, uriString, $Optional*)},
	{}
};

$InnerClassInfo _Main$ModuleInfoEntry_InnerClassesInfo_[] = {
	{"sun.tools.jar.Main$ModuleInfoEntry", "sun.tools.jar.Main", "ModuleInfoEntry", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Main$ModuleInfoEntry_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.tools.jar.Main$ModuleInfoEntry",
	nullptr,
	nullptr,
	nullptr,
	_Main$ModuleInfoEntry_MethodInfo_,
	nullptr,
	nullptr,
	_Main$ModuleInfoEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.Main"
};

$Object* allocate$Main$ModuleInfoEntry($Class* clazz) {
	return $of($alloc(Main$ModuleInfoEntry));
}

$Class* Main$ModuleInfoEntry::load$($String* name, bool initialize) {
	$loadClass(Main$ModuleInfoEntry, name, initialize, &_Main$ModuleInfoEntry_ClassInfo_, allocate$Main$ModuleInfoEntry);
	return class$;
}

$Class* Main$ModuleInfoEntry::class$ = nullptr;

		} // jar
	} // tools
} // sun