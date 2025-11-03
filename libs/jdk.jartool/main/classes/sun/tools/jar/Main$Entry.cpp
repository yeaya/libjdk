#include <sun/tools/jar/Main$Entry.h>

#include <java/io/File.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

$FieldInfo _Main$Entry_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(Main$Entry, name)},
	{"file", "Ljava/io/File;", nullptr, $FINAL, $field(Main$Entry, file)},
	{"isDir", "Z", nullptr, $FINAL, $field(Main$Entry, isDir)},
	{}
};

$MethodInfo _Main$Entry_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(Main$Entry::*)($File*,$String*,bool)>(&Main$Entry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Main$Entry_InnerClassesInfo_[] = {
	{"sun.tools.jar.Main$Entry", "sun.tools.jar.Main", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Main$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.Main$Entry",
	"java.lang.Object",
	nullptr,
	_Main$Entry_FieldInfo_,
	_Main$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_Main$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.Main"
};

$Object* allocate$Main$Entry($Class* clazz) {
	return $of($alloc(Main$Entry));
}

void Main$Entry::init$($File* file, $String* name, bool isDir) {
	$set(this, file, file);
	this->isDir = isDir;
	$set(this, name, name);
}

bool Main$Entry::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf(Main$Entry, o))) {
		return false;
	}
	return $nc(this->file)->equals($nc(($cast(Main$Entry, o)))->file);
}

int32_t Main$Entry::hashCode() {
	return $nc(this->file)->hashCode();
}

Main$Entry::Main$Entry() {
}

$Class* Main$Entry::load$($String* name, bool initialize) {
	$loadClass(Main$Entry, name, initialize, &_Main$Entry_ClassInfo_, allocate$Main$Entry);
	return class$;
}

$Class* Main$Entry::class$ = nullptr;

		} // jar
	} // tools
} // sun