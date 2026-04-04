#include <sun/tools/jar/Main$Entry.h>
#include <java/io/File.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace tools {
		namespace jar {

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
	return $nc(this->file)->equals($nc($cast(Main$Entry, o))->file);
}

int32_t Main$Entry::hashCode() {
	return $nc(this->file)->hashCode();
}

Main$Entry::Main$Entry() {
}

$Class* Main$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(Main$Entry, name)},
		{"file", "Ljava/io/File;", nullptr, $FINAL, $field(Main$Entry, file)},
		{"isDir", "Z", nullptr, $FINAL, $field(Main$Entry, isDir)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;Ljava/lang/String;Z)V", nullptr, 0, $method(Main$Entry, init$, void, $File*, $String*, bool)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Main$Entry, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Main$Entry, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.Main$Entry", "sun.tools.jar.Main", "Entry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.tools.jar.Main$Entry",
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
		"sun.tools.jar.Main"
	};
	$loadClass(Main$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main$Entry);
	});
	return class$;
}

$Class* Main$Entry::class$ = nullptr;

		} // jar
	} // tools
} // sun