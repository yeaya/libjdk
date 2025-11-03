#include <sun/tools/jar/Main$Hasher$1.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleReader.h>
#include <java/lang/module/ModuleReference.h>
#include <java/net/URI.h>
#include <sun/tools/jar/Main$Hasher.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleReader = ::java::lang::module::ModuleReader;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $URI = ::java::net::URI;
using $Main = ::sun::tools::jar::Main;
using $Main$Hasher = ::sun::tools::jar::Main$Hasher;

namespace sun {
	namespace tools {
		namespace jar {

$FieldInfo _Main$Hasher$1_FieldInfo_[] = {
	{"this$1", "Lsun/tools/jar/Main$Hasher;", nullptr, $FINAL | $SYNTHETIC, $field(Main$Hasher$1, this$1)},
	{"val$this$0", "Lsun/tools/jar/Main;", nullptr, $FINAL | $SYNTHETIC, $field(Main$Hasher$1, val$this$0)},
	{}
};

$MethodInfo _Main$Hasher$1_MethodInfo_[] = {
	{"<init>", "(Lsun/tools/jar/Main$Hasher;Ljava/lang/module/ModuleDescriptor;Ljava/net/URI;Lsun/tools/jar/Main;)V", nullptr, 0, $method(static_cast<void(Main$Hasher$1::*)($Main$Hasher*,$ModuleDescriptor*,$URI*,$Main*)>(&Main$Hasher$1::init$))},
	{"open", "()Ljava/lang/module/ModuleReader;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Main$Hasher$1_EnclosingMethodInfo_ = {
	"sun.tools.jar.Main$Hasher",
	"<init>",
	"(Lsun/tools/jar/Main;Ljava/lang/module/ModuleDescriptor;Ljava/lang/String;)V"
};

$InnerClassInfo _Main$Hasher$1_InnerClassesInfo_[] = {
	{"sun.tools.jar.Main$Hasher", "sun.tools.jar.Main", "Hasher", $PRIVATE},
	{"sun.tools.jar.Main$Hasher$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Main$Hasher$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.Main$Hasher$1",
	"java.lang.module.ModuleReference",
	nullptr,
	_Main$Hasher$1_FieldInfo_,
	_Main$Hasher$1_MethodInfo_,
	nullptr,
	&_Main$Hasher$1_EnclosingMethodInfo_,
	_Main$Hasher$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.Main"
};

$Object* allocate$Main$Hasher$1($Class* clazz) {
	return $of($alloc(Main$Hasher$1));
}

void Main$Hasher$1::init$($Main$Hasher* this$1, $ModuleDescriptor* arg0, $URI* arg1, $Main* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
	$ModuleReference::init$(arg0, arg1);
}

$ModuleReader* Main$Hasher$1::open() {
	$throwNew($UnsupportedOperationException, "should not reach here"_s);
	$shouldNotReachHere();
}

Main$Hasher$1::Main$Hasher$1() {
}

$Class* Main$Hasher$1::load$($String* name, bool initialize) {
	$loadClass(Main$Hasher$1, name, initialize, &_Main$Hasher$1_ClassInfo_, allocate$Main$Hasher$1);
	return class$;
}

$Class* Main$Hasher$1::class$ = nullptr;

		} // jar
	} // tools
} // sun