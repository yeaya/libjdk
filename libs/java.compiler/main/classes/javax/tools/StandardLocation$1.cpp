#include <javax/tools/StandardLocation$1.h>

#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace javax {
	namespace tools {

$FieldInfo _StandardLocation$1_FieldInfo_[] = {
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(StandardLocation$1, val$name)},
	{}
};

$MethodInfo _StandardLocation$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(StandardLocation$1::*)($String*)>(&StandardLocation$1::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isOutputLocation", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _StandardLocation$1_EnclosingMethodInfo_ = {
	"javax.tools.StandardLocation",
	"locationFor",
	"(Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;"
};

$InnerClassInfo _StandardLocation$1_InnerClassesInfo_[] = {
	{"javax.tools.StandardLocation$1", nullptr, nullptr, 0},
	{"javax.tools.JavaFileManager$Location", "javax.tools.JavaFileManager", "Location", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StandardLocation$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.tools.StandardLocation$1",
	"java.lang.Object",
	"javax.tools.JavaFileManager$Location",
	_StandardLocation$1_FieldInfo_,
	_StandardLocation$1_MethodInfo_,
	nullptr,
	&_StandardLocation$1_EnclosingMethodInfo_,
	_StandardLocation$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.tools.StandardLocation"
};

$Object* allocate$StandardLocation$1($Class* clazz) {
	return $of($alloc(StandardLocation$1));
}

void StandardLocation$1::init$($String* val$name) {
	$set(this, val$name, val$name);
}

$String* StandardLocation$1::getName() {
	return this->val$name;
}

bool StandardLocation$1::isOutputLocation() {
	return $nc(this->val$name)->endsWith("_OUTPUT"_s);
}

StandardLocation$1::StandardLocation$1() {
}

$Class* StandardLocation$1::load$($String* name, bool initialize) {
	$loadClass(StandardLocation$1, name, initialize, &_StandardLocation$1_ClassInfo_, allocate$StandardLocation$1);
	return class$;
}

$Class* StandardLocation$1::class$ = nullptr;

	} // tools
} // javax