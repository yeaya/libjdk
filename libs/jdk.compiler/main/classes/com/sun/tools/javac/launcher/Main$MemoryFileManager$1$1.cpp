#include <com/sun/tools/javac/launcher/Main$MemoryFileManager$1$1.h>
#include <com/sun/tools/javac/launcher/Main$MemoryFileManager$1.h>
#include <com/sun/tools/javac/launcher/Main$MemoryFileManager.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Main$MemoryFileManager$1 = ::com::sun::tools::javac::launcher::Main$MemoryFileManager$1;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

void Main$MemoryFileManager$1$1::init$($Main$MemoryFileManager$1* this$1) {
	$set(this, this$1, this$1);
	$ByteArrayOutputStream::init$();
}

void Main$MemoryFileManager$1$1::close() {
	$ByteArrayOutputStream::close();
	$nc($nc(this->this$1->this$0)->map)->put(this->this$1->val$className, $(toByteArray()));
}

Main$MemoryFileManager$1$1::Main$MemoryFileManager$1$1() {
}

$Class* Main$MemoryFileManager$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/launcher/Main$MemoryFileManager$1;", nullptr, $FINAL | $SYNTHETIC, $field(Main$MemoryFileManager$1$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/launcher/Main$MemoryFileManager$1;)V", nullptr, 0, $method(Main$MemoryFileManager$1$1, init$, void, $Main$MemoryFileManager$1*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Main$MemoryFileManager$1$1, close, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.launcher.Main$MemoryFileManager$1",
		"openOutputStream",
		"()Ljava/io/OutputStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.launcher.Main$MemoryFileManager", "com.sun.tools.javac.launcher.Main", "MemoryFileManager", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.launcher.Main$MemoryFileManager$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.launcher.Main$MemoryFileManager$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.launcher.Main$MemoryFileManager$1$1",
		"java.io.ByteArrayOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.launcher.Main"
	};
	$loadClass(Main$MemoryFileManager$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Main$MemoryFileManager$1$1));
	});
	return class$;
}

$Class* Main$MemoryFileManager$1$1::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com