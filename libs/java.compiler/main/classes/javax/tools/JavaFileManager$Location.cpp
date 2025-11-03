#include <javax/tools/JavaFileManager$Location.h>

#include <javax/tools/JavaFileManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaFileManager = ::javax::tools::JavaFileManager;

namespace javax {
	namespace tools {

$MethodInfo _JavaFileManager$Location_MethodInfo_[] = {
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isModuleOrientedLocation", "()Z", nullptr, $PUBLIC},
	{"isOutputLocation", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JavaFileManager$Location_InnerClassesInfo_[] = {
	{"javax.tools.JavaFileManager$Location", "javax.tools.JavaFileManager", "Location", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavaFileManager$Location_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.tools.JavaFileManager$Location",
	nullptr,
	nullptr,
	nullptr,
	_JavaFileManager$Location_MethodInfo_,
	nullptr,
	nullptr,
	_JavaFileManager$Location_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.tools.JavaFileManager"
};

$Object* allocate$JavaFileManager$Location($Class* clazz) {
	return $of($alloc(JavaFileManager$Location));
}

bool JavaFileManager$Location::isModuleOrientedLocation() {
	return $nc($(getName()))->matches("\\bMODULE\\b"_s);
}

$Class* JavaFileManager$Location::load$($String* name, bool initialize) {
	$loadClass(JavaFileManager$Location, name, initialize, &_JavaFileManager$Location_ClassInfo_, allocate$JavaFileManager$Location);
	return class$;
}

$Class* JavaFileManager$Location::class$ = nullptr;

	} // tools
} // javax