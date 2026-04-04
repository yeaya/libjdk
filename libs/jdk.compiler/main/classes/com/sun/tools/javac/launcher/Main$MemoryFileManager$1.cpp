#include <com/sun/tools/javac/launcher/Main$MemoryFileManager$1.h>
#include <com/sun/tools/javac/launcher/Main$MemoryFileManager$1$1.h>
#include <com/sun/tools/javac/launcher/Main$MemoryFileManager.h>
#include <java/io/OutputStream.h>
#include <java/net/URI.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/SimpleJavaFileObject.h>
#include <jcpp.h>

using $Main$MemoryFileManager = ::com::sun::tools::javac::launcher::Main$MemoryFileManager;
using $Main$MemoryFileManager$1$1 = ::com::sun::tools::javac::launcher::Main$MemoryFileManager$1$1;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $SimpleJavaFileObject = ::javax::tools::SimpleJavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

void Main$MemoryFileManager$1::init$($Main$MemoryFileManager* this$0, $URI* arg0, $JavaFileObject$Kind* arg1, $String* val$className) {
	$set(this, this$0, this$0);
	$set(this, val$className, val$className);
	$SimpleJavaFileObject::init$(arg0, arg1);
}

$OutputStream* Main$MemoryFileManager$1::openOutputStream() {
	return $new($Main$MemoryFileManager$1$1, this);
}

Main$MemoryFileManager$1::Main$MemoryFileManager$1() {
}

$Class* Main$MemoryFileManager$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/launcher/Main$MemoryFileManager;", nullptr, $FINAL | $SYNTHETIC, $field(Main$MemoryFileManager$1, this$0)},
		{"val$className", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Main$MemoryFileManager$1, val$className)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/launcher/Main$MemoryFileManager;Ljava/net/URI;Ljavax/tools/JavaFileObject$Kind;Ljava/lang/String;)V", nullptr, 0, $method(Main$MemoryFileManager$1, init$, void, $Main$MemoryFileManager*, $URI*, $JavaFileObject$Kind*, $String*)},
		{"openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(Main$MemoryFileManager$1, openOutputStream, $OutputStream*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.launcher.Main$MemoryFileManager",
		"createInMemoryClassFile",
		"(Ljava/lang/String;)Ljavax/tools/JavaFileObject;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.launcher.Main$MemoryFileManager", "com.sun.tools.javac.launcher.Main", "MemoryFileManager", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.launcher.Main$MemoryFileManager$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.launcher.Main$MemoryFileManager$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.launcher.Main$MemoryFileManager$1",
		"javax.tools.SimpleJavaFileObject",
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
	$loadClass(Main$MemoryFileManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main$MemoryFileManager$1);
	});
	return class$;
}

$Class* Main$MemoryFileManager$1::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com