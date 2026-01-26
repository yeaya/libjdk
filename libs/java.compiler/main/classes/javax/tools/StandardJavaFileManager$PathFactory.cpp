#include <javax/tools/StandardJavaFileManager$PathFactory.h>

#include <java/nio/file/Path.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace javax {
	namespace tools {

$MethodInfo _StandardJavaFileManager$PathFactory_MethodInfo_[] = {
	{"getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(StandardJavaFileManager$PathFactory, getPath, $Path*, $String*, $StringArray*)},
	{}
};

$InnerClassInfo _StandardJavaFileManager$PathFactory_InnerClassesInfo_[] = {
	{"javax.tools.StandardJavaFileManager$PathFactory", "javax.tools.StandardJavaFileManager", "PathFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StandardJavaFileManager$PathFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.tools.StandardJavaFileManager$PathFactory",
	nullptr,
	nullptr,
	nullptr,
	_StandardJavaFileManager$PathFactory_MethodInfo_,
	nullptr,
	nullptr,
	_StandardJavaFileManager$PathFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.tools.StandardJavaFileManager"
};

$Object* allocate$StandardJavaFileManager$PathFactory($Class* clazz) {
	return $of($alloc(StandardJavaFileManager$PathFactory));
}

$Class* StandardJavaFileManager$PathFactory::load$($String* name, bool initialize) {
	$loadClass(StandardJavaFileManager$PathFactory, name, initialize, &_StandardJavaFileManager$PathFactory_ClassInfo_, allocate$StandardJavaFileManager$PathFactory);
	return class$;
}

$Class* StandardJavaFileManager$PathFactory::class$ = nullptr;

	} // tools
} // javax