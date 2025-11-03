#include <javax/tools/Tool.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace javax {
	namespace tools {

$MethodInfo _Tool_MethodInfo_[] = {
	{"getSourceVersions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/lang/model/SourceVersion;>;", $PUBLIC | $ABSTRACT},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"run", "(Ljava/io/InputStream;Ljava/io/OutputStream;Ljava/io/OutputStream;[Ljava/lang/String;)I", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{}
};

$ClassInfo _Tool_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.tools.Tool",
	nullptr,
	nullptr,
	nullptr,
	_Tool_MethodInfo_
};

$Object* allocate$Tool($Class* clazz) {
	return $of($alloc(Tool));
}

$String* Tool::name() {
	return ""_s;
}

$Class* Tool::load$($String* name, bool initialize) {
	$loadClass(Tool, name, initialize, &_Tool_ClassInfo_, allocate$Tool);
	return class$;
}

$Class* Tool::class$ = nullptr;

	} // tools
} // javax