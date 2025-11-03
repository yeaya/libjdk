#include <sun/tools/jar/Main$Hasher$2.h>

#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleReference.h>
#include <java/util/Collections.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <sun/tools/jar/Main$Hasher.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $Collections = ::java::util::Collections;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Main = ::sun::tools::jar::Main;
using $Main$Hasher = ::sun::tools::jar::Main$Hasher;

namespace sun {
	namespace tools {
		namespace jar {

$FieldInfo _Main$Hasher$2_FieldInfo_[] = {
	{"this$1", "Lsun/tools/jar/Main$Hasher;", nullptr, $FINAL | $SYNTHETIC, $field(Main$Hasher$2, this$1)},
	{"val$mref", "Ljava/lang/module/ModuleReference;", nullptr, $FINAL | $SYNTHETIC, $field(Main$Hasher$2, val$mref)},
	{"val$descriptor", "Ljava/lang/module/ModuleDescriptor;", nullptr, $FINAL | $SYNTHETIC, $field(Main$Hasher$2, val$descriptor)},
	{"val$this$0", "Lsun/tools/jar/Main;", nullptr, $FINAL | $SYNTHETIC, $field(Main$Hasher$2, val$this$0)},
	{}
};

$MethodInfo _Main$Hasher$2_MethodInfo_[] = {
	{"<init>", "(Lsun/tools/jar/Main$Hasher;Lsun/tools/jar/Main;Ljava/lang/module/ModuleDescriptor;Ljava/lang/module/ModuleReference;)V", "()V", 0, $method(static_cast<void(Main$Hasher$2::*)($Main$Hasher*,$Main*,$ModuleDescriptor*,$ModuleReference*)>(&Main$Hasher$2::init$))},
	{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/module/ModuleReference;>;", $PUBLIC},
	{"findAll", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Main$Hasher$2_EnclosingMethodInfo_ = {
	"sun.tools.jar.Main$Hasher",
	"<init>",
	"(Lsun/tools/jar/Main;Ljava/lang/module/ModuleDescriptor;Ljava/lang/String;)V"
};

$InnerClassInfo _Main$Hasher$2_InnerClassesInfo_[] = {
	{"sun.tools.jar.Main$Hasher", "sun.tools.jar.Main", "Hasher", $PRIVATE},
	{"sun.tools.jar.Main$Hasher$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Main$Hasher$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.Main$Hasher$2",
	"java.lang.Object",
	"java.lang.module.ModuleFinder",
	_Main$Hasher$2_FieldInfo_,
	_Main$Hasher$2_MethodInfo_,
	nullptr,
	&_Main$Hasher$2_EnclosingMethodInfo_,
	_Main$Hasher$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.Main"
};

$Object* allocate$Main$Hasher$2($Class* clazz) {
	return $of($alloc(Main$Hasher$2));
}

void Main$Hasher$2::init$($Main$Hasher* this$1, $Main* val$this$0, $ModuleDescriptor* val$descriptor, $ModuleReference* val$mref) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
	$set(this, val$descriptor, val$descriptor);
	$set(this, val$mref, val$mref);
}

$Optional* Main$Hasher$2::find($String* name) {
	if ($nc($($nc(this->val$descriptor)->name()))->equals(name)) {
		return $Optional::of(this->val$mref);
	} else {
		return $Optional::empty();
	}
}

$Set* Main$Hasher$2::findAll() {
	return $Collections::singleton(this->val$mref);
}

Main$Hasher$2::Main$Hasher$2() {
}

$Class* Main$Hasher$2::load$($String* name, bool initialize) {
	$loadClass(Main$Hasher$2, name, initialize, &_Main$Hasher$2_ClassInfo_, allocate$Main$Hasher$2);
	return class$;
}

$Class* Main$Hasher$2::class$ = nullptr;

		} // jar
	} // tools
} // sun