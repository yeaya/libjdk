#include <sun/tools/jar/Main$StreamedModuleInfoEntry.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/util/Optional.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional = ::java::util::Optional;

namespace sun {
	namespace tools {
		namespace jar {

$FieldInfo _Main$StreamedModuleInfoEntry_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Main$StreamedModuleInfoEntry, name$)},
	{"bytes", "[B", nullptr, $PRIVATE | $FINAL, $field(Main$StreamedModuleInfoEntry, bytes$)},
	{}
};

$MethodInfo _Main$StreamedModuleInfoEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[B)V", nullptr, 0, $method(Main$StreamedModuleInfoEntry, init$, void, $String*, $bytes*)},
	{"bytes", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(Main$StreamedModuleInfoEntry, bytes, $InputStream*), "java.io.IOException"},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Main$StreamedModuleInfoEntry, name, $String*)},
	{"uriString", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(Main$StreamedModuleInfoEntry, uriString, $Optional*)},
	{}
};

$InnerClassInfo _Main$StreamedModuleInfoEntry_InnerClassesInfo_[] = {
	{"sun.tools.jar.Main$StreamedModuleInfoEntry", "sun.tools.jar.Main", "StreamedModuleInfoEntry", $STATIC},
	{"sun.tools.jar.Main$ModuleInfoEntry", "sun.tools.jar.Main", "ModuleInfoEntry", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Main$StreamedModuleInfoEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.Main$StreamedModuleInfoEntry",
	"java.lang.Object",
	"sun.tools.jar.Main$ModuleInfoEntry",
	_Main$StreamedModuleInfoEntry_FieldInfo_,
	_Main$StreamedModuleInfoEntry_MethodInfo_,
	nullptr,
	nullptr,
	_Main$StreamedModuleInfoEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.Main"
};

$Object* allocate$Main$StreamedModuleInfoEntry($Class* clazz) {
	return $of($alloc(Main$StreamedModuleInfoEntry));
}

void Main$StreamedModuleInfoEntry::init$($String* name, $bytes* bytes) {
	$set(this, name$, name);
	$set(this, bytes$, bytes);
}

$String* Main$StreamedModuleInfoEntry::name() {
	return this->name$;
}

$InputStream* Main$StreamedModuleInfoEntry::bytes() {
	return $new($ByteArrayInputStream, this->bytes$);
}

$Optional* Main$StreamedModuleInfoEntry::uriString() {
	return $Optional::empty();
}

Main$StreamedModuleInfoEntry::Main$StreamedModuleInfoEntry() {
}

$Class* Main$StreamedModuleInfoEntry::load$($String* name, bool initialize) {
	$loadClass(Main$StreamedModuleInfoEntry, name, initialize, &_Main$StreamedModuleInfoEntry_ClassInfo_, allocate$Main$StreamedModuleInfoEntry);
	return class$;
}

$Class* Main$StreamedModuleInfoEntry::class$ = nullptr;

		} // jar
	} // tools
} // sun